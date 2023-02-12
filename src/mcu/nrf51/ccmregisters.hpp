/*******************************************************************************
* Filename      : ccmregisters.hpp
*
* Details       : AES CCM Mode Encryption. This header file is auto-generated
*                 for nrf51 device.
*
*
*******************************************************************************/

#if !defined(CCMREGISTERS_HPP)
#define CCMREGISTERS_HPP

#include "ccmfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CCM
{
  struct CCMTASKS_KSGENBase {} ;

  struct TASKS_KSGEN : public RegisterBase<0x4000F000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_KSGENPack  = Register<0x4000F000, 32, WriteMode, CCMTASKS_KSGENBase, T...> ;

  struct CCMTASKS_CRYPTBase {} ;

  struct TASKS_CRYPT : public RegisterBase<0x4000F004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CRYPTPack  = Register<0x4000F004, 32, WriteMode, CCMTASKS_CRYPTBase, T...> ;

  struct CCMTASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x4000F008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x4000F008, 32, WriteMode, CCMTASKS_STOPBase, T...> ;

  struct CCMEVENTS_ENDKSGENBase {} ;

  struct EVENTS_ENDKSGEN : public RegisterBase<0x4000F100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ENDKSGENPack  = Register<0x4000F100, 32, ReadWriteMode, CCMEVENTS_ENDKSGENBase, T...> ;

  struct CCMEVENTS_ENDCRYPTBase {} ;

  struct EVENTS_ENDCRYPT : public RegisterBase<0x4000F104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ENDCRYPTPack  = Register<0x4000F104, 32, ReadWriteMode, CCMEVENTS_ENDCRYPTBase, T...> ;

  struct CCMEVENTS_ERRORBase {} ;

  struct EVENTS_ERROR : public RegisterBase<0x4000F108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ERRORPack  = Register<0x4000F108, 32, ReadWriteMode, CCMEVENTS_ERRORBase, T...> ;

  struct CCMSHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x4000F200, 32, ReadWriteMode>
  {
    using ENDKSGEN_CRYPT = CCM_SHORTS_ENDKSGEN_CRYPT_Values<CCM::SHORTS, 0, 1, ReadWriteMode, CCMSHORTSBase> ;
    using FieldValues = CCM_SHORTS_ENDKSGEN_CRYPT_Values<CCM::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x4000F200, 32, ReadWriteMode, CCMSHORTSBase, T...> ;

  struct CCMINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x4000F304, 32, ReadWriteMode>
  {
    using ENDKSGEN = CCM_INTENSET_ENDKSGEN_Values<CCM::INTENSET, 0, 1, ReadWriteMode, CCMINTENSETBase> ;
    using ENDCRYPT = CCM_INTENSET_ENDCRYPT_Values<CCM::INTENSET, 1, 1, ReadWriteMode, CCMINTENSETBase> ;
    using ERROR = CCM_INTENSET_ERROR_Values<CCM::INTENSET, 2, 1, ReadWriteMode, CCMINTENSETBase> ;
    using FieldValues = CCM_INTENSET_ERROR_Values<CCM::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x4000F304, 32, ReadWriteMode, CCMINTENSETBase, T...> ;

  struct CCMINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x4000F308, 32, ReadWriteMode>
  {
    using ENDKSGEN = CCM_INTENCLR_ENDKSGEN_Values<CCM::INTENCLR, 0, 1, ReadWriteMode, CCMINTENCLRBase> ;
    using ENDCRYPT = CCM_INTENCLR_ENDCRYPT_Values<CCM::INTENCLR, 1, 1, ReadWriteMode, CCMINTENCLRBase> ;
    using ERROR = CCM_INTENCLR_ERROR_Values<CCM::INTENCLR, 2, 1, ReadWriteMode, CCMINTENCLRBase> ;
    using FieldValues = CCM_INTENCLR_ERROR_Values<CCM::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x4000F308, 32, ReadWriteMode, CCMINTENCLRBase, T...> ;

  struct CCMMICSTATUSBase {} ;

  struct MICSTATUS : public RegisterBase<0x4000F400, 32, ReadMode>
  {
    using MICSTATUSField = CCM_MICSTATUS_MICSTATUS_Values<CCM::MICSTATUS, 0, 1, ReadMode, CCMMICSTATUSBase> ;
    using FieldValues = CCM_MICSTATUS_MICSTATUS_Values<CCM::MICSTATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MICSTATUSPack  = Register<0x4000F400, 32, ReadMode, CCMMICSTATUSBase, T...> ;

  struct CCMENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x4000F500, 32, ReadWriteMode>
  {
    using ENABLEField = CCM_ENABLE_ENABLE_Values<CCM::ENABLE, 0, 2, ReadWriteMode, CCMENABLEBase> ;
    using FieldValues = CCM_ENABLE_ENABLE_Values<CCM::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x4000F500, 32, ReadWriteMode, CCMENABLEBase, T...> ;

  struct CCMMODEBase {} ;

  struct MODE : public RegisterBase<0x4000F504, 32, ReadWriteMode>
  {
    using MODEField = CCM_MODE_MODE_Values<CCM::MODE, 0, 1, ReadWriteMode, CCMMODEBase> ;
    using FieldValues = CCM_MODE_MODE_Values<CCM::MODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODEPack  = Register<0x4000F504, 32, ReadWriteMode, CCMMODEBase, T...> ;

  struct CCMCNFPTRBase {} ;

  struct CNFPTR : public RegisterBase<0x4000F508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CNFPTRPack  = Register<0x4000F508, 32, ReadWriteMode, CCMCNFPTRBase, T...> ;

  struct CCMINPTRBase {} ;

  struct INPTR : public RegisterBase<0x4000F50C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using INPTRPack  = Register<0x4000F50C, 32, ReadWriteMode, CCMINPTRBase, T...> ;

  struct CCMOUTPTRBase {} ;

  struct OUTPTR : public RegisterBase<0x4000F510, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using OUTPTRPack  = Register<0x4000F510, 32, ReadWriteMode, CCMOUTPTRBase, T...> ;

  struct CCMSCRATCHPTRBase {} ;

  struct SCRATCHPTR : public RegisterBase<0x4000F514, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using SCRATCHPTRPack  = Register<0x4000F514, 32, ReadWriteMode, CCMSCRATCHPTRBase, T...> ;

  struct CCMPOWERBase {} ;

  struct POWER : public RegisterBase<0x4000FFFC, 32, ReadWriteMode>
  {
    using POWERField = CCM_POWER_POWER_Values<CCM::POWER, 0, 1, ReadWriteMode, CCMPOWERBase> ;
    using FieldValues = CCM_POWER_POWER_Values<CCM::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x4000FFFC, 32, ReadWriteMode, CCMPOWERBase, T...> ;

} ;

#endif //#if !defined(CCMREGISTERS_HPP)
