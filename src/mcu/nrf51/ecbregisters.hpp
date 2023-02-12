/*******************************************************************************
* Filename      : ecbregisters.hpp
*
* Details       : AES ECB Mode Encryption. This header file is auto-generated
*                 for nrf51 device.
*
*
*******************************************************************************/

#if !defined(ECBREGISTERS_HPP)
#define ECBREGISTERS_HPP

#include "ecbfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ECB
{
  struct ECBTASKS_STARTECBBase {} ;

  struct TASKS_STARTECB : public RegisterBase<0x4000E000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTECBPack  = Register<0x4000E000, 32, WriteMode, ECBTASKS_STARTECBBase, T...> ;

  struct ECBTASKS_STOPECBBase {} ;

  struct TASKS_STOPECB : public RegisterBase<0x4000E004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPECBPack  = Register<0x4000E004, 32, WriteMode, ECBTASKS_STOPECBBase, T...> ;

  struct ECBEVENTS_ENDECBBase {} ;

  struct EVENTS_ENDECB : public RegisterBase<0x4000E100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ENDECBPack  = Register<0x4000E100, 32, ReadWriteMode, ECBEVENTS_ENDECBBase, T...> ;

  struct ECBEVENTS_ERRORECBBase {} ;

  struct EVENTS_ERRORECB : public RegisterBase<0x4000E104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ERRORECBPack  = Register<0x4000E104, 32, ReadWriteMode, ECBEVENTS_ERRORECBBase, T...> ;

  struct ECBINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x4000E304, 32, ReadWriteMode>
  {
    using ENDECB = ECB_INTENSET_ENDECB_Values<ECB::INTENSET, 0, 1, ReadWriteMode, ECBINTENSETBase> ;
    using ERRORECB = ECB_INTENSET_ERRORECB_Values<ECB::INTENSET, 1, 1, ReadWriteMode, ECBINTENSETBase> ;
    using FieldValues = ECB_INTENSET_ERRORECB_Values<ECB::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x4000E304, 32, ReadWriteMode, ECBINTENSETBase, T...> ;

  struct ECBINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x4000E308, 32, ReadWriteMode>
  {
    using ENDECB = ECB_INTENCLR_ENDECB_Values<ECB::INTENCLR, 0, 1, ReadWriteMode, ECBINTENCLRBase> ;
    using ERRORECB = ECB_INTENCLR_ERRORECB_Values<ECB::INTENCLR, 1, 1, ReadWriteMode, ECBINTENCLRBase> ;
    using FieldValues = ECB_INTENCLR_ERRORECB_Values<ECB::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x4000E308, 32, ReadWriteMode, ECBINTENCLRBase, T...> ;

  struct ECBECBDATAPTRBase {} ;

  struct ECBDATAPTR : public RegisterBase<0x4000E504, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ECBDATAPTRPack  = Register<0x4000E504, 32, ReadWriteMode, ECBECBDATAPTRBase, T...> ;

  struct ECBPOWERBase {} ;

  struct POWER : public RegisterBase<0x4000EFFC, 32, ReadWriteMode>
  {
    using POWERField = ECB_POWER_POWER_Values<ECB::POWER, 0, 1, ReadWriteMode, ECBPOWERBase> ;
    using FieldValues = ECB_POWER_POWER_Values<ECB::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x4000EFFC, 32, ReadWriteMode, ECBPOWERBase, T...> ;

} ;

#endif //#if !defined(ECBREGISTERS_HPP)
