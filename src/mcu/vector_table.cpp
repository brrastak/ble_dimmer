
// user
#include "interrupt_vector.hpp"
#include "startup.hpp"

// std
#include <cstdint>

namespace
{

// interrupt vector pointer
using vector_t = void(void);
using vectorptr_t = vector_t*;

}

// start stack address
extern volatile uintptr_t _stacktop;

namespace
{

using hal::InterruptVector;
using hal::IRQList;

// vector table in specific flash section
__attribute__((section(".isr_vector"), used)) const volatile vectorptr_t vectorTable[] =
{
    reinterpret_cast<vectorptr_t>(&_stacktop),  // stack pointer
    sys::startup,                               // entry point

    InterruptVector<IRQList::NMI>::Handle,
    InterruptVector<IRQList::HardFault>::Handle,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    InterruptVector<IRQList::SVC>::Handle,
    nullptr,
    nullptr,
    InterruptVector<IRQList::PendSV>::Handle,
    InterruptVector<IRQList::SysTick>::Handle,

    InterruptVector<IRQList::POWER_CLOCK>::Handle,
    InterruptVector<IRQList::RADIO>::Handle,
    InterruptVector<IRQList::UART0>::Handle,
    InterruptVector<IRQList::SPI0_TWI0>::Handle,
    InterruptVector<IRQList::SPI1_TWI1>::Handle,
    nullptr,
    InterruptVector<IRQList::GPIOTE>::Handle,
    InterruptVector<IRQList::ADC>::Handle,
    InterruptVector<IRQList::TIMER0>::Handle,
    InterruptVector<IRQList::TIMER1>::Handle,
    InterruptVector<IRQList::TIMER2>::Handle,
    InterruptVector<IRQList::RTC0>::Handle,
    InterruptVector<IRQList::TEMP>::Handle,
    InterruptVector<IRQList::RNG>::Handle,
    InterruptVector<IRQList::ECB>::Handle,
    InterruptVector<IRQList::CCM_AAR>::Handle,
    InterruptVector<IRQList::WDT>::Handle,
    InterruptVector<IRQList::RTC1>::Handle,
    InterruptVector<IRQList::QDEC>::Handle,
    InterruptVector<IRQList::LPCOMP>::Handle,
    InterruptVector<IRQList::SWI0>::Handle,
    InterruptVector<IRQList::SWI1>::Handle,
    InterruptVector<IRQList::SWI2>::Handle,
    InterruptVector<IRQList::SWI3>::Handle,
    InterruptVector<IRQList::SWI4>::Handle,
    InterruptVector<IRQList::SWI5>::Handle,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr
};

}
