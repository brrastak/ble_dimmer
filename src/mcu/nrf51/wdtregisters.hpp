/*******************************************************************************
* Filename      : wdtregisters.hpp
*
* Details       : Watchdog Timer. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(WDTREGISTERS_HPP)
#define WDTREGISTERS_HPP

#include "wdtfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct WDT
{
  struct WDTTASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x40010000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x40010000, 32, WriteMode, WDTTASKS_STARTBase, T...> ;

  struct WDTEVENTS_TIMEOUTBase {} ;

  struct EVENTS_TIMEOUT : public RegisterBase<0x40010100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_TIMEOUTPack  = Register<0x40010100, 32, ReadWriteMode, WDTEVENTS_TIMEOUTBase, T...> ;

  struct WDTINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40010304, 32, ReadWriteMode>
  {
    using TIMEOUT = WDT_INTENSET_TIMEOUT_Values<WDT::INTENSET, 0, 1, ReadWriteMode, WDTINTENSETBase> ;
    using FieldValues = WDT_INTENSET_TIMEOUT_Values<WDT::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40010304, 32, ReadWriteMode, WDTINTENSETBase, T...> ;

  struct WDTINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40010308, 32, ReadWriteMode>
  {
    using TIMEOUT = WDT_INTENCLR_TIMEOUT_Values<WDT::INTENCLR, 0, 1, ReadWriteMode, WDTINTENCLRBase> ;
    using FieldValues = WDT_INTENCLR_TIMEOUT_Values<WDT::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40010308, 32, ReadWriteMode, WDTINTENCLRBase, T...> ;

  struct WDTRUNSTATUSBase {} ;

  struct RUNSTATUS : public RegisterBase<0x40010400, 32, ReadMode>
  {
    using RUNSTATUSField = WDT_RUNSTATUS_RUNSTATUS_Values<WDT::RUNSTATUS, 0, 1, ReadMode, WDTRUNSTATUSBase> ;
    using FieldValues = WDT_RUNSTATUS_RUNSTATUS_Values<WDT::RUNSTATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RUNSTATUSPack  = Register<0x40010400, 32, ReadMode, WDTRUNSTATUSBase, T...> ;

  struct WDTREQSTATUSBase {} ;

  struct REQSTATUS : public RegisterBase<0x40010404, 32, ReadMode>
  {
    using RR0 = WDT_REQSTATUS_RR0_Values<WDT::REQSTATUS, 0, 1, ReadMode, WDTREQSTATUSBase> ;
    using RR1 = WDT_REQSTATUS_RR1_Values<WDT::REQSTATUS, 1, 1, ReadMode, WDTREQSTATUSBase> ;
    using RR2 = WDT_REQSTATUS_RR2_Values<WDT::REQSTATUS, 2, 1, ReadMode, WDTREQSTATUSBase> ;
    using RR3 = WDT_REQSTATUS_RR3_Values<WDT::REQSTATUS, 3, 1, ReadMode, WDTREQSTATUSBase> ;
    using RR4 = WDT_REQSTATUS_RR4_Values<WDT::REQSTATUS, 4, 1, ReadMode, WDTREQSTATUSBase> ;
    using RR5 = WDT_REQSTATUS_RR5_Values<WDT::REQSTATUS, 5, 1, ReadMode, WDTREQSTATUSBase> ;
    using RR6 = WDT_REQSTATUS_RR6_Values<WDT::REQSTATUS, 6, 1, ReadMode, WDTREQSTATUSBase> ;
    using RR7 = WDT_REQSTATUS_RR7_Values<WDT::REQSTATUS, 7, 1, ReadMode, WDTREQSTATUSBase> ;
    using FieldValues = WDT_REQSTATUS_RR7_Values<WDT::REQSTATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REQSTATUSPack  = Register<0x40010404, 32, ReadMode, WDTREQSTATUSBase, T...> ;

  struct WDTCRVBase {} ;

  struct CRV : public RegisterBase<0x40010504, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CRVPack  = Register<0x40010504, 32, ReadWriteMode, WDTCRVBase, T...> ;

  struct WDTRRENBase {} ;

  struct RREN : public RegisterBase<0x40010508, 32, ReadWriteMode>
  {
    using RR0 = WDT_RREN_RR0_Values<WDT::RREN, 0, 1, ReadWriteMode, WDTRRENBase> ;
    using RR1 = WDT_RREN_RR1_Values<WDT::RREN, 1, 1, ReadWriteMode, WDTRRENBase> ;
    using RR2 = WDT_RREN_RR2_Values<WDT::RREN, 2, 1, ReadWriteMode, WDTRRENBase> ;
    using RR3 = WDT_RREN_RR3_Values<WDT::RREN, 3, 1, ReadWriteMode, WDTRRENBase> ;
    using RR4 = WDT_RREN_RR4_Values<WDT::RREN, 4, 1, ReadWriteMode, WDTRRENBase> ;
    using RR5 = WDT_RREN_RR5_Values<WDT::RREN, 5, 1, ReadWriteMode, WDTRRENBase> ;
    using RR6 = WDT_RREN_RR6_Values<WDT::RREN, 6, 1, ReadWriteMode, WDTRRENBase> ;
    using RR7 = WDT_RREN_RR7_Values<WDT::RREN, 7, 1, ReadWriteMode, WDTRRENBase> ;
    using FieldValues = WDT_RREN_RR7_Values<WDT::RREN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RRENPack  = Register<0x40010508, 32, ReadWriteMode, WDTRRENBase, T...> ;

  struct WDTCONFIGBase {} ;

  struct CONFIG : public RegisterBase<0x4001050C, 32, ReadWriteMode>
  {
    using SLEEP = WDT_CONFIG_SLEEP_Values<WDT::CONFIG, 0, 1, ReadWriteMode, WDTCONFIGBase> ;
    using HALT = WDT_CONFIG_HALT_Values<WDT::CONFIG, 3, 1, ReadWriteMode, WDTCONFIGBase> ;
    using FieldValues = WDT_CONFIG_HALT_Values<WDT::CONFIG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIGPack  = Register<0x4001050C, 32, ReadWriteMode, WDTCONFIGBase, T...> ;

  struct WDTPOWERBase {} ;

  struct POWER : public RegisterBase<0x40010FFC, 32, ReadWriteMode>
  {
    using POWERField = WDT_POWER_POWER_Values<WDT::POWER, 0, 1, ReadWriteMode, WDTPOWERBase> ;
    using FieldValues = WDT_POWER_POWER_Values<WDT::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40010FFC, 32, ReadWriteMode, WDTPOWERBase, T...> ;

  struct WDTRR0Base {} ;

  struct RR0 : public RegisterBase<0x40010600, 32, WriteMode>
  {
    using RR = WDT_RR0_RR_Values<WDT::RR0, 0, 32, WriteMode, WDTRR0Base> ;
    using FieldValues = WDT_RR0_RR_Values<WDT::RR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RR0Pack  = Register<0x40010600, 32, WriteMode, WDTRR0Base, T...> ;

  struct WDTRR1Base {} ;

  struct RR1 : public RegisterBase<0x40010604, 32, WriteMode>
  {
    using RR = WDT_RR1_RR_Values<WDT::RR1, 0, 32, WriteMode, WDTRR1Base> ;
    using FieldValues = WDT_RR1_RR_Values<WDT::RR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RR1Pack  = Register<0x40010604, 32, WriteMode, WDTRR1Base, T...> ;

  struct WDTRR2Base {} ;

  struct RR2 : public RegisterBase<0x40010608, 32, WriteMode>
  {
    using RR = WDT_RR2_RR_Values<WDT::RR2, 0, 32, WriteMode, WDTRR2Base> ;
    using FieldValues = WDT_RR2_RR_Values<WDT::RR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RR2Pack  = Register<0x40010608, 32, WriteMode, WDTRR2Base, T...> ;

  struct WDTRR3Base {} ;

  struct RR3 : public RegisterBase<0x4001060C, 32, WriteMode>
  {
    using RR = WDT_RR3_RR_Values<WDT::RR3, 0, 32, WriteMode, WDTRR3Base> ;
    using FieldValues = WDT_RR3_RR_Values<WDT::RR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RR3Pack  = Register<0x4001060C, 32, WriteMode, WDTRR3Base, T...> ;

  struct WDTRR4Base {} ;

  struct RR4 : public RegisterBase<0x40010610, 32, WriteMode>
  {
    using RR = WDT_RR4_RR_Values<WDT::RR4, 0, 32, WriteMode, WDTRR4Base> ;
    using FieldValues = WDT_RR4_RR_Values<WDT::RR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RR4Pack  = Register<0x40010610, 32, WriteMode, WDTRR4Base, T...> ;

  struct WDTRR5Base {} ;

  struct RR5 : public RegisterBase<0x40010614, 32, WriteMode>
  {
    using RR = WDT_RR5_RR_Values<WDT::RR5, 0, 32, WriteMode, WDTRR5Base> ;
    using FieldValues = WDT_RR5_RR_Values<WDT::RR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RR5Pack  = Register<0x40010614, 32, WriteMode, WDTRR5Base, T...> ;

  struct WDTRR6Base {} ;

  struct RR6 : public RegisterBase<0x40010618, 32, WriteMode>
  {
    using RR = WDT_RR6_RR_Values<WDT::RR6, 0, 32, WriteMode, WDTRR6Base> ;
    using FieldValues = WDT_RR6_RR_Values<WDT::RR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RR6Pack  = Register<0x40010618, 32, WriteMode, WDTRR6Base, T...> ;

  struct WDTRR7Base {} ;

  struct RR7 : public RegisterBase<0x4001061C, 32, WriteMode>
  {
    using RR = WDT_RR7_RR_Values<WDT::RR7, 0, 32, WriteMode, WDTRR7Base> ;
    using FieldValues = WDT_RR7_RR_Values<WDT::RR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RR7Pack  = Register<0x4001061C, 32, WriteMode, WDTRR7Base, T...> ;

} ;

#endif //#if !defined(WDTREGISTERS_HPP)
