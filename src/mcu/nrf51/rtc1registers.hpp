/*******************************************************************************
* Filename      : rtc1registers.hpp
*
* Details       : Real time counter 1. This header file is auto-generated for
*                 nrf51 device.
*
*
*******************************************************************************/

#if !defined(RTC1REGISTERS_HPP)
#define RTC1REGISTERS_HPP

#include "rtc1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RTC1
{
  struct RTC1TASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x40011000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x40011000, 32, WriteMode, RTC1TASKS_STARTBase, T...> ;

  struct RTC1TASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x40011004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x40011004, 32, WriteMode, RTC1TASKS_STOPBase, T...> ;

  struct RTC1TASKS_CLEARBase {} ;

  struct TASKS_CLEAR : public RegisterBase<0x40011008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CLEARPack  = Register<0x40011008, 32, WriteMode, RTC1TASKS_CLEARBase, T...> ;

  struct RTC1TASKS_TRIGOVRFLWBase {} ;

  struct TASKS_TRIGOVRFLW : public RegisterBase<0x4001100C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_TRIGOVRFLWPack  = Register<0x4001100C, 32, WriteMode, RTC1TASKS_TRIGOVRFLWBase, T...> ;

  struct RTC1EVENTS_TICKBase {} ;

  struct EVENTS_TICK : public RegisterBase<0x40011100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_TICKPack  = Register<0x40011100, 32, ReadWriteMode, RTC1EVENTS_TICKBase, T...> ;

  struct RTC1EVENTS_OVRFLWBase {} ;

  struct EVENTS_OVRFLW : public RegisterBase<0x40011104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_OVRFLWPack  = Register<0x40011104, 32, ReadWriteMode, RTC1EVENTS_OVRFLWBase, T...> ;

  struct RTC1INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40011304, 32, ReadWriteMode>
  {
    using TICK = RTC1_INTENSET_TICK_Values<RTC1::INTENSET, 0, 1, ReadWriteMode, RTC1INTENSETBase> ;
    using OVRFLW = RTC1_INTENSET_OVRFLW_Values<RTC1::INTENSET, 1, 1, ReadWriteMode, RTC1INTENSETBase> ;
    using COMPARE0 = RTC1_INTENSET_COMPARE0_Values<RTC1::INTENSET, 16, 1, ReadWriteMode, RTC1INTENSETBase> ;
    using COMPARE1 = RTC1_INTENSET_COMPARE1_Values<RTC1::INTENSET, 17, 1, ReadWriteMode, RTC1INTENSETBase> ;
    using COMPARE2 = RTC1_INTENSET_COMPARE2_Values<RTC1::INTENSET, 18, 1, ReadWriteMode, RTC1INTENSETBase> ;
    using COMPARE3 = RTC1_INTENSET_COMPARE3_Values<RTC1::INTENSET, 19, 1, ReadWriteMode, RTC1INTENSETBase> ;
    using FieldValues = RTC1_INTENSET_COMPARE3_Values<RTC1::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40011304, 32, ReadWriteMode, RTC1INTENSETBase, T...> ;

  struct RTC1INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40011308, 32, ReadWriteMode>
  {
    using TICK = RTC1_INTENCLR_TICK_Values<RTC1::INTENCLR, 0, 1, ReadWriteMode, RTC1INTENCLRBase> ;
    using OVRFLW = RTC1_INTENCLR_OVRFLW_Values<RTC1::INTENCLR, 1, 1, ReadWriteMode, RTC1INTENCLRBase> ;
    using COMPARE0 = RTC1_INTENCLR_COMPARE0_Values<RTC1::INTENCLR, 16, 1, ReadWriteMode, RTC1INTENCLRBase> ;
    using COMPARE1 = RTC1_INTENCLR_COMPARE1_Values<RTC1::INTENCLR, 17, 1, ReadWriteMode, RTC1INTENCLRBase> ;
    using COMPARE2 = RTC1_INTENCLR_COMPARE2_Values<RTC1::INTENCLR, 18, 1, ReadWriteMode, RTC1INTENCLRBase> ;
    using COMPARE3 = RTC1_INTENCLR_COMPARE3_Values<RTC1::INTENCLR, 19, 1, ReadWriteMode, RTC1INTENCLRBase> ;
    using FieldValues = RTC1_INTENCLR_COMPARE3_Values<RTC1::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40011308, 32, ReadWriteMode, RTC1INTENCLRBase, T...> ;

  struct RTC1EVTENBase {} ;

  struct EVTEN : public RegisterBase<0x40011340, 32, ReadWriteMode>
  {
    using TICK = RTC1_EVTEN_TICK_Values<RTC1::EVTEN, 0, 1, ReadWriteMode, RTC1EVTENBase> ;
    using OVRFLW = RTC1_EVTEN_OVRFLW_Values<RTC1::EVTEN, 1, 1, ReadWriteMode, RTC1EVTENBase> ;
    using COMPARE0 = RTC1_EVTEN_COMPARE0_Values<RTC1::EVTEN, 16, 1, ReadWriteMode, RTC1EVTENBase> ;
    using COMPARE1 = RTC1_EVTEN_COMPARE1_Values<RTC1::EVTEN, 17, 1, ReadWriteMode, RTC1EVTENBase> ;
    using COMPARE2 = RTC1_EVTEN_COMPARE2_Values<RTC1::EVTEN, 18, 1, ReadWriteMode, RTC1EVTENBase> ;
    using COMPARE3 = RTC1_EVTEN_COMPARE3_Values<RTC1::EVTEN, 19, 1, ReadWriteMode, RTC1EVTENBase> ;
    using FieldValues = RTC1_EVTEN_COMPARE3_Values<RTC1::EVTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EVTENPack  = Register<0x40011340, 32, ReadWriteMode, RTC1EVTENBase, T...> ;

  struct RTC1EVTENSETBase {} ;

  struct EVTENSET : public RegisterBase<0x40011344, 32, ReadWriteMode>
  {
    using TICK = RTC1_EVTENSET_TICK_Values<RTC1::EVTENSET, 0, 1, ReadWriteMode, RTC1EVTENSETBase> ;
    using OVRFLW = RTC1_EVTENSET_OVRFLW_Values<RTC1::EVTENSET, 1, 1, ReadWriteMode, RTC1EVTENSETBase> ;
    using COMPARE0 = RTC1_EVTENSET_COMPARE0_Values<RTC1::EVTENSET, 16, 1, ReadWriteMode, RTC1EVTENSETBase> ;
    using COMPARE1 = RTC1_EVTENSET_COMPARE1_Values<RTC1::EVTENSET, 17, 1, ReadWriteMode, RTC1EVTENSETBase> ;
    using COMPARE2 = RTC1_EVTENSET_COMPARE2_Values<RTC1::EVTENSET, 18, 1, ReadWriteMode, RTC1EVTENSETBase> ;
    using COMPARE3 = RTC1_EVTENSET_COMPARE3_Values<RTC1::EVTENSET, 19, 1, ReadWriteMode, RTC1EVTENSETBase> ;
    using FieldValues = RTC1_EVTENSET_COMPARE3_Values<RTC1::EVTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EVTENSETPack  = Register<0x40011344, 32, ReadWriteMode, RTC1EVTENSETBase, T...> ;

  struct RTC1EVTENCLRBase {} ;

  struct EVTENCLR : public RegisterBase<0x40011348, 32, ReadWriteMode>
  {
    using TICK = RTC1_EVTENCLR_TICK_Values<RTC1::EVTENCLR, 0, 1, ReadWriteMode, RTC1EVTENCLRBase> ;
    using OVRFLW = RTC1_EVTENCLR_OVRFLW_Values<RTC1::EVTENCLR, 1, 1, ReadWriteMode, RTC1EVTENCLRBase> ;
    using COMPARE0 = RTC1_EVTENCLR_COMPARE0_Values<RTC1::EVTENCLR, 16, 1, ReadWriteMode, RTC1EVTENCLRBase> ;
    using COMPARE1 = RTC1_EVTENCLR_COMPARE1_Values<RTC1::EVTENCLR, 17, 1, ReadWriteMode, RTC1EVTENCLRBase> ;
    using COMPARE2 = RTC1_EVTENCLR_COMPARE2_Values<RTC1::EVTENCLR, 18, 1, ReadWriteMode, RTC1EVTENCLRBase> ;
    using COMPARE3 = RTC1_EVTENCLR_COMPARE3_Values<RTC1::EVTENCLR, 19, 1, ReadWriteMode, RTC1EVTENCLRBase> ;
    using FieldValues = RTC1_EVTENCLR_COMPARE3_Values<RTC1::EVTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EVTENCLRPack  = Register<0x40011348, 32, ReadWriteMode, RTC1EVTENCLRBase, T...> ;

  struct RTC1COUNTERBase {} ;

  struct COUNTER : public RegisterBase<0x40011504, 32, ReadMode>
  {
    using COUNTERField = RTC1_COUNTER_COUNTER_Values<RTC1::COUNTER, 0, 24, ReadMode, RTC1COUNTERBase> ;
    using FieldValues = RTC1_COUNTER_COUNTER_Values<RTC1::COUNTER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNTERPack  = Register<0x40011504, 32, ReadMode, RTC1COUNTERBase, T...> ;

  struct RTC1PRESCALERBase {} ;

  struct PRESCALER : public RegisterBase<0x40011508, 32, ReadWriteMode>
  {
    using PRESCALERField = RTC1_PRESCALER_PRESCALER_Values<RTC1::PRESCALER, 0, 12, ReadWriteMode, RTC1PRESCALERBase> ;
    using FieldValues = RTC1_PRESCALER_PRESCALER_Values<RTC1::PRESCALER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRESCALERPack  = Register<0x40011508, 32, ReadWriteMode, RTC1PRESCALERBase, T...> ;

  struct RTC1POWERBase {} ;

  struct POWER : public RegisterBase<0x40011FFC, 32, ReadWriteMode>
  {
    using POWERField = RTC1_POWER_POWER_Values<RTC1::POWER, 0, 1, ReadWriteMode, RTC1POWERBase> ;
    using FieldValues = RTC1_POWER_POWER_Values<RTC1::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40011FFC, 32, ReadWriteMode, RTC1POWERBase, T...> ;

} ;

#endif //#if !defined(RTC1REGISTERS_HPP)
