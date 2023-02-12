
// user
#include "cmn_assert.hpp"
#include "i_interrupt_handler.hpp"
#include "i_interrupt_vector.hpp"

// hardware
#include "nvicregisters.hpp"

#pragma once


namespace hal
{

enum class IRQList
{
    NMI             = -5, 
    HardFault       = -4,
    SVC             = -3,
    PendSV          = -2,
    SysTick         = -1,

    POWER_CLOCK     = 0,
    RADIO,
    UART0,
    SPI0_TWI0,
    SPI1_TWI1,
    GPIOTE          = 6,
    ADC,
    TIMER0,
    TIMER1,
    TIMER2,
    RTC0,
    TEMP,
    RNG,
    ECB,
    CCM_AAR,
    WDT,
    RTC1,
    QDEC,
    LPCOMP,
    SWI0,
    SWI1,
    SWI2,
    SWI3,
    SWI4,
    SWI5,

    NumberOfIRQVectors
};


/// @brief Stores address of an interrupt handler and calls it when an interrupt occurs
/// @tparam IRQ - number of an interrupt vector
template<IRQList IRQ>
class InterruptVector
{
public:
    /// @brief Set address of an interrupt handler to be invoked
    /// @param handler class of hardware peripheral to proceed interrupt
    static void Subscribe(IInterruptHandler* handler);
    /// @brief Invoke interrupt handler.
    /// The function address should be placed to a vector table
    static void Handle();

private:
    static inline IInterruptHandler* volatile m_handler{nullptr};
};

}

namespace
{

/// @brief Enable interrupt in the NVIC
void EnableInterrupt(hal::IRQList irqNumber);

}



namespace hal
{

template<IRQList IRQ>
void InterruptVector<IRQ>::Subscribe(IInterruptHandler* handler)
{
    m_handler = handler;

    EnableInterrupt(IRQ);
}

template<IRQList IRQ>
void InterruptVector<IRQ>::Handle()
{
    if (m_handler != nullptr)
    {
        m_handler->HandleInterrupt();
    }
}

}

namespace
{

void EnableInterrupt(hal::IRQList irqNumber)
{
    // Cortex-M0 exceptions are not controlled by NVIC
    if (irqNumber < hal::IRQList::POWER_CLOCK || irqNumber >= hal::IRQList::NumberOfIRQVectors)
    {
        return;
    }

    static constexpr uint32_t number_of_bits = NVIC::ISER::SETENA::Size;
    uint32_t bitMask = 1 << (static_cast<uint32_t>(irqNumber) % number_of_bits);

    NVIC::ISER::SETENA::Set(bitMask);
}

}
