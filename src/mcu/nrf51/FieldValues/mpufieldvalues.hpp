/*******************************************************************************
* Filename      : mpufieldvalues.hpp
*
* Details       : Enumerations related with MPU peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(MPUENUMS_HPP)
#define MPUENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_POWER_CLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_POWER_CLOCK_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_POWER_CLOCK_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_RADIO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_RADIO_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_RADIO_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_UART0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_UART0_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_UART0_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_SPI0_TWI0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_SPI0_TWI0_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_SPI0_TWI0_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_SPI1_TWI1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_SPI1_TWI1_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_SPI1_TWI1_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_GPIOTE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_GPIOTE_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_GPIOTE_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_ADC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_ADC_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_ADC_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_TIMER0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_TIMER0_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_TIMER0_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_TIMER1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_TIMER1_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_TIMER1_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_TIMER2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_TIMER2_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_TIMER2_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_RTC0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_RTC0_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_RTC0_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_TEMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_TEMP_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_TEMP_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_RNG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_RNG_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_RNG_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_ECB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_ECB_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_ECB_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_CCM_AAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_CCM_AAR_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_CCM_AAR_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_WDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_WDT_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_WDT_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_RTC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_RTC1_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_RTC1_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_QDEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_QDEC_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_QDEC_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_LPCOMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_LPCOMP_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_LPCOMP_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_NVMC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_NVMC_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_NVMC_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PERR0_PPI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRegion0 = FieldValue<MPU_PERR0_PPI_Values, BaseType, 1U> ;
  using InRegion1 = FieldValue<MPU_PERR0_PPI_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG0_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG1_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG2_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG3_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG4_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG4_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG5_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG5_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG6_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG6_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG7_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG7_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG8_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG8_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG9_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG9_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG10_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG10_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG11_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG11_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG12_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG12_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG13_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG13_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG14_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG14_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG15_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG15_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG16_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG16_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG17_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG17_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG18_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG18_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG19_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG19_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG20_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG20_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG21_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG21_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG22_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG22_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG23_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG23_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG24_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG24_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG25_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG25_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG26_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG26_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG27_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG27_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG28_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG28_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG29_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG29_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG30_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG30_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET0_PROTREG31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET0_PROTREG31_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET0_PROTREG31_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET0_PROTREG31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG32_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG32_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG32_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG32_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG33_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG33_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG33_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG34_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG34_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG34_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG34_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG35_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG35_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG35_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG35_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG36_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG36_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG36_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG36_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG37_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG37_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG37_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG37_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG38_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG38_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG38_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG38_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG39_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG39_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG39_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG39_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG40_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG40_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG40_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG40_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG41_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG41_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG41_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG42_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG42_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG42_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG42_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG43_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG43_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG43_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG43_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG44_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG44_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG44_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG44_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG45_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG45_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG45_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG45_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG46_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG46_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG46_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG46_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG47_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG47_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG47_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG47_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG48_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG48_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG48_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG48_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG49_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG49_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG49_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG49_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG50_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG50_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG50_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG50_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG51_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG51_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG51_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG51_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG52_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG52_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG52_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG52_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG53_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG53_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG53_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG53_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG54_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG54_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG54_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG54_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG55_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG55_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG55_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG55_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG56_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG56_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG56_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG56_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG57_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG57_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG57_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG57_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG58_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG58_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG58_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG58_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG59_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG59_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG59_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG59_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG60_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG60_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG60_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG60_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG61_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG61_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG61_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG61_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG62_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG62_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG62_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG62_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTENSET1_PROTREG63_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MPU_PROTENSET1_PROTREG63_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MPU_PROTENSET1_PROTREG63_Values, BaseType, 1U> ;
  using Set = FieldValue<MPU_PROTENSET1_PROTREG63_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_DISABLEINDEBUG_DISABLEINDEBUG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Enabled = FieldValue<MPU_DISABLEINDEBUG_DISABLEINDEBUG_Values, BaseType, 0U> ;
  using Disabled = FieldValue<MPU_DISABLEINDEBUG_DISABLEINDEBUG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using _4k = FieldValue<MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Values, BaseType, 0U> ;
} ;

#endif //#if !defined(MPUENUMS_HPP)
