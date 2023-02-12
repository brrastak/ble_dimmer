/*******************************************************************************
* Filename      : gpiotefieldvalues.hpp
*
* Details       : Enumerations related with GPIOTE peripheral. This header file
*                 is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(GPIOTEENUMS_HPP)
#define GPIOTEENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENSET_IN0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENSET_IN0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENSET_IN0_Values, BaseType, 1U> ;
  using Set = FieldValue<GPIOTE_INTENSET_IN0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENSET_IN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENSET_IN1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENSET_IN1_Values, BaseType, 1U> ;
  using Set = FieldValue<GPIOTE_INTENSET_IN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENSET_IN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENSET_IN2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENSET_IN2_Values, BaseType, 1U> ;
  using Set = FieldValue<GPIOTE_INTENSET_IN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENSET_IN3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENSET_IN3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENSET_IN3_Values, BaseType, 1U> ;
  using Set = FieldValue<GPIOTE_INTENSET_IN3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENSET_PORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENSET_PORT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENSET_PORT_Values, BaseType, 1U> ;
  using Set = FieldValue<GPIOTE_INTENSET_PORT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENCLR_IN0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENCLR_IN0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENCLR_IN0_Values, BaseType, 1U> ;
  using Clear = FieldValue<GPIOTE_INTENCLR_IN0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENCLR_IN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENCLR_IN1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENCLR_IN1_Values, BaseType, 1U> ;
  using Clear = FieldValue<GPIOTE_INTENCLR_IN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENCLR_IN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENCLR_IN2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENCLR_IN2_Values, BaseType, 1U> ;
  using Clear = FieldValue<GPIOTE_INTENCLR_IN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENCLR_IN3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENCLR_IN3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENCLR_IN3_Values, BaseType, 1U> ;
  using Clear = FieldValue<GPIOTE_INTENCLR_IN3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_INTENCLR_PORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_INTENCLR_PORT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_INTENCLR_PORT_Values, BaseType, 1U> ;
  using Clear = FieldValue<GPIOTE_INTENCLR_PORT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<GPIOTE_POWER_POWER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG0_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_CONFIG0_MODE_Values, BaseType, 0U> ;
  using Event = FieldValue<GPIOTE_CONFIG0_MODE_Values, BaseType, 1U> ;
  using Task = FieldValue<GPIOTE_CONFIG0_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG0_PSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<GPIOTE_CONFIG0_PSEL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG0_POLARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using None = FieldValue<GPIOTE_CONFIG0_POLARITY_Values, BaseType, 0U> ;
  using LoToHi = FieldValue<GPIOTE_CONFIG0_POLARITY_Values, BaseType, 1U> ;
  using HiToLo = FieldValue<GPIOTE_CONFIG0_POLARITY_Values, BaseType, 2U> ;
  using Toggle = FieldValue<GPIOTE_CONFIG0_POLARITY_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG0_OUTINIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOTE_CONFIG0_OUTINIT_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOTE_CONFIG0_OUTINIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG1_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_CONFIG1_MODE_Values, BaseType, 0U> ;
  using Event = FieldValue<GPIOTE_CONFIG1_MODE_Values, BaseType, 1U> ;
  using Task = FieldValue<GPIOTE_CONFIG1_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG1_PSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<GPIOTE_CONFIG1_PSEL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG1_POLARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using None = FieldValue<GPIOTE_CONFIG1_POLARITY_Values, BaseType, 0U> ;
  using LoToHi = FieldValue<GPIOTE_CONFIG1_POLARITY_Values, BaseType, 1U> ;
  using HiToLo = FieldValue<GPIOTE_CONFIG1_POLARITY_Values, BaseType, 2U> ;
  using Toggle = FieldValue<GPIOTE_CONFIG1_POLARITY_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG1_OUTINIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOTE_CONFIG1_OUTINIT_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOTE_CONFIG1_OUTINIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG2_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_CONFIG2_MODE_Values, BaseType, 0U> ;
  using Event = FieldValue<GPIOTE_CONFIG2_MODE_Values, BaseType, 1U> ;
  using Task = FieldValue<GPIOTE_CONFIG2_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG2_PSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<GPIOTE_CONFIG2_PSEL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG2_POLARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using None = FieldValue<GPIOTE_CONFIG2_POLARITY_Values, BaseType, 0U> ;
  using LoToHi = FieldValue<GPIOTE_CONFIG2_POLARITY_Values, BaseType, 1U> ;
  using HiToLo = FieldValue<GPIOTE_CONFIG2_POLARITY_Values, BaseType, 2U> ;
  using Toggle = FieldValue<GPIOTE_CONFIG2_POLARITY_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG2_OUTINIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOTE_CONFIG2_OUTINIT_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOTE_CONFIG2_OUTINIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG3_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<GPIOTE_CONFIG3_MODE_Values, BaseType, 0U> ;
  using Event = FieldValue<GPIOTE_CONFIG3_MODE_Values, BaseType, 1U> ;
  using Task = FieldValue<GPIOTE_CONFIG3_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG3_PSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<GPIOTE_CONFIG3_PSEL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG3_POLARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using None = FieldValue<GPIOTE_CONFIG3_POLARITY_Values, BaseType, 0U> ;
  using LoToHi = FieldValue<GPIOTE_CONFIG3_POLARITY_Values, BaseType, 1U> ;
  using HiToLo = FieldValue<GPIOTE_CONFIG3_POLARITY_Values, BaseType, 2U> ;
  using Toggle = FieldValue<GPIOTE_CONFIG3_POLARITY_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOTE_CONFIG3_OUTINIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOTE_CONFIG3_OUTINIT_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOTE_CONFIG3_OUTINIT_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(GPIOTEENUMS_HPP)
