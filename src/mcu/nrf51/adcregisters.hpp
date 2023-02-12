/*******************************************************************************
* Filename      : adcregisters.hpp
*
* Details       : Analog to digital converter. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(ADCREGISTERS_HPP)
#define ADCREGISTERS_HPP

#include "adcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC
{
  struct ADCTASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x40007000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x40007000, 32, WriteMode, ADCTASKS_STARTBase, T...> ;

  struct ADCTASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x40007004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x40007004, 32, WriteMode, ADCTASKS_STOPBase, T...> ;

  struct ADCEVENTS_ENDBase {} ;

  struct EVENTS_END : public RegisterBase<0x40007100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ENDPack  = Register<0x40007100, 32, ReadWriteMode, ADCEVENTS_ENDBase, T...> ;

  struct ADCINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40007304, 32, ReadWriteMode>
  {
    using END = ADC_INTENSET_END_Values<ADC::INTENSET, 0, 1, ReadWriteMode, ADCINTENSETBase> ;
    using FieldValues = ADC_INTENSET_END_Values<ADC::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40007304, 32, ReadWriteMode, ADCINTENSETBase, T...> ;

  struct ADCINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40007308, 32, ReadWriteMode>
  {
    using END = ADC_INTENCLR_END_Values<ADC::INTENCLR, 0, 1, ReadWriteMode, ADCINTENCLRBase> ;
    using FieldValues = ADC_INTENCLR_END_Values<ADC::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40007308, 32, ReadWriteMode, ADCINTENCLRBase, T...> ;

  struct ADCBUSYBase {} ;

  struct BUSY : public RegisterBase<0x40007400, 32, ReadMode>
  {
    using BUSYField = ADC_BUSY_BUSY_Values<ADC::BUSY, 0, 1, ReadMode, ADCBUSYBase> ;
    using FieldValues = ADC_BUSY_BUSY_Values<ADC::BUSY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BUSYPack  = Register<0x40007400, 32, ReadMode, ADCBUSYBase, T...> ;

  struct ADCENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x40007500, 32, ReadWriteMode>
  {
    using ENABLEField = ADC_ENABLE_ENABLE_Values<ADC::ENABLE, 0, 2, ReadWriteMode, ADCENABLEBase> ;
    using FieldValues = ADC_ENABLE_ENABLE_Values<ADC::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x40007500, 32, ReadWriteMode, ADCENABLEBase, T...> ;

  struct ADCCONFIGBase {} ;

  struct CONFIG : public RegisterBase<0x40007504, 32, ReadWriteMode>
  {
    using RES = ADC_CONFIG_RES_Values<ADC::CONFIG, 0, 2, ReadWriteMode, ADCCONFIGBase> ;
    using INPSEL = ADC_CONFIG_INPSEL_Values<ADC::CONFIG, 2, 3, ReadWriteMode, ADCCONFIGBase> ;
    using REFSEL = ADC_CONFIG_REFSEL_Values<ADC::CONFIG, 5, 2, ReadWriteMode, ADCCONFIGBase> ;
    using PSEL = ADC_CONFIG_PSEL_Values<ADC::CONFIG, 8, 8, ReadWriteMode, ADCCONFIGBase> ;
    using EXTREFSEL = ADC_CONFIG_EXTREFSEL_Values<ADC::CONFIG, 16, 2, ReadWriteMode, ADCCONFIGBase> ;
    using FieldValues = ADC_CONFIG_EXTREFSEL_Values<ADC::CONFIG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIGPack  = Register<0x40007504, 32, ReadWriteMode, ADCCONFIGBase, T...> ;

  struct ADCRESULTBase {} ;

  struct RESULT : public RegisterBase<0x40007508, 32, ReadMode>
  {
    using RESULTField = ADC_RESULT_RESULT_Values<ADC::RESULT, 0, 10, ReadMode, ADCRESULTBase> ;
    using FieldValues = ADC_RESULT_RESULT_Values<ADC::RESULT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESULTPack  = Register<0x40007508, 32, ReadMode, ADCRESULTBase, T...> ;

  struct ADCPOWERBase {} ;

  struct POWER : public RegisterBase<0x40007FFC, 32, ReadWriteMode>
  {
    using POWERField = ADC_POWER_POWER_Values<ADC::POWER, 0, 1, ReadWriteMode, ADCPOWERBase> ;
    using FieldValues = ADC_POWER_POWER_Values<ADC::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40007FFC, 32, ReadWriteMode, ADCPOWERBase, T...> ;

} ;

#endif //#if !defined(ADCREGISTERS_HPP)
