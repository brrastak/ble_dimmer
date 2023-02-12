
// user
#include "i_gpio.hpp"
#include "pinbit.hpp"

// hardware
#include "gpioregisters.hpp"

#pragma once


namespace hal
{

enum class InputMode
{
    analog,
    floating,
    pull_up,
    pull_down
};

enum class OutputMode
{
    push_pull,
    open_drain
};

template<uint8_t pin>
class Gpio : public IGpio
{
public:
    Gpio(InputMode mode);
    Gpio(OutputMode mode);
    Gpio(OutputMode mode, bool initState);
    Gpio(const Gpio&) = delete;
    Gpio& operator=(const Gpio&) = delete;

    void Set() override;
    void Reset() override;
    void Toggle() override;
    void Write(bool newState) override;
    bool Get() override;

private:
    // void initRcc();
    void setMode(InputMode mode);
    void setMode(OutputMode mode);
};

}



namespace hal
{

/// @brief Constructors
/// @tparam pin number
/// @param mode input/output, analog, push-pull etc
template<uint8_t pin>
Gpio<pin>::Gpio(InputMode mode)
{
    setMode(mode);
}

template<uint8_t pin>
Gpio<pin>::Gpio(OutputMode mode)
{
    setMode(mode);
}

template<uint8_t pin>
Gpio<pin>::Gpio(OutputMode mode, bool initState)
{
    setMode(mode);
    Gpio<pin>::Write(initState);
}

template<uint8_t pin>
void Gpio<pin>::Set()
{
    GPIO::OUTSET::PIN2::High::Write();
}

template<uint8_t pin>
void Gpio<pin>::Reset()
{
    GPIO::OUTCLR::PIN2::High::Write();
}

template<uint8_t pin>
void Gpio<pin>::Toggle()
{
    if (Get())
    {
        Reset();
    }
    else
    {
        Set();
    }
}

template<uint8_t pin>
void Gpio<pin>::Write(bool newState)
{
    if (newState == true)
    {
        Set();
    }
    else
    {
        Reset();
    }
}

template<uint8_t pin>
bool Gpio<pin>::Get()
{
    return GPIO::IN::PIN2::High::IsSet();
}

// private


template<uint8_t pin>
void Gpio<pin>::setMode(InputMode mode)
{
    GPIO::PIN_CNF2::DIR::Input::Set();
    GPIO::PIN_CNF2::INPUT::Connect::Set();

    switch (mode)
    {
    case InputMode::analog:
        break;
    case InputMode::floating:
        GPIO::PIN_CNF2::PULL::Disabled::Set();
        break;
    case InputMode::pull_down:
        GPIO::PIN_CNF2::PULL::Pulldown::Set();
        break;
    case InputMode::pull_up:
        GPIO::PIN_CNF2::PULL::Pullup::Set();
        break;
    }
}

template<uint8_t pin>
void Gpio<pin>::setMode(OutputMode mode)
{
    GPIO::PIN_CNF2::DIR::Output::Set();

    switch (mode)
    {
    case OutputMode::push_pull:
        GPIO::PIN_CNF2::DRIVE::S0S1::Set();
        break;
    case OutputMode::open_drain:
        GPIO::PIN_CNF2::DRIVE::S0D1::Set();
        break;
    }
}

}
