/*******************************************************************************
* Filename      : timer1registers.hpp
*
* Details       : Timer 1. This header file is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(TIMER1REGISTERS_HPP)
#define TIMER1REGISTERS_HPP

#include "timer1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER1
{
  struct TIMER1TASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x40009000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x40009000, 32, WriteMode, TIMER1TASKS_STARTBase, T...> ;

  struct TIMER1TASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x40009004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x40009004, 32, WriteMode, TIMER1TASKS_STOPBase, T...> ;

  struct TIMER1TASKS_COUNTBase {} ;

  struct TASKS_COUNT : public RegisterBase<0x40009008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_COUNTPack  = Register<0x40009008, 32, WriteMode, TIMER1TASKS_COUNTBase, T...> ;

  struct TIMER1TASKS_CLEARBase {} ;

  struct TASKS_CLEAR : public RegisterBase<0x4000900C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CLEARPack  = Register<0x4000900C, 32, WriteMode, TIMER1TASKS_CLEARBase, T...> ;

  struct TIMER1TASKS_SHUTDOWNBase {} ;

  struct TASKS_SHUTDOWN : public RegisterBase<0x40009010, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_SHUTDOWNPack  = Register<0x40009010, 32, WriteMode, TIMER1TASKS_SHUTDOWNBase, T...> ;

  struct TIMER1SHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x40009200, 32, ReadWriteMode>
  {
    using COMPARE0_CLEAR = TIMER1_SHORTS_COMPARE0_CLEAR_Values<TIMER1::SHORTS, 0, 1, ReadWriteMode, TIMER1SHORTSBase> ;
    using COMPARE1_CLEAR = TIMER1_SHORTS_COMPARE1_CLEAR_Values<TIMER1::SHORTS, 1, 1, ReadWriteMode, TIMER1SHORTSBase> ;
    using COMPARE2_CLEAR = TIMER1_SHORTS_COMPARE2_CLEAR_Values<TIMER1::SHORTS, 2, 1, ReadWriteMode, TIMER1SHORTSBase> ;
    using COMPARE3_CLEAR = TIMER1_SHORTS_COMPARE3_CLEAR_Values<TIMER1::SHORTS, 3, 1, ReadWriteMode, TIMER1SHORTSBase> ;
    using COMPARE0_STOP = TIMER1_SHORTS_COMPARE0_STOP_Values<TIMER1::SHORTS, 8, 1, ReadWriteMode, TIMER1SHORTSBase> ;
    using COMPARE1_STOP = TIMER1_SHORTS_COMPARE1_STOP_Values<TIMER1::SHORTS, 9, 1, ReadWriteMode, TIMER1SHORTSBase> ;
    using COMPARE2_STOP = TIMER1_SHORTS_COMPARE2_STOP_Values<TIMER1::SHORTS, 10, 1, ReadWriteMode, TIMER1SHORTSBase> ;
    using COMPARE3_STOP = TIMER1_SHORTS_COMPARE3_STOP_Values<TIMER1::SHORTS, 11, 1, ReadWriteMode, TIMER1SHORTSBase> ;
    using FieldValues = TIMER1_SHORTS_COMPARE3_STOP_Values<TIMER1::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x40009200, 32, ReadWriteMode, TIMER1SHORTSBase, T...> ;

  struct TIMER1INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40009304, 32, ReadWriteMode>
  {
    using COMPARE0 = TIMER1_INTENSET_COMPARE0_Values<TIMER1::INTENSET, 16, 1, ReadWriteMode, TIMER1INTENSETBase> ;
    using COMPARE1 = TIMER1_INTENSET_COMPARE1_Values<TIMER1::INTENSET, 17, 1, ReadWriteMode, TIMER1INTENSETBase> ;
    using COMPARE2 = TIMER1_INTENSET_COMPARE2_Values<TIMER1::INTENSET, 18, 1, ReadWriteMode, TIMER1INTENSETBase> ;
    using COMPARE3 = TIMER1_INTENSET_COMPARE3_Values<TIMER1::INTENSET, 19, 1, ReadWriteMode, TIMER1INTENSETBase> ;
    using FieldValues = TIMER1_INTENSET_COMPARE3_Values<TIMER1::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40009304, 32, ReadWriteMode, TIMER1INTENSETBase, T...> ;

  struct TIMER1INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40009308, 32, ReadWriteMode>
  {
    using COMPARE0 = TIMER1_INTENCLR_COMPARE0_Values<TIMER1::INTENCLR, 16, 1, ReadWriteMode, TIMER1INTENCLRBase> ;
    using COMPARE1 = TIMER1_INTENCLR_COMPARE1_Values<TIMER1::INTENCLR, 17, 1, ReadWriteMode, TIMER1INTENCLRBase> ;
    using COMPARE2 = TIMER1_INTENCLR_COMPARE2_Values<TIMER1::INTENCLR, 18, 1, ReadWriteMode, TIMER1INTENCLRBase> ;
    using COMPARE3 = TIMER1_INTENCLR_COMPARE3_Values<TIMER1::INTENCLR, 19, 1, ReadWriteMode, TIMER1INTENCLRBase> ;
    using FieldValues = TIMER1_INTENCLR_COMPARE3_Values<TIMER1::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40009308, 32, ReadWriteMode, TIMER1INTENCLRBase, T...> ;

  struct TIMER1MODEBase {} ;

  struct MODE : public RegisterBase<0x40009504, 32, ReadWriteMode>
  {
    using MODEField = TIMER1_MODE_MODE_Values<TIMER1::MODE, 0, 1, ReadWriteMode, TIMER1MODEBase> ;
    using FieldValues = TIMER1_MODE_MODE_Values<TIMER1::MODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODEPack  = Register<0x40009504, 32, ReadWriteMode, TIMER1MODEBase, T...> ;

  struct TIMER1BITMODEBase {} ;

  struct BITMODE : public RegisterBase<0x40009508, 32, ReadWriteMode>
  {
    using BITMODEField = TIMER1_BITMODE_BITMODE_Values<TIMER1::BITMODE, 0, 2, ReadWriteMode, TIMER1BITMODEBase> ;
    using FieldValues = TIMER1_BITMODE_BITMODE_Values<TIMER1::BITMODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BITMODEPack  = Register<0x40009508, 32, ReadWriteMode, TIMER1BITMODEBase, T...> ;

  struct TIMER1PRESCALERBase {} ;

  struct PRESCALER : public RegisterBase<0x40009510, 32, ReadWriteMode>
  {
    using PRESCALERField = TIMER1_PRESCALER_PRESCALER_Values<TIMER1::PRESCALER, 0, 4, ReadWriteMode, TIMER1PRESCALERBase> ;
    using FieldValues = TIMER1_PRESCALER_PRESCALER_Values<TIMER1::PRESCALER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRESCALERPack  = Register<0x40009510, 32, ReadWriteMode, TIMER1PRESCALERBase, T...> ;

  struct TIMER1POWERBase {} ;

  struct POWER : public RegisterBase<0x40009FFC, 32, ReadWriteMode>
  {
    using POWERField = TIMER1_POWER_POWER_Values<TIMER1::POWER, 0, 1, ReadWriteMode, TIMER1POWERBase> ;
    using FieldValues = TIMER1_POWER_POWER_Values<TIMER1::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40009FFC, 32, ReadWriteMode, TIMER1POWERBase, T...> ;

} ;

#endif //#if !defined(TIMER1REGISTERS_HPP)
