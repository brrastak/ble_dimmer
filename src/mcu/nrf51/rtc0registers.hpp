/*******************************************************************************
* Filename      : rtc0registers.hpp
*
* Details       : Real time counter 0. This header file is auto-generated for
*                 nrf51 device.
*
*
*******************************************************************************/

#if !defined(RTC0REGISTERS_HPP)
#define RTC0REGISTERS_HPP

#include "rtc0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RTC0
{
  struct RTC0TASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x4000B000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x4000B000, 32, WriteMode, RTC0TASKS_STARTBase, T...> ;

  struct RTC0TASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x4000B004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x4000B004, 32, WriteMode, RTC0TASKS_STOPBase, T...> ;

  struct RTC0TASKS_CLEARBase {} ;

  struct TASKS_CLEAR : public RegisterBase<0x4000B008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CLEARPack  = Register<0x4000B008, 32, WriteMode, RTC0TASKS_CLEARBase, T...> ;

  struct RTC0TASKS_TRIGOVRFLWBase {} ;

  struct TASKS_TRIGOVRFLW : public RegisterBase<0x4000B00C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_TRIGOVRFLWPack  = Register<0x4000B00C, 32, WriteMode, RTC0TASKS_TRIGOVRFLWBase, T...> ;

  struct RTC0EVENTS_TICKBase {} ;

  struct EVENTS_TICK : public RegisterBase<0x4000B100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_TICKPack  = Register<0x4000B100, 32, ReadWriteMode, RTC0EVENTS_TICKBase, T...> ;

  struct RTC0EVENTS_OVRFLWBase {} ;

  struct EVENTS_OVRFLW : public RegisterBase<0x4000B104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_OVRFLWPack  = Register<0x4000B104, 32, ReadWriteMode, RTC0EVENTS_OVRFLWBase, T...> ;

  struct RTC0INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x4000B304, 32, ReadWriteMode>
  {
    using TICK = RTC0_INTENSET_TICK_Values<RTC0::INTENSET, 0, 1, ReadWriteMode, RTC0INTENSETBase> ;
    using OVRFLW = RTC0_INTENSET_OVRFLW_Values<RTC0::INTENSET, 1, 1, ReadWriteMode, RTC0INTENSETBase> ;
    using COMPARE0 = RTC0_INTENSET_COMPARE0_Values<RTC0::INTENSET, 16, 1, ReadWriteMode, RTC0INTENSETBase> ;
    using COMPARE1 = RTC0_INTENSET_COMPARE1_Values<RTC0::INTENSET, 17, 1, ReadWriteMode, RTC0INTENSETBase> ;
    using COMPARE2 = RTC0_INTENSET_COMPARE2_Values<RTC0::INTENSET, 18, 1, ReadWriteMode, RTC0INTENSETBase> ;
    using COMPARE3 = RTC0_INTENSET_COMPARE3_Values<RTC0::INTENSET, 19, 1, ReadWriteMode, RTC0INTENSETBase> ;
    using FieldValues = RTC0_INTENSET_COMPARE3_Values<RTC0::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x4000B304, 32, ReadWriteMode, RTC0INTENSETBase, T...> ;

  struct RTC0INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x4000B308, 32, ReadWriteMode>
  {
    using TICK = RTC0_INTENCLR_TICK_Values<RTC0::INTENCLR, 0, 1, ReadWriteMode, RTC0INTENCLRBase> ;
    using OVRFLW = RTC0_INTENCLR_OVRFLW_Values<RTC0::INTENCLR, 1, 1, ReadWriteMode, RTC0INTENCLRBase> ;
    using COMPARE0 = RTC0_INTENCLR_COMPARE0_Values<RTC0::INTENCLR, 16, 1, ReadWriteMode, RTC0INTENCLRBase> ;
    using COMPARE1 = RTC0_INTENCLR_COMPARE1_Values<RTC0::INTENCLR, 17, 1, ReadWriteMode, RTC0INTENCLRBase> ;
    using COMPARE2 = RTC0_INTENCLR_COMPARE2_Values<RTC0::INTENCLR, 18, 1, ReadWriteMode, RTC0INTENCLRBase> ;
    using COMPARE3 = RTC0_INTENCLR_COMPARE3_Values<RTC0::INTENCLR, 19, 1, ReadWriteMode, RTC0INTENCLRBase> ;
    using FieldValues = RTC0_INTENCLR_COMPARE3_Values<RTC0::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x4000B308, 32, ReadWriteMode, RTC0INTENCLRBase, T...> ;

  struct RTC0EVTENBase {} ;

  struct EVTEN : public RegisterBase<0x4000B340, 32, ReadWriteMode>
  {
    using TICK = RTC0_EVTEN_TICK_Values<RTC0::EVTEN, 0, 1, ReadWriteMode, RTC0EVTENBase> ;
    using OVRFLW = RTC0_EVTEN_OVRFLW_Values<RTC0::EVTEN, 1, 1, ReadWriteMode, RTC0EVTENBase> ;
    using COMPARE0 = RTC0_EVTEN_COMPARE0_Values<RTC0::EVTEN, 16, 1, ReadWriteMode, RTC0EVTENBase> ;
    using COMPARE1 = RTC0_EVTEN_COMPARE1_Values<RTC0::EVTEN, 17, 1, ReadWriteMode, RTC0EVTENBase> ;
    using COMPARE2 = RTC0_EVTEN_COMPARE2_Values<RTC0::EVTEN, 18, 1, ReadWriteMode, RTC0EVTENBase> ;
    using COMPARE3 = RTC0_EVTEN_COMPARE3_Values<RTC0::EVTEN, 19, 1, ReadWriteMode, RTC0EVTENBase> ;
    using FieldValues = RTC0_EVTEN_COMPARE3_Values<RTC0::EVTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EVTENPack  = Register<0x4000B340, 32, ReadWriteMode, RTC0EVTENBase, T...> ;

  struct RTC0EVTENSETBase {} ;

  struct EVTENSET : public RegisterBase<0x4000B344, 32, ReadWriteMode>
  {
    using TICK = RTC0_EVTENSET_TICK_Values<RTC0::EVTENSET, 0, 1, ReadWriteMode, RTC0EVTENSETBase> ;
    using OVRFLW = RTC0_EVTENSET_OVRFLW_Values<RTC0::EVTENSET, 1, 1, ReadWriteMode, RTC0EVTENSETBase> ;
    using COMPARE0 = RTC0_EVTENSET_COMPARE0_Values<RTC0::EVTENSET, 16, 1, ReadWriteMode, RTC0EVTENSETBase> ;
    using COMPARE1 = RTC0_EVTENSET_COMPARE1_Values<RTC0::EVTENSET, 17, 1, ReadWriteMode, RTC0EVTENSETBase> ;
    using COMPARE2 = RTC0_EVTENSET_COMPARE2_Values<RTC0::EVTENSET, 18, 1, ReadWriteMode, RTC0EVTENSETBase> ;
    using COMPARE3 = RTC0_EVTENSET_COMPARE3_Values<RTC0::EVTENSET, 19, 1, ReadWriteMode, RTC0EVTENSETBase> ;
    using FieldValues = RTC0_EVTENSET_COMPARE3_Values<RTC0::EVTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EVTENSETPack  = Register<0x4000B344, 32, ReadWriteMode, RTC0EVTENSETBase, T...> ;

  struct RTC0EVTENCLRBase {} ;

  struct EVTENCLR : public RegisterBase<0x4000B348, 32, ReadWriteMode>
  {
    using TICK = RTC0_EVTENCLR_TICK_Values<RTC0::EVTENCLR, 0, 1, ReadWriteMode, RTC0EVTENCLRBase> ;
    using OVRFLW = RTC0_EVTENCLR_OVRFLW_Values<RTC0::EVTENCLR, 1, 1, ReadWriteMode, RTC0EVTENCLRBase> ;
    using COMPARE0 = RTC0_EVTENCLR_COMPARE0_Values<RTC0::EVTENCLR, 16, 1, ReadWriteMode, RTC0EVTENCLRBase> ;
    using COMPARE1 = RTC0_EVTENCLR_COMPARE1_Values<RTC0::EVTENCLR, 17, 1, ReadWriteMode, RTC0EVTENCLRBase> ;
    using COMPARE2 = RTC0_EVTENCLR_COMPARE2_Values<RTC0::EVTENCLR, 18, 1, ReadWriteMode, RTC0EVTENCLRBase> ;
    using COMPARE3 = RTC0_EVTENCLR_COMPARE3_Values<RTC0::EVTENCLR, 19, 1, ReadWriteMode, RTC0EVTENCLRBase> ;
    using FieldValues = RTC0_EVTENCLR_COMPARE3_Values<RTC0::EVTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EVTENCLRPack  = Register<0x4000B348, 32, ReadWriteMode, RTC0EVTENCLRBase, T...> ;

  struct RTC0COUNTERBase {} ;

  struct COUNTER : public RegisterBase<0x4000B504, 32, ReadMode>
  {
    using COUNTERField = RTC0_COUNTER_COUNTER_Values<RTC0::COUNTER, 0, 24, ReadMode, RTC0COUNTERBase> ;
    using FieldValues = RTC0_COUNTER_COUNTER_Values<RTC0::COUNTER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNTERPack  = Register<0x4000B504, 32, ReadMode, RTC0COUNTERBase, T...> ;

  struct RTC0PRESCALERBase {} ;

  struct PRESCALER : public RegisterBase<0x4000B508, 32, ReadWriteMode>
  {
    using PRESCALERField = RTC0_PRESCALER_PRESCALER_Values<RTC0::PRESCALER, 0, 12, ReadWriteMode, RTC0PRESCALERBase> ;
    using FieldValues = RTC0_PRESCALER_PRESCALER_Values<RTC0::PRESCALER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRESCALERPack  = Register<0x4000B508, 32, ReadWriteMode, RTC0PRESCALERBase, T...> ;

  struct RTC0POWERBase {} ;

  struct POWER : public RegisterBase<0x4000BFFC, 32, ReadWriteMode>
  {
    using POWERField = RTC0_POWER_POWER_Values<RTC0::POWER, 0, 1, ReadWriteMode, RTC0POWERBase> ;
    using FieldValues = RTC0_POWER_POWER_Values<RTC0::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x4000BFFC, 32, ReadWriteMode, RTC0POWERBase, T...> ;

  struct RTC0EVENTS_COMPARE0Base {} ;

  struct EVENTS_COMPARE0 : public RegisterBase<0x4000B140, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_COMPARE0Pack  = Register<0x4000B140, 32, ReadWriteMode, RTC0EVENTS_COMPARE0Base, T...> ;

  struct RTC0EVENTS_COMPARE1Base {} ;

  struct EVENTS_COMPARE1 : public RegisterBase<0x4000B144, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_COMPARE1Pack  = Register<0x4000B144, 32, ReadWriteMode, RTC0EVENTS_COMPARE1Base, T...> ;

  struct RTC0EVENTS_COMPARE2Base {} ;

  struct EVENTS_COMPARE2 : public RegisterBase<0x4000B148, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_COMPARE2Pack  = Register<0x4000B148, 32, ReadWriteMode, RTC0EVENTS_COMPARE2Base, T...> ;

  struct RTC0EVENTS_COMPARE3Base {} ;

  struct EVENTS_COMPARE3 : public RegisterBase<0x4000B14C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_COMPARE3Pack  = Register<0x4000B14C, 32, ReadWriteMode, RTC0EVENTS_COMPARE3Base, T...> ;

  struct RTC0CC0Base {} ;

  struct CC0 : public RegisterBase<0x4000B540, 32, ReadWriteMode>
  {
    using COMPARE = RTC0_CC0_COMPARE_Values<RTC0::CC0, 0, 24, ReadWriteMode, RTC0CC0Base> ;
    using FieldValues = RTC0_CC0_COMPARE_Values<RTC0::CC0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CC0Pack  = Register<0x4000B540, 32, ReadWriteMode, RTC0CC0Base, T...> ;

  struct RTC0CC1Base {} ;

  struct CC1 : public RegisterBase<0x4000B544, 32, ReadWriteMode>
  {
    using COMPARE = RTC0_CC1_COMPARE_Values<RTC0::CC1, 0, 24, ReadWriteMode, RTC0CC1Base> ;
    using FieldValues = RTC0_CC1_COMPARE_Values<RTC0::CC1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CC1Pack  = Register<0x4000B544, 32, ReadWriteMode, RTC0CC1Base, T...> ;

  struct RTC0CC2Base {} ;

  struct CC2 : public RegisterBase<0x4000B548, 32, ReadWriteMode>
  {
    using COMPARE = RTC0_CC2_COMPARE_Values<RTC0::CC2, 0, 24, ReadWriteMode, RTC0CC2Base> ;
    using FieldValues = RTC0_CC2_COMPARE_Values<RTC0::CC2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CC2Pack  = Register<0x4000B548, 32, ReadWriteMode, RTC0CC2Base, T...> ;

  struct RTC0CC3Base {} ;

  struct CC3 : public RegisterBase<0x4000B54C, 32, ReadWriteMode>
  {
    using COMPARE = RTC0_CC3_COMPARE_Values<RTC0::CC3, 0, 24, ReadWriteMode, RTC0CC3Base> ;
    using FieldValues = RTC0_CC3_COMPARE_Values<RTC0::CC3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CC3Pack  = Register<0x4000B54C, 32, ReadWriteMode, RTC0CC3Base, T...> ;

} ;

#endif //#if !defined(RTC0REGISTERS_HPP)
