/*******************************************************************************
* Filename      : tempfieldvalues.hpp
*
* Details       : Enumerations related with TEMP peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(TEMPENUMS_HPP)
#define TEMPENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TEMP_INTENSET_DATARDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TEMP_INTENSET_DATARDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TEMP_INTENSET_DATARDY_Values, BaseType, 1U> ;
  using Set = FieldValue<TEMP_INTENSET_DATARDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TEMP_INTENCLR_DATARDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TEMP_INTENCLR_DATARDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TEMP_INTENCLR_DATARDY_Values, BaseType, 1U> ;
  using Clear = FieldValue<TEMP_INTENCLR_DATARDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TEMP_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TEMP_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TEMP_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(TEMPENUMS_HPP)
