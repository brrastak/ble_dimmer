
// user
#include "clock.hpp"
#include "dimmer.hpp"
#include "gpio.hpp"
#include "system_tick.hpp"
#include "tick_counter.hpp"
#include "time_interval.hpp"



int main()
{
    hal::Gpio<2> ledPin{hal::OutputMode::push_pull, false};
    hal::SystemTick tick;
    hal::TickCounter msCounter{tick};
    cmn::Dimmer dimmer{10};
    
    while (true)
    {
        if (msCounter.IsTimeoutPassed(1_s))
        {
            ledPin.Toggle();
        }
    }
 
    while (true)
    {
        if (msCounter.IsTimeoutPassed(1_ms))
        {
            ledPin.Write(dimmer.GetState());
        }
    }

}
