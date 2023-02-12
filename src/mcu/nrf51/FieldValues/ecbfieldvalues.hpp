/*******************************************************************************
* Filename      : ecbfieldvalues.hpp
*
* Details       : Enumerations related with ECB peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(ECBENUMS_HPP)
#define ECBENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECB_INTENSET_ENDECB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<ECB_INTENSET_ENDECB_Values, BaseType, 0U> ;
  using Enabled = FieldValue<ECB_INTENSET_ENDECB_Values, BaseType, 1U> ;
  using Set = FieldValue<ECB_INTENSET_ENDECB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECB_INTENSET_ERRORECB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<ECB_INTENSET_ERRORECB_Values, BaseType, 0U> ;
  using Enabled = FieldValue<ECB_INTENSET_ERRORECB_Values, BaseType, 1U> ;
  using Set = FieldValue<ECB_INTENSET_ERRORECB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECB_INTENCLR_ENDECB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<ECB_INTENCLR_ENDECB_Values, BaseType, 0U> ;
  using Enabled = FieldValue<ECB_INTENCLR_ENDECB_Values, BaseType, 1U> ;
  using Clear = FieldValue<ECB_INTENCLR_ENDECB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECB_INTENCLR_ERRORECB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<ECB_INTENCLR_ERRORECB_Values, BaseType, 0U> ;
  using Enabled = FieldValue<ECB_INTENCLR_ERRORECB_Values, BaseType, 1U> ;
  using Clear = FieldValue<ECB_INTENCLR_ERRORECB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECB_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<ECB_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<ECB_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(ECBENUMS_HPP)
