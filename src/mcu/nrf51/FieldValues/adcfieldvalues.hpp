/*******************************************************************************
* Filename      : adcfieldvalues.hpp
*
* Details       : Enumerations related with ADC peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(ADCENUMS_HPP)
#define ADCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_INTENSET_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<ADC_INTENSET_END_Values, BaseType, 0U> ;
  using Enabled = FieldValue<ADC_INTENSET_END_Values, BaseType, 1U> ;
  using Set = FieldValue<ADC_INTENSET_END_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_INTENCLR_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<ADC_INTENCLR_END_Values, BaseType, 0U> ;
  using Enabled = FieldValue<ADC_INTENCLR_END_Values, BaseType, 1U> ;
  using Clear = FieldValue<ADC_INTENCLR_END_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_BUSY_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ready = FieldValue<ADC_BUSY_BUSY_Values, BaseType, 0U> ;
  using Busy = FieldValue<ADC_BUSY_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<ADC_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<ADC_ENABLE_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CONFIG_RES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using _8bit = FieldValue<ADC_CONFIG_RES_Values, BaseType, 0U> ;
  using _9bit = FieldValue<ADC_CONFIG_RES_Values, BaseType, 1U> ;
  using _10bit = FieldValue<ADC_CONFIG_RES_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CONFIG_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AnalogInputNoPrescaling = FieldValue<ADC_CONFIG_INPSEL_Values, BaseType, 0U> ;
  using AnalogInputTwoThirdsPrescaling = FieldValue<ADC_CONFIG_INPSEL_Values, BaseType, 1U> ;
  using AnalogInputOneThirdPrescaling = FieldValue<ADC_CONFIG_INPSEL_Values, BaseType, 2U> ;
  using SupplyTwoThirdsPrescaling = FieldValue<ADC_CONFIG_INPSEL_Values, BaseType, 5U> ;
  using SupplyOneThirdPrescaling = FieldValue<ADC_CONFIG_INPSEL_Values, BaseType, 6U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CONFIG_REFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VBG = FieldValue<ADC_CONFIG_REFSEL_Values, BaseType, 0U> ;
  using External = FieldValue<ADC_CONFIG_REFSEL_Values, BaseType, 1U> ;
  using SupplyOneHalfPrescaling = FieldValue<ADC_CONFIG_REFSEL_Values, BaseType, 2U> ;
  using SupplyOneThirdPrescaling = FieldValue<ADC_CONFIG_REFSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CONFIG_PSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CONFIG_EXTREFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using None = FieldValue<ADC_CONFIG_EXTREFSEL_Values, BaseType, 0U> ;
  using AnalogReference0 = FieldValue<ADC_CONFIG_EXTREFSEL_Values, BaseType, 1U> ;
  using AnalogReference1 = FieldValue<ADC_CONFIG_EXTREFSEL_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_RESULT_RESULT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<ADC_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<ADC_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(ADCENUMS_HPP)
