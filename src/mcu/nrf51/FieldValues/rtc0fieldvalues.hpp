/*******************************************************************************
* Filename      : rtc0fieldvalues.hpp
*
* Details       : Enumerations related with RTC0 peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(RTC0ENUMS_HPP)
#define RTC0ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENSET_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENSET_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENSET_TICK_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_INTENSET_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENSET_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENSET_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENSET_OVRFLW_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_INTENSET_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENSET_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENSET_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENSET_COMPARE0_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_INTENSET_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENSET_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENSET_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENSET_COMPARE1_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_INTENSET_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENSET_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENSET_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENSET_COMPARE2_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_INTENSET_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENSET_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENSET_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENSET_COMPARE3_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_INTENSET_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENCLR_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENCLR_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENCLR_TICK_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_INTENCLR_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENCLR_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENCLR_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENCLR_OVRFLW_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_INTENCLR_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENCLR_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENCLR_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENCLR_COMPARE0_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_INTENCLR_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENCLR_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENCLR_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENCLR_COMPARE1_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_INTENCLR_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENCLR_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENCLR_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENCLR_COMPARE2_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_INTENCLR_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_INTENCLR_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_INTENCLR_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_INTENCLR_COMPARE3_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_INTENCLR_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTEN_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTEN_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTEN_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTEN_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTEN_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTEN_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTEN_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTEN_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTEN_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTEN_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTEN_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTEN_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTEN_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTEN_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTEN_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTEN_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTEN_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTEN_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENSET_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENSET_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENSET_TICK_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_EVTENSET_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENSET_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENSET_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENSET_OVRFLW_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_EVTENSET_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENSET_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENSET_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENSET_COMPARE0_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_EVTENSET_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENSET_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENSET_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENSET_COMPARE1_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_EVTENSET_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENSET_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENSET_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENSET_COMPARE2_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_EVTENSET_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENSET_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENSET_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENSET_COMPARE3_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC0_EVTENSET_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENCLR_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENCLR_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENCLR_TICK_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_EVTENCLR_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENCLR_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENCLR_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENCLR_OVRFLW_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_EVTENCLR_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENCLR_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENCLR_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENCLR_COMPARE0_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_EVTENCLR_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENCLR_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENCLR_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENCLR_COMPARE1_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_EVTENCLR_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENCLR_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENCLR_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENCLR_COMPARE2_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_EVTENCLR_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_EVTENCLR_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_EVTENCLR_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_EVTENCLR_COMPARE3_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC0_EVTENCLR_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_COUNTER_COUNTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_PRESCALER_PRESCALER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC0_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC0_POWER_POWER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_CC0_COMPARE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_CC1_COMPARE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_CC2_COMPARE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC0_CC3_COMPARE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RTC0ENUMS_HPP)
