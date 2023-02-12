
// user
#include "cmn_assert.hpp"
#include "dimmer.hpp"


namespace cmn
{

Dimmer::Dimmer(uint32_t maxValue, uint32_t initValue)
    : max_value{maxValue},
    m_value{initValue},
    m_counter{0} 
{
    cmn::Assert(initValue <= max_value);
}

void Dimmer::SetValue(uint32_t newValue)
{
    cmn::Assert(newValue <= max_value);

    m_value = newValue;
}

bool Dimmer::GetState()
{
    bool res{m_counter < m_value};

    ++m_counter;
    m_counter %= max_value;

    return res;
}

}
