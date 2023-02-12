
// user
#include "cmn_assert.hpp"
#include "interrupt_vector.hpp"
#include "system_tick.hpp"

// registers
#include "timer0registers.hpp"


namespace hal
{

SystemTick::SystemTick()
    : m_timeCounter{0_ms}
{
    // The interrupt is enabled inside of init function hense first subscribe
    subscribeToInterrupt(hal::InterruptVector<hal::IRQList::TIMER0>::Subscribe);
    init();
}

cmn::time_interval_t SystemTick::GetTime()
{
    return m_timeCounter;
}

void SystemTick::HandleInterrupt()
{
    TIMER0::EVENTS_COMPARE0::Write(0);
    TIMER0::TASKS_CLEAR::Write(1);
    m_timeCounter = m_timeCounter + 1_ms;
}

void SystemTick::init()
{
    TIMER0::MODE::MODEField::Timer::Set();
    TIMER0::TASKS_CLEAR::Write(1);
    TIMER0::BITMODE::BITMODEField::_16Bit::Set();

    // 16 MHz / 2^7 -> 125 kHz
    TIMER0::PRESCALER::Write(7);
    TIMER0::CC0::Write(125);

    TIMER0::TASKS_START::Write(1);
    TIMER0::INTENSET::COMPARE0::Enabled::Set();
}

void SystemTick::subscribeToInterrupt(SubscribeFunction subscribe)
{
    ASSERT(subscribe != nullptr);
    subscribe(this);
}

}
