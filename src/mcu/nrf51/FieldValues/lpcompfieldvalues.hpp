/*******************************************************************************
* Filename      : lpcompfieldvalues.hpp
*
* Details       : Enumerations related with LPCOMP peripheral. This header file
*                 is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(LPCOMPENUMS_HPP)
#define LPCOMPENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_SHORTS_READY_SAMPLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_SHORTS_READY_SAMPLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_SHORTS_READY_SAMPLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_SHORTS_READY_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_SHORTS_READY_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_SHORTS_READY_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_SHORTS_DOWN_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_SHORTS_DOWN_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_SHORTS_DOWN_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_SHORTS_UP_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_SHORTS_UP_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_SHORTS_UP_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_SHORTS_CROSS_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_SHORTS_CROSS_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_SHORTS_CROSS_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_INTENSET_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_INTENSET_READY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_INTENSET_READY_Values, BaseType, 1U> ;
  using Set = FieldValue<LPCOMP_INTENSET_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_INTENSET_DOWN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_INTENSET_DOWN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_INTENSET_DOWN_Values, BaseType, 1U> ;
  using Set = FieldValue<LPCOMP_INTENSET_DOWN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_INTENSET_UP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_INTENSET_UP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_INTENSET_UP_Values, BaseType, 1U> ;
  using Set = FieldValue<LPCOMP_INTENSET_UP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_INTENSET_CROSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_INTENSET_CROSS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_INTENSET_CROSS_Values, BaseType, 1U> ;
  using Set = FieldValue<LPCOMP_INTENSET_CROSS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_INTENCLR_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_INTENCLR_READY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_INTENCLR_READY_Values, BaseType, 1U> ;
  using Clear = FieldValue<LPCOMP_INTENCLR_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_INTENCLR_DOWN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_INTENCLR_DOWN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_INTENCLR_DOWN_Values, BaseType, 1U> ;
  using Clear = FieldValue<LPCOMP_INTENCLR_DOWN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_INTENCLR_UP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_INTENCLR_UP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_INTENCLR_UP_Values, BaseType, 1U> ;
  using Clear = FieldValue<LPCOMP_INTENCLR_UP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_INTENCLR_CROSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_INTENCLR_CROSS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_INTENCLR_CROSS_Values, BaseType, 1U> ;
  using Clear = FieldValue<LPCOMP_INTENCLR_CROSS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_RESULT_RESULT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Below = FieldValue<LPCOMP_RESULT_RESULT_Values, BaseType, 0U> ;
  using Above = FieldValue<LPCOMP_RESULT_RESULT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_ENABLE_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_PSEL_PSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AnalogInput0 = FieldValue<LPCOMP_PSEL_PSEL_Values, BaseType, 0U> ;
  using AnalogInput1 = FieldValue<LPCOMP_PSEL_PSEL_Values, BaseType, 1U> ;
  using AnalogInput2 = FieldValue<LPCOMP_PSEL_PSEL_Values, BaseType, 2U> ;
  using AnalogInput3 = FieldValue<LPCOMP_PSEL_PSEL_Values, BaseType, 3U> ;
  using AnalogInput4 = FieldValue<LPCOMP_PSEL_PSEL_Values, BaseType, 4U> ;
  using AnalogInput5 = FieldValue<LPCOMP_PSEL_PSEL_Values, BaseType, 5U> ;
  using AnalogInput6 = FieldValue<LPCOMP_PSEL_PSEL_Values, BaseType, 6U> ;
  using AnalogInput7 = FieldValue<LPCOMP_PSEL_PSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_REFSEL_REFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SupplyOneEighthPrescaling = FieldValue<LPCOMP_REFSEL_REFSEL_Values, BaseType, 0U> ;
  using SupplyTwoEighthsPrescaling = FieldValue<LPCOMP_REFSEL_REFSEL_Values, BaseType, 1U> ;
  using SupplyThreeEighthsPrescaling = FieldValue<LPCOMP_REFSEL_REFSEL_Values, BaseType, 2U> ;
  using SupplyFourEighthsPrescaling = FieldValue<LPCOMP_REFSEL_REFSEL_Values, BaseType, 3U> ;
  using SupplyFiveEighthsPrescaling = FieldValue<LPCOMP_REFSEL_REFSEL_Values, BaseType, 4U> ;
  using SupplySixEighthsPrescaling = FieldValue<LPCOMP_REFSEL_REFSEL_Values, BaseType, 5U> ;
  using SupplySevenEighthsPrescaling = FieldValue<LPCOMP_REFSEL_REFSEL_Values, BaseType, 6U> ;
  using ARef = FieldValue<LPCOMP_REFSEL_REFSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_EXTREFSEL_EXTREFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AnalogReference0 = FieldValue<LPCOMP_EXTREFSEL_EXTREFSEL_Values, BaseType, 0U> ;
  using AnalogReference1 = FieldValue<LPCOMP_EXTREFSEL_EXTREFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_ANADETECT_ANADETECT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Cross = FieldValue<LPCOMP_ANADETECT_ANADETECT_Values, BaseType, 0U> ;
  using Up = FieldValue<LPCOMP_ANADETECT_ANADETECT_Values, BaseType, 1U> ;
  using Down = FieldValue<LPCOMP_ANADETECT_ANADETECT_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPCOMP_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<LPCOMP_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<LPCOMP_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(LPCOMPENUMS_HPP)
