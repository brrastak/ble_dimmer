/*******************************************************************************
* Filename      : rngfieldvalues.hpp
*
* Details       : Enumerations related with RNG peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(RNGENUMS_HPP)
#define RNGENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_SHORTS_VALRDY_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RNG_SHORTS_VALRDY_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RNG_SHORTS_VALRDY_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_INTENSET_VALRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RNG_INTENSET_VALRDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RNG_INTENSET_VALRDY_Values, BaseType, 1U> ;
  using Set = FieldValue<RNG_INTENSET_VALRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_INTENCLR_VALRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RNG_INTENCLR_VALRDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RNG_INTENCLR_VALRDY_Values, BaseType, 1U> ;
  using Clear = FieldValue<RNG_INTENCLR_VALRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_CONFIG_DERCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RNG_CONFIG_DERCEN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RNG_CONFIG_DERCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_VALUE_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RNG_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RNG_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(RNGENUMS_HPP)
