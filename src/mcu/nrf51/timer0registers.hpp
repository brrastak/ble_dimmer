/*******************************************************************************
* Filename      : timer0registers.hpp
*
* Details       : Timer 0. This header file is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(TIMER0REGISTERS_HPP)
#define TIMER0REGISTERS_HPP

#include "timer0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER0
{
  struct TIMER0TASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x40008000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x40008000, 32, WriteMode, TIMER0TASKS_STARTBase, T...> ;

  struct TIMER0TASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x40008004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x40008004, 32, WriteMode, TIMER0TASKS_STOPBase, T...> ;

  struct TIMER0TASKS_COUNTBase {} ;

  struct TASKS_COUNT : public RegisterBase<0x40008008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_COUNTPack  = Register<0x40008008, 32, WriteMode, TIMER0TASKS_COUNTBase, T...> ;

  struct TIMER0TASKS_CLEARBase {} ;

  struct TASKS_CLEAR : public RegisterBase<0x4000800C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CLEARPack  = Register<0x4000800C, 32, WriteMode, TIMER0TASKS_CLEARBase, T...> ;

  struct TIMER0TASKS_SHUTDOWNBase {} ;

  struct TASKS_SHUTDOWN : public RegisterBase<0x40008010, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_SHUTDOWNPack  = Register<0x40008010, 32, WriteMode, TIMER0TASKS_SHUTDOWNBase, T...> ;

  struct TIMER0SHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x40008200, 32, ReadWriteMode>
  {
    using COMPARE0_CLEAR = TIMER0_SHORTS_COMPARE0_CLEAR_Values<TIMER0::SHORTS, 0, 1, ReadWriteMode, TIMER0SHORTSBase> ;
    using COMPARE1_CLEAR = TIMER0_SHORTS_COMPARE1_CLEAR_Values<TIMER0::SHORTS, 1, 1, ReadWriteMode, TIMER0SHORTSBase> ;
    using COMPARE2_CLEAR = TIMER0_SHORTS_COMPARE2_CLEAR_Values<TIMER0::SHORTS, 2, 1, ReadWriteMode, TIMER0SHORTSBase> ;
    using COMPARE3_CLEAR = TIMER0_SHORTS_COMPARE3_CLEAR_Values<TIMER0::SHORTS, 3, 1, ReadWriteMode, TIMER0SHORTSBase> ;
    using COMPARE0_STOP = TIMER0_SHORTS_COMPARE0_STOP_Values<TIMER0::SHORTS, 8, 1, ReadWriteMode, TIMER0SHORTSBase> ;
    using COMPARE1_STOP = TIMER0_SHORTS_COMPARE1_STOP_Values<TIMER0::SHORTS, 9, 1, ReadWriteMode, TIMER0SHORTSBase> ;
    using COMPARE2_STOP = TIMER0_SHORTS_COMPARE2_STOP_Values<TIMER0::SHORTS, 10, 1, ReadWriteMode, TIMER0SHORTSBase> ;
    using COMPARE3_STOP = TIMER0_SHORTS_COMPARE3_STOP_Values<TIMER0::SHORTS, 11, 1, ReadWriteMode, TIMER0SHORTSBase> ;
    using FieldValues = TIMER0_SHORTS_COMPARE3_STOP_Values<TIMER0::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x40008200, 32, ReadWriteMode, TIMER0SHORTSBase, T...> ;

  struct TIMER0INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40008304, 32, ReadWriteMode>
  {
    using COMPARE0 = TIMER0_INTENSET_COMPARE0_Values<TIMER0::INTENSET, 16, 1, ReadWriteMode, TIMER0INTENSETBase> ;
    using COMPARE1 = TIMER0_INTENSET_COMPARE1_Values<TIMER0::INTENSET, 17, 1, ReadWriteMode, TIMER0INTENSETBase> ;
    using COMPARE2 = TIMER0_INTENSET_COMPARE2_Values<TIMER0::INTENSET, 18, 1, ReadWriteMode, TIMER0INTENSETBase> ;
    using COMPARE3 = TIMER0_INTENSET_COMPARE3_Values<TIMER0::INTENSET, 19, 1, ReadWriteMode, TIMER0INTENSETBase> ;
    using FieldValues = TIMER0_INTENSET_COMPARE3_Values<TIMER0::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40008304, 32, ReadWriteMode, TIMER0INTENSETBase, T...> ;

  struct TIMER0INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40008308, 32, ReadWriteMode>
  {
    using COMPARE0 = TIMER0_INTENCLR_COMPARE0_Values<TIMER0::INTENCLR, 16, 1, ReadWriteMode, TIMER0INTENCLRBase> ;
    using COMPARE1 = TIMER0_INTENCLR_COMPARE1_Values<TIMER0::INTENCLR, 17, 1, ReadWriteMode, TIMER0INTENCLRBase> ;
    using COMPARE2 = TIMER0_INTENCLR_COMPARE2_Values<TIMER0::INTENCLR, 18, 1, ReadWriteMode, TIMER0INTENCLRBase> ;
    using COMPARE3 = TIMER0_INTENCLR_COMPARE3_Values<TIMER0::INTENCLR, 19, 1, ReadWriteMode, TIMER0INTENCLRBase> ;
    using FieldValues = TIMER0_INTENCLR_COMPARE3_Values<TIMER0::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40008308, 32, ReadWriteMode, TIMER0INTENCLRBase, T...> ;

  struct TIMER0MODEBase {} ;

  struct MODE : public RegisterBase<0x40008504, 32, ReadWriteMode>
  {
    using MODEField = TIMER0_MODE_MODE_Values<TIMER0::MODE, 0, 1, ReadWriteMode, TIMER0MODEBase> ;
    using FieldValues = TIMER0_MODE_MODE_Values<TIMER0::MODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODEPack  = Register<0x40008504, 32, ReadWriteMode, TIMER0MODEBase, T...> ;

  struct TIMER0BITMODEBase {} ;

  struct BITMODE : public RegisterBase<0x40008508, 32, ReadWriteMode>
  {
    using BITMODEField = TIMER0_BITMODE_BITMODE_Values<TIMER0::BITMODE, 0, 2, ReadWriteMode, TIMER0BITMODEBase> ;
    using FieldValues = TIMER0_BITMODE_BITMODE_Values<TIMER0::BITMODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BITMODEPack  = Register<0x40008508, 32, ReadWriteMode, TIMER0BITMODEBase, T...> ;

  struct TIMER0PRESCALERBase {} ;

  struct PRESCALER : public RegisterBase<0x40008510, 32, ReadWriteMode>
  {
    using PRESCALERField = TIMER0_PRESCALER_PRESCALER_Values<TIMER0::PRESCALER, 0, 4, ReadWriteMode, TIMER0PRESCALERBase> ;
    using FieldValues = TIMER0_PRESCALER_PRESCALER_Values<TIMER0::PRESCALER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRESCALERPack  = Register<0x40008510, 32, ReadWriteMode, TIMER0PRESCALERBase, T...> ;

  struct TIMER0POWERBase {} ;

  struct POWER : public RegisterBase<0x40008FFC, 32, ReadWriteMode>
  {
    using POWERField = TIMER0_POWER_POWER_Values<TIMER0::POWER, 0, 1, ReadWriteMode, TIMER0POWERBase> ;
    using FieldValues = TIMER0_POWER_POWER_Values<TIMER0::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40008FFC, 32, ReadWriteMode, TIMER0POWERBase, T...> ;

  struct TIMER0TASKS_CAPTURE0Base {} ;

  struct TASKS_CAPTURE0 : public RegisterBase<0x40008040, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CAPTURE0Pack  = Register<0x40008040, 32, WriteMode, TIMER0TASKS_CAPTURE0Base, T...> ;

  struct TIMER0TASKS_CAPTURE1Base {} ;

  struct TASKS_CAPTURE1 : public RegisterBase<0x40008044, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CAPTURE1Pack  = Register<0x40008044, 32, WriteMode, TIMER0TASKS_CAPTURE1Base, T...> ;

  struct TIMER0TASKS_CAPTURE2Base {} ;

  struct TASKS_CAPTURE2 : public RegisterBase<0x40008048, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CAPTURE2Pack  = Register<0x40008048, 32, WriteMode, TIMER0TASKS_CAPTURE2Base, T...> ;

  struct TIMER0TASKS_CAPTURE3Base {} ;

  struct TASKS_CAPTURE3 : public RegisterBase<0x4000804C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CAPTURE3Pack  = Register<0x4000804C, 32, WriteMode, TIMER0TASKS_CAPTURE3Base, T...> ;

  struct TIMER0EVENTS_COMPARE0Base {} ;

  struct EVENTS_COMPARE0 : public RegisterBase<0x40008140, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_COMPARE0Pack  = Register<0x40008140, 32, ReadWriteMode, TIMER0EVENTS_COMPARE0Base, T...> ;

  struct TIMER0EVENTS_COMPARE1Base {} ;

  struct EVENTS_COMPARE1 : public RegisterBase<0x40008144, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_COMPARE1Pack  = Register<0x40008144, 32, ReadWriteMode, TIMER0EVENTS_COMPARE1Base, T...> ;

  struct TIMER0EVENTS_COMPARE2Base {} ;

  struct EVENTS_COMPARE2 : public RegisterBase<0x40008148, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_COMPARE2Pack  = Register<0x40008148, 32, ReadWriteMode, TIMER0EVENTS_COMPARE2Base, T...> ;

  struct TIMER0EVENTS_COMPARE3Base {} ;

  struct EVENTS_COMPARE3 : public RegisterBase<0x4000814C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_COMPARE3Pack  = Register<0x4000814C, 32, ReadWriteMode, TIMER0EVENTS_COMPARE3Base, T...> ;

  struct TIMER0CC0Base {} ;

  struct CC0 : public RegisterBase<0x40008540, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CC0Pack  = Register<0x40008540, 32, ReadWriteMode, TIMER0CC0Base, T...> ;

  struct TIMER0CC1Base {} ;

  struct CC1 : public RegisterBase<0x40008544, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CC1Pack  = Register<0x40008544, 32, ReadWriteMode, TIMER0CC1Base, T...> ;

  struct TIMER0CC2Base {} ;

  struct CC2 : public RegisterBase<0x40008548, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CC2Pack  = Register<0x40008548, 32, ReadWriteMode, TIMER0CC2Base, T...> ;

  struct TIMER0CC3Base {} ;

  struct CC3 : public RegisterBase<0x4000854C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CC3Pack  = Register<0x4000854C, 32, ReadWriteMode, TIMER0CC3Base, T...> ;

} ;

#endif //#if !defined(TIMER0REGISTERS_HPP)
