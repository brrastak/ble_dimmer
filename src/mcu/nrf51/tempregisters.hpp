/*******************************************************************************
* Filename      : tempregisters.hpp
*
* Details       : Temperature Sensor. This header file is auto-generated for
*                 nrf51 device.
*
*
*******************************************************************************/

#if !defined(TEMPREGISTERS_HPP)
#define TEMPREGISTERS_HPP

#include "tempfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TEMP
{
  struct TEMPTASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x4000C000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x4000C000, 32, WriteMode, TEMPTASKS_STARTBase, T...> ;

  struct TEMPTASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x4000C004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x4000C004, 32, WriteMode, TEMPTASKS_STOPBase, T...> ;

  struct TEMPEVENTS_DATARDYBase {} ;

  struct EVENTS_DATARDY : public RegisterBase<0x4000C100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_DATARDYPack  = Register<0x4000C100, 32, ReadWriteMode, TEMPEVENTS_DATARDYBase, T...> ;

  struct TEMPINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x4000C304, 32, ReadWriteMode>
  {
    using DATARDY = TEMP_INTENSET_DATARDY_Values<TEMP::INTENSET, 0, 1, ReadWriteMode, TEMPINTENSETBase> ;
    using FieldValues = TEMP_INTENSET_DATARDY_Values<TEMP::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x4000C304, 32, ReadWriteMode, TEMPINTENSETBase, T...> ;

  struct TEMPINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x4000C308, 32, ReadWriteMode>
  {
    using DATARDY = TEMP_INTENCLR_DATARDY_Values<TEMP::INTENCLR, 0, 1, ReadWriteMode, TEMPINTENCLRBase> ;
    using FieldValues = TEMP_INTENCLR_DATARDY_Values<TEMP::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x4000C308, 32, ReadWriteMode, TEMPINTENCLRBase, T...> ;

  struct TEMPTEMPBase {} ;

  struct TEMP : public RegisterBase<0x4000C508, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using TEMPPack  = Register<0x4000C508, 32, ReadMode, TEMPTEMPBase, T...> ;

  struct TEMPPOWERBase {} ;

  struct POWER : public RegisterBase<0x4000CFFC, 32, ReadWriteMode>
  {
    using POWERField = TEMP_POWER_POWER_Values<TEMP::POWER, 0, 1, ReadWriteMode, TEMPPOWERBase> ;
    using FieldValues = TEMP_POWER_POWER_Values<TEMP::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x4000CFFC, 32, ReadWriteMode, TEMPPOWERBase, T...> ;

} ;

#endif //#if !defined(TEMPREGISTERS_HPP)
