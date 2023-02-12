/*******************************************************************************
* Filename      : timer2registers.hpp
*
* Details       : Timer 2. This header file is auto-generated for nrf51 device.
*
*             Edited to add CC registers
*
*******************************************************************************/

#if !defined(TIMER2REGISTERS_HPP)
#define TIMER2REGISTERS_HPP

#include "timer2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER2
{
  struct TIMER2TASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x4000A000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x4000A000, 32, WriteMode, TIMER2TASKS_STARTBase, T...> ;

  struct TIMER2TASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x4000A004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x4000A004, 32, WriteMode, TIMER2TASKS_STOPBase, T...> ;

  struct TIMER2TASKS_COUNTBase {} ;

  struct TASKS_COUNT : public RegisterBase<0x4000A008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_COUNTPack  = Register<0x4000A008, 32, WriteMode, TIMER2TASKS_COUNTBase, T...> ;

  struct TIMER2TASKS_CLEARBase {} ;

  struct TASKS_CLEAR : public RegisterBase<0x4000A00C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CLEARPack  = Register<0x4000A00C, 32, WriteMode, TIMER2TASKS_CLEARBase, T...> ;

  struct TIMER2TASKS_SHUTDOWNBase {} ;

  struct TASKS_SHUTDOWN : public RegisterBase<0x4000A010, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_SHUTDOWNPack  = Register<0x4000A010, 32, WriteMode, TIMER2TASKS_SHUTDOWNBase, T...> ;

  struct TIMER2SHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x4000A200, 32, ReadWriteMode>
  {
    using COMPARE0_CLEAR = TIMER2_SHORTS_COMPARE0_CLEAR_Values<TIMER2::SHORTS, 0, 1, ReadWriteMode, TIMER2SHORTSBase> ;
    using COMPARE1_CLEAR = TIMER2_SHORTS_COMPARE1_CLEAR_Values<TIMER2::SHORTS, 1, 1, ReadWriteMode, TIMER2SHORTSBase> ;
    using COMPARE2_CLEAR = TIMER2_SHORTS_COMPARE2_CLEAR_Values<TIMER2::SHORTS, 2, 1, ReadWriteMode, TIMER2SHORTSBase> ;
    using COMPARE3_CLEAR = TIMER2_SHORTS_COMPARE3_CLEAR_Values<TIMER2::SHORTS, 3, 1, ReadWriteMode, TIMER2SHORTSBase> ;
    using COMPARE0_STOP = TIMER2_SHORTS_COMPARE0_STOP_Values<TIMER2::SHORTS, 8, 1, ReadWriteMode, TIMER2SHORTSBase> ;
    using COMPARE1_STOP = TIMER2_SHORTS_COMPARE1_STOP_Values<TIMER2::SHORTS, 9, 1, ReadWriteMode, TIMER2SHORTSBase> ;
    using COMPARE2_STOP = TIMER2_SHORTS_COMPARE2_STOP_Values<TIMER2::SHORTS, 10, 1, ReadWriteMode, TIMER2SHORTSBase> ;
    using COMPARE3_STOP = TIMER2_SHORTS_COMPARE3_STOP_Values<TIMER2::SHORTS, 11, 1, ReadWriteMode, TIMER2SHORTSBase> ;
    using FieldValues = TIMER2_SHORTS_COMPARE3_STOP_Values<TIMER2::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x4000A200, 32, ReadWriteMode, TIMER2SHORTSBase, T...> ;

  struct TIMER2INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x4000A304, 32, ReadWriteMode>
  {
    using COMPARE0 = TIMER2_INTENSET_COMPARE0_Values<TIMER2::INTENSET, 16, 1, ReadWriteMode, TIMER2INTENSETBase> ;
    using COMPARE1 = TIMER2_INTENSET_COMPARE1_Values<TIMER2::INTENSET, 17, 1, ReadWriteMode, TIMER2INTENSETBase> ;
    using COMPARE2 = TIMER2_INTENSET_COMPARE2_Values<TIMER2::INTENSET, 18, 1, ReadWriteMode, TIMER2INTENSETBase> ;
    using COMPARE3 = TIMER2_INTENSET_COMPARE3_Values<TIMER2::INTENSET, 19, 1, ReadWriteMode, TIMER2INTENSETBase> ;
    using FieldValues = TIMER2_INTENSET_COMPARE3_Values<TIMER2::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x4000A304, 32, ReadWriteMode, TIMER2INTENSETBase, T...> ;

  struct TIMER2INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x4000A308, 32, ReadWriteMode>
  {
    using COMPARE0 = TIMER2_INTENCLR_COMPARE0_Values<TIMER2::INTENCLR, 16, 1, ReadWriteMode, TIMER2INTENCLRBase> ;
    using COMPARE1 = TIMER2_INTENCLR_COMPARE1_Values<TIMER2::INTENCLR, 17, 1, ReadWriteMode, TIMER2INTENCLRBase> ;
    using COMPARE2 = TIMER2_INTENCLR_COMPARE2_Values<TIMER2::INTENCLR, 18, 1, ReadWriteMode, TIMER2INTENCLRBase> ;
    using COMPARE3 = TIMER2_INTENCLR_COMPARE3_Values<TIMER2::INTENCLR, 19, 1, ReadWriteMode, TIMER2INTENCLRBase> ;
    using FieldValues = TIMER2_INTENCLR_COMPARE3_Values<TIMER2::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x4000A308, 32, ReadWriteMode, TIMER2INTENCLRBase, T...> ;

  struct TIMER2MODEBase {} ;

  struct MODE : public RegisterBase<0x4000A504, 32, ReadWriteMode>
  {
    using MODEField = TIMER2_MODE_MODE_Values<TIMER2::MODE, 0, 1, ReadWriteMode, TIMER2MODEBase> ;
    using FieldValues = TIMER2_MODE_MODE_Values<TIMER2::MODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODEPack  = Register<0x4000A504, 32, ReadWriteMode, TIMER2MODEBase, T...> ;

  struct TIMER2BITMODEBase {} ;

  struct BITMODE : public RegisterBase<0x4000A508, 32, ReadWriteMode>
  {
    using BITMODEField = TIMER2_BITMODE_BITMODE_Values<TIMER2::BITMODE, 0, 2, ReadWriteMode, TIMER2BITMODEBase> ;
    using FieldValues = TIMER2_BITMODE_BITMODE_Values<TIMER2::BITMODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BITMODEPack  = Register<0x4000A508, 32, ReadWriteMode, TIMER2BITMODEBase, T...> ;

  struct TIMER2PRESCALERBase {} ;

  struct PRESCALER : public RegisterBase<0x4000A510, 32, ReadWriteMode>
  {
    using PRESCALERField = TIMER2_PRESCALER_PRESCALER_Values<TIMER2::PRESCALER, 0, 4, ReadWriteMode, TIMER2PRESCALERBase> ;
    using FieldValues = TIMER2_PRESCALER_PRESCALER_Values<TIMER2::PRESCALER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRESCALERPack  = Register<0x4000A510, 32, ReadWriteMode, TIMER2PRESCALERBase, T...> ;

  // Added
  struct CC0 : public RegisterBase<0x4000A540, 32, ReadWriteMode>
  {
  };

  struct CC1 : public RegisterBase<0x4000A544, 32, ReadWriteMode>
  {
  };

  struct CC2 : public RegisterBase<0x4000A548, 32, ReadWriteMode>
  {
  };

  struct CC3 : public RegisterBase<0x4000A54C, 32, ReadWriteMode>
  {
  };

  struct TIMER2POWERBase {} ;

  struct POWER : public RegisterBase<0x4000AFFC, 32, ReadWriteMode>
  {
    using POWERField = TIMER2_POWER_POWER_Values<TIMER2::POWER, 0, 1, ReadWriteMode, TIMER2POWERBase> ;
    using FieldValues = TIMER2_POWER_POWER_Values<TIMER2::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x4000AFFC, 32, ReadWriteMode, TIMER2POWERBase, T...> ;

} ;

#endif //#if !defined(TIMER2REGISTERS_HPP)
