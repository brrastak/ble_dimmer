/*******************************************************************************
* Filename      : timer2fieldvalues.hpp
*
* Details       : Enumerations related with TIMER2 peripheral. This header file
*                 is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(TIMER2ENUMS_HPP)
#define TIMER2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SHORTS_COMPARE0_CLEAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_SHORTS_COMPARE0_CLEAR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_SHORTS_COMPARE0_CLEAR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SHORTS_COMPARE1_CLEAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_SHORTS_COMPARE1_CLEAR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_SHORTS_COMPARE1_CLEAR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SHORTS_COMPARE2_CLEAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_SHORTS_COMPARE2_CLEAR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_SHORTS_COMPARE2_CLEAR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SHORTS_COMPARE3_CLEAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_SHORTS_COMPARE3_CLEAR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_SHORTS_COMPARE3_CLEAR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SHORTS_COMPARE0_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_SHORTS_COMPARE0_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_SHORTS_COMPARE0_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SHORTS_COMPARE1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_SHORTS_COMPARE1_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_SHORTS_COMPARE1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SHORTS_COMPARE2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_SHORTS_COMPARE2_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_SHORTS_COMPARE2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SHORTS_COMPARE3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_SHORTS_COMPARE3_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_SHORTS_COMPARE3_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTENSET_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_INTENSET_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_INTENSET_COMPARE0_Values, BaseType, 1U> ;
  using Set = FieldValue<TIMER2_INTENSET_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTENSET_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_INTENSET_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_INTENSET_COMPARE1_Values, BaseType, 1U> ;
  using Set = FieldValue<TIMER2_INTENSET_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTENSET_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_INTENSET_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_INTENSET_COMPARE2_Values, BaseType, 1U> ;
  using Set = FieldValue<TIMER2_INTENSET_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTENSET_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_INTENSET_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_INTENSET_COMPARE3_Values, BaseType, 1U> ;
  using Set = FieldValue<TIMER2_INTENSET_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTENCLR_COMPARE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_INTENCLR_COMPARE0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_INTENCLR_COMPARE0_Values, BaseType, 1U> ;
  using Clear = FieldValue<TIMER2_INTENCLR_COMPARE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTENCLR_COMPARE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_INTENCLR_COMPARE1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_INTENCLR_COMPARE1_Values, BaseType, 1U> ;
  using Clear = FieldValue<TIMER2_INTENCLR_COMPARE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTENCLR_COMPARE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_INTENCLR_COMPARE2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_INTENCLR_COMPARE2_Values, BaseType, 1U> ;
  using Clear = FieldValue<TIMER2_INTENCLR_COMPARE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTENCLR_COMPARE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_INTENCLR_COMPARE3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_INTENCLR_COMPARE3_Values, BaseType, 1U> ;
  using Clear = FieldValue<TIMER2_INTENCLR_COMPARE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_MODE_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Counter = FieldValue<TIMER2_MODE_MODE_Values, BaseType, 1U> ;
  using Timer = FieldValue<TIMER2_MODE_MODE_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_BITMODE_BITMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using _16Bit = FieldValue<TIMER2_BITMODE_BITMODE_Values, BaseType, 0U> ;
  using _08Bit = FieldValue<TIMER2_BITMODE_BITMODE_Values, BaseType, 1U> ;
  using _24Bit = FieldValue<TIMER2_BITMODE_BITMODE_Values, BaseType, 2U> ;
  using _32Bit = FieldValue<TIMER2_BITMODE_BITMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_PRESCALER_PRESCALER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER2_PRESCALER_PRESCALER_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TIMER2_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TIMER2_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(TIMER2ENUMS_HPP)
