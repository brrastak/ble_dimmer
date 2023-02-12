
// user
#include "i_interrupt_handler.hpp"
#include "i_interrupt_vector.hpp"
#include "i_tick.hpp"
#include "time_interval.hpp"

#include "gpio.hpp"

#pragma once


namespace hal
{

/// Count ticks using peripheral timer (TIMER0)
/// on fixed frequency of 1000Hz
class SystemTick : public ITick, public IInterruptHandler
{
public:
    /// @brief Constructor
    SystemTick();

    /// @brief Get number of microseconds passed by now
    cmn::time_interval_t GetTime() override;

    /// @brief Increase tick counter value when interrupt occures
    void HandleInterrupt() override;

private:
    /// @brief Forbidden copy constructors
    SystemTick(const hal::SystemTick&) = delete;

    /// @brief Init hardware timer
    void init();

    /// @brief Subscribe to interrupt vector as handler
    /// @param subscribe pointer to subscribe function
    void subscribeToInterrupt(SubscribeFunction subscribe);

    /// @brief Passed microseconds counter
    cmn::time_interval_t m_timeCounter;
};

}
