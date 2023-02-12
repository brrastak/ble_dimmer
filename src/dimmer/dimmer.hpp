
#include <cstdint>

#pragma once


namespace cmn
{

/// @brief Fits "brigtness" correponding to ratio of current value and max value
class Dimmer
{
public:
    /// @brief Constructor
    /// @param maxValue the value which correspondes to always turned on state
    /// @param initValue should be less or equal to maxValue
    Dimmer(uint32_t maxValue, uint32_t initValue = 0);

    /// @brief Set current value
    /// @param newValue should be less or equal to maxValue
    void SetValue(uint32_t newValue);

    /// @brief Should be called periodically with equal timeouts
    /// @return true in (value/max_value) times it is called
    /// and false in (max_value - value)/max_value times
    bool GetState();

private:
    const uint32_t max_value;
    uint32_t m_value;
    uint32_t m_counter;
};

}
