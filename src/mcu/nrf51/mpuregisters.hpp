/*******************************************************************************
* Filename      : mpuregisters.hpp
*
* Details       : Memory Protection Unit. This header file is auto-generated for
*                 nrf51 device.
*
*
*******************************************************************************/

#if !defined(MPUREGISTERS_HPP)
#define MPUREGISTERS_HPP

#include "mpufieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MPU
{
  struct MPUPERR0Base {} ;

  struct PERR0 : public RegisterBase<0x40000528, 32, ReadWriteMode>
  {
    using POWER_CLOCK = MPU_PERR0_POWER_CLOCK_Values<MPU::PERR0, 0, 1, ReadWriteMode, MPUPERR0Base> ;
    using RADIO = MPU_PERR0_RADIO_Values<MPU::PERR0, 1, 1, ReadWriteMode, MPUPERR0Base> ;
    using UART0 = MPU_PERR0_UART0_Values<MPU::PERR0, 2, 1, ReadWriteMode, MPUPERR0Base> ;
    using SPI0_TWI0 = MPU_PERR0_SPI0_TWI0_Values<MPU::PERR0, 3, 1, ReadWriteMode, MPUPERR0Base> ;
    using SPI1_TWI1 = MPU_PERR0_SPI1_TWI1_Values<MPU::PERR0, 4, 1, ReadWriteMode, MPUPERR0Base> ;
    using GPIOTE = MPU_PERR0_GPIOTE_Values<MPU::PERR0, 6, 1, ReadWriteMode, MPUPERR0Base> ;
    using ADC = MPU_PERR0_ADC_Values<MPU::PERR0, 7, 1, ReadWriteMode, MPUPERR0Base> ;
    using TIMER0 = MPU_PERR0_TIMER0_Values<MPU::PERR0, 8, 1, ReadWriteMode, MPUPERR0Base> ;
    using TIMER1 = MPU_PERR0_TIMER1_Values<MPU::PERR0, 9, 1, ReadWriteMode, MPUPERR0Base> ;
    using TIMER2 = MPU_PERR0_TIMER2_Values<MPU::PERR0, 10, 1, ReadWriteMode, MPUPERR0Base> ;
    using RTC0 = MPU_PERR0_RTC0_Values<MPU::PERR0, 11, 1, ReadWriteMode, MPUPERR0Base> ;
    using TEMP = MPU_PERR0_TEMP_Values<MPU::PERR0, 12, 1, ReadWriteMode, MPUPERR0Base> ;
    using RNG = MPU_PERR0_RNG_Values<MPU::PERR0, 13, 1, ReadWriteMode, MPUPERR0Base> ;
    using ECB = MPU_PERR0_ECB_Values<MPU::PERR0, 14, 1, ReadWriteMode, MPUPERR0Base> ;
    using CCM_AAR = MPU_PERR0_CCM_AAR_Values<MPU::PERR0, 15, 1, ReadWriteMode, MPUPERR0Base> ;
    using WDT = MPU_PERR0_WDT_Values<MPU::PERR0, 16, 1, ReadWriteMode, MPUPERR0Base> ;
    using RTC1 = MPU_PERR0_RTC1_Values<MPU::PERR0, 17, 1, ReadWriteMode, MPUPERR0Base> ;
    using QDEC = MPU_PERR0_QDEC_Values<MPU::PERR0, 18, 1, ReadWriteMode, MPUPERR0Base> ;
    using LPCOMP = MPU_PERR0_LPCOMP_Values<MPU::PERR0, 19, 1, ReadWriteMode, MPUPERR0Base> ;
    using NVMC = MPU_PERR0_NVMC_Values<MPU::PERR0, 30, 1, ReadWriteMode, MPUPERR0Base> ;
    using PPI = MPU_PERR0_PPI_Values<MPU::PERR0, 31, 1, ReadWriteMode, MPUPERR0Base> ;
    using FieldValues = MPU_PERR0_PPI_Values<MPU::PERR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PERR0Pack  = Register<0x40000528, 32, ReadWriteMode, MPUPERR0Base, T...> ;

  struct MPURLENR0Base {} ;

  struct RLENR0 : public RegisterBase<0x4000052C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using RLENR0Pack  = Register<0x4000052C, 32, ReadWriteMode, MPURLENR0Base, T...> ;

  struct MPUPROTENSET0Base {} ;

  struct PROTENSET0 : public RegisterBase<0x40000600, 32, ReadWriteMode>
  {
    using PROTREG0 = MPU_PROTENSET0_PROTREG0_Values<MPU::PROTENSET0, 0, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG1 = MPU_PROTENSET0_PROTREG1_Values<MPU::PROTENSET0, 1, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG2 = MPU_PROTENSET0_PROTREG2_Values<MPU::PROTENSET0, 2, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG3 = MPU_PROTENSET0_PROTREG3_Values<MPU::PROTENSET0, 3, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG4 = MPU_PROTENSET0_PROTREG4_Values<MPU::PROTENSET0, 4, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG5 = MPU_PROTENSET0_PROTREG5_Values<MPU::PROTENSET0, 5, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG6 = MPU_PROTENSET0_PROTREG6_Values<MPU::PROTENSET0, 6, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG7 = MPU_PROTENSET0_PROTREG7_Values<MPU::PROTENSET0, 7, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG8 = MPU_PROTENSET0_PROTREG8_Values<MPU::PROTENSET0, 8, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG9 = MPU_PROTENSET0_PROTREG9_Values<MPU::PROTENSET0, 9, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG10 = MPU_PROTENSET0_PROTREG10_Values<MPU::PROTENSET0, 10, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG11 = MPU_PROTENSET0_PROTREG11_Values<MPU::PROTENSET0, 11, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG12 = MPU_PROTENSET0_PROTREG12_Values<MPU::PROTENSET0, 12, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG13 = MPU_PROTENSET0_PROTREG13_Values<MPU::PROTENSET0, 13, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG14 = MPU_PROTENSET0_PROTREG14_Values<MPU::PROTENSET0, 14, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG15 = MPU_PROTENSET0_PROTREG15_Values<MPU::PROTENSET0, 15, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG16 = MPU_PROTENSET0_PROTREG16_Values<MPU::PROTENSET0, 16, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG17 = MPU_PROTENSET0_PROTREG17_Values<MPU::PROTENSET0, 17, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG18 = MPU_PROTENSET0_PROTREG18_Values<MPU::PROTENSET0, 18, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG19 = MPU_PROTENSET0_PROTREG19_Values<MPU::PROTENSET0, 19, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG20 = MPU_PROTENSET0_PROTREG20_Values<MPU::PROTENSET0, 20, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG21 = MPU_PROTENSET0_PROTREG21_Values<MPU::PROTENSET0, 21, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG22 = MPU_PROTENSET0_PROTREG22_Values<MPU::PROTENSET0, 22, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG23 = MPU_PROTENSET0_PROTREG23_Values<MPU::PROTENSET0, 23, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG24 = MPU_PROTENSET0_PROTREG24_Values<MPU::PROTENSET0, 24, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG25 = MPU_PROTENSET0_PROTREG25_Values<MPU::PROTENSET0, 25, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG26 = MPU_PROTENSET0_PROTREG26_Values<MPU::PROTENSET0, 26, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG27 = MPU_PROTENSET0_PROTREG27_Values<MPU::PROTENSET0, 27, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG28 = MPU_PROTENSET0_PROTREG28_Values<MPU::PROTENSET0, 28, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG29 = MPU_PROTENSET0_PROTREG29_Values<MPU::PROTENSET0, 29, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG30 = MPU_PROTENSET0_PROTREG30_Values<MPU::PROTENSET0, 30, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using PROTREG31 = MPU_PROTENSET0_PROTREG31_Values<MPU::PROTENSET0, 31, 1, ReadWriteMode, MPUPROTENSET0Base> ;
    using FieldValues = MPU_PROTENSET0_PROTREG31_Values<MPU::PROTENSET0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PROTENSET0Pack  = Register<0x40000600, 32, ReadWriteMode, MPUPROTENSET0Base, T...> ;

  struct MPUPROTENSET1Base {} ;

  struct PROTENSET1 : public RegisterBase<0x40000604, 32, ReadWriteMode>
  {
    using PROTREG32 = MPU_PROTENSET1_PROTREG32_Values<MPU::PROTENSET1, 0, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG33 = MPU_PROTENSET1_PROTREG33_Values<MPU::PROTENSET1, 1, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG34 = MPU_PROTENSET1_PROTREG34_Values<MPU::PROTENSET1, 2, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG35 = MPU_PROTENSET1_PROTREG35_Values<MPU::PROTENSET1, 3, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG36 = MPU_PROTENSET1_PROTREG36_Values<MPU::PROTENSET1, 4, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG37 = MPU_PROTENSET1_PROTREG37_Values<MPU::PROTENSET1, 5, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG38 = MPU_PROTENSET1_PROTREG38_Values<MPU::PROTENSET1, 6, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG39 = MPU_PROTENSET1_PROTREG39_Values<MPU::PROTENSET1, 7, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG40 = MPU_PROTENSET1_PROTREG40_Values<MPU::PROTENSET1, 8, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG41 = MPU_PROTENSET1_PROTREG41_Values<MPU::PROTENSET1, 9, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG42 = MPU_PROTENSET1_PROTREG42_Values<MPU::PROTENSET1, 10, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG43 = MPU_PROTENSET1_PROTREG43_Values<MPU::PROTENSET1, 11, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG44 = MPU_PROTENSET1_PROTREG44_Values<MPU::PROTENSET1, 12, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG45 = MPU_PROTENSET1_PROTREG45_Values<MPU::PROTENSET1, 13, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG46 = MPU_PROTENSET1_PROTREG46_Values<MPU::PROTENSET1, 14, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG47 = MPU_PROTENSET1_PROTREG47_Values<MPU::PROTENSET1, 15, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG48 = MPU_PROTENSET1_PROTREG48_Values<MPU::PROTENSET1, 16, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG49 = MPU_PROTENSET1_PROTREG49_Values<MPU::PROTENSET1, 17, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG50 = MPU_PROTENSET1_PROTREG50_Values<MPU::PROTENSET1, 18, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG51 = MPU_PROTENSET1_PROTREG51_Values<MPU::PROTENSET1, 19, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG52 = MPU_PROTENSET1_PROTREG52_Values<MPU::PROTENSET1, 20, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG53 = MPU_PROTENSET1_PROTREG53_Values<MPU::PROTENSET1, 21, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG54 = MPU_PROTENSET1_PROTREG54_Values<MPU::PROTENSET1, 22, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG55 = MPU_PROTENSET1_PROTREG55_Values<MPU::PROTENSET1, 23, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG56 = MPU_PROTENSET1_PROTREG56_Values<MPU::PROTENSET1, 24, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG57 = MPU_PROTENSET1_PROTREG57_Values<MPU::PROTENSET1, 25, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG58 = MPU_PROTENSET1_PROTREG58_Values<MPU::PROTENSET1, 26, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG59 = MPU_PROTENSET1_PROTREG59_Values<MPU::PROTENSET1, 27, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG60 = MPU_PROTENSET1_PROTREG60_Values<MPU::PROTENSET1, 28, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG61 = MPU_PROTENSET1_PROTREG61_Values<MPU::PROTENSET1, 29, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG62 = MPU_PROTENSET1_PROTREG62_Values<MPU::PROTENSET1, 30, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using PROTREG63 = MPU_PROTENSET1_PROTREG63_Values<MPU::PROTENSET1, 31, 1, ReadWriteMode, MPUPROTENSET1Base> ;
    using FieldValues = MPU_PROTENSET1_PROTREG63_Values<MPU::PROTENSET1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PROTENSET1Pack  = Register<0x40000604, 32, ReadWriteMode, MPUPROTENSET1Base, T...> ;

  struct MPUDISABLEINDEBUGBase {} ;

  struct DISABLEINDEBUG : public RegisterBase<0x40000608, 32, ReadWriteMode>
  {
    using DISABLEINDEBUGField = MPU_DISABLEINDEBUG_DISABLEINDEBUG_Values<MPU::DISABLEINDEBUG, 0, 1, ReadWriteMode, MPUDISABLEINDEBUGBase> ;
    using FieldValues = MPU_DISABLEINDEBUG_DISABLEINDEBUG_Values<MPU::DISABLEINDEBUG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DISABLEINDEBUGPack  = Register<0x40000608, 32, ReadWriteMode, MPUDISABLEINDEBUGBase, T...> ;

  struct MPUPROTBLOCKSIZEBase {} ;

  struct PROTBLOCKSIZE : public RegisterBase<0x4000060C, 32, ReadWriteMode>
  {
    using PROTBLOCKSIZEField = MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Values<MPU::PROTBLOCKSIZE, 0, 2, ReadWriteMode, MPUPROTBLOCKSIZEBase> ;
    using FieldValues = MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Values<MPU::PROTBLOCKSIZE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PROTBLOCKSIZEPack  = Register<0x4000060C, 32, ReadWriteMode, MPUPROTBLOCKSIZEBase, T...> ;

} ;

#endif //#if !defined(MPUREGISTERS_HPP)
