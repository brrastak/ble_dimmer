/*******************************************************************************
* Filename      : rtc1fieldvalues.hpp
*
* Details       : Enumerations related with RTC1 peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(RTC1ENUMS_HPP)
#define RTC1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENSET_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENSET_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENSET_TICK_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_INTENSET_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENSET_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENSET_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENSET_OVRFLW_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_INTENSET_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENSET_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENSET_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENSET_COMPARE0_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_INTENSET_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENSET_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENSET_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENSET_COMPARE1_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_INTENSET_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENSET_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENSET_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENSET_COMPARE2_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_INTENSET_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENSET_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENSET_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENSET_COMPARE3_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_INTENSET_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENCLR_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENCLR_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENCLR_TICK_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_INTENCLR_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENCLR_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENCLR_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENCLR_OVRFLW_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_INTENCLR_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENCLR_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENCLR_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENCLR_COMPARE0_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_INTENCLR_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENCLR_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENCLR_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENCLR_COMPARE1_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_INTENCLR_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENCLR_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENCLR_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENCLR_COMPARE2_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_INTENCLR_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_INTENCLR_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_INTENCLR_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_INTENCLR_COMPARE3_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_INTENCLR_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTEN_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTEN_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTEN_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTEN_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTEN_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTEN_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTEN_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTEN_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTEN_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTEN_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTEN_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTEN_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTEN_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTEN_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTEN_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTEN_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTEN_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTEN_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENSET_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENSET_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENSET_TICK_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_EVTENSET_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENSET_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENSET_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENSET_OVRFLW_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_EVTENSET_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENSET_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENSET_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENSET_COMPARE0_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_EVTENSET_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENSET_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENSET_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENSET_COMPARE1_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_EVTENSET_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENSET_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENSET_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENSET_COMPARE2_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_EVTENSET_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENSET_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENSET_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENSET_COMPARE3_Values, BaseType, 1U> ;
  using Set = FieldValue<RTC1_EVTENSET_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENCLR_TICK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENCLR_TICK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENCLR_TICK_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_EVTENCLR_TICK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENCLR_OVRFLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENCLR_OVRFLW_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENCLR_OVRFLW_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_EVTENCLR_OVRFLW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENCLR_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENCLR_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENCLR_COMPARE0_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_EVTENCLR_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENCLR_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENCLR_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENCLR_COMPARE1_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_EVTENCLR_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENCLR_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENCLR_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENCLR_COMPARE2_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_EVTENCLR_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_EVTENCLR_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_EVTENCLR_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_EVTENCLR_COMPARE3_Values, BaseType, 1U> ;
  using Clear = FieldValue<RTC1_EVTENCLR_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_COUNTER_COUNTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_PRESCALER_PRESCALER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC1_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RTC1_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RTC1_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(RTC1ENUMS_HPP)
