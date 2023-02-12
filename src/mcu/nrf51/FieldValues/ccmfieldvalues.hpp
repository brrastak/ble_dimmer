/*******************************************************************************
* Filename      : ccmfieldvalues.hpp
*
* Details       : Enumerations related with CCM peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(CCMENUMS_HPP)
#define CCMENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_SHORTS_ENDKSGEN_CRYPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CCM_SHORTS_ENDKSGEN_CRYPT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CCM_SHORTS_ENDKSGEN_CRYPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_INTENSET_ENDKSGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CCM_INTENSET_ENDKSGEN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CCM_INTENSET_ENDKSGEN_Values, BaseType, 1U> ;
  using Set = FieldValue<CCM_INTENSET_ENDKSGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_INTENSET_ENDCRYPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CCM_INTENSET_ENDCRYPT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CCM_INTENSET_ENDCRYPT_Values, BaseType, 1U> ;
  using Set = FieldValue<CCM_INTENSET_ENDCRYPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_INTENSET_ERROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CCM_INTENSET_ERROR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CCM_INTENSET_ERROR_Values, BaseType, 1U> ;
  using Set = FieldValue<CCM_INTENSET_ERROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_INTENCLR_ENDKSGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CCM_INTENCLR_ENDKSGEN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CCM_INTENCLR_ENDKSGEN_Values, BaseType, 1U> ;
  using Clear = FieldValue<CCM_INTENCLR_ENDKSGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_INTENCLR_ENDCRYPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CCM_INTENCLR_ENDCRYPT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CCM_INTENCLR_ENDCRYPT_Values, BaseType, 1U> ;
  using Clear = FieldValue<CCM_INTENCLR_ENDCRYPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_INTENCLR_ERROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CCM_INTENCLR_ERROR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CCM_INTENCLR_ERROR_Values, BaseType, 1U> ;
  using Clear = FieldValue<CCM_INTENCLR_ERROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_MICSTATUS_MICSTATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CheckFailed = FieldValue<CCM_MICSTATUS_MICSTATUS_Values, BaseType, 0U> ;
  using CheckPassed = FieldValue<CCM_MICSTATUS_MICSTATUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CCM_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CCM_ENABLE_ENABLE_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_MODE_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Encryption = FieldValue<CCM_MODE_MODE_Values, BaseType, 0U> ;
  using Decryption = FieldValue<CCM_MODE_MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CCM_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CCM_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CCM_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(CCMENUMS_HPP)
