/*******************************************************************************
* Filename      : aarregisters.hpp
*
* Details       : Accelerated Address Resolver. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(AARREGISTERS_HPP)
#define AARREGISTERS_HPP

#include "aarfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AAR
{
  struct AARTASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x4000F000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x4000F000, 32, WriteMode, AARTASKS_STARTBase, T...> ;

  struct AARTASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x4000F008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x4000F008, 32, WriteMode, AARTASKS_STOPBase, T...> ;

  struct AAREVENTS_ENDBase {} ;

  struct EVENTS_END : public RegisterBase<0x4000F100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ENDPack  = Register<0x4000F100, 32, ReadWriteMode, AAREVENTS_ENDBase, T...> ;

  struct AAREVENTS_RESOLVEDBase {} ;

  struct EVENTS_RESOLVED : public RegisterBase<0x4000F104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_RESOLVEDPack  = Register<0x4000F104, 32, ReadWriteMode, AAREVENTS_RESOLVEDBase, T...> ;

  struct AAREVENTS_NOTRESOLVEDBase {} ;

  struct EVENTS_NOTRESOLVED : public RegisterBase<0x4000F108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_NOTRESOLVEDPack  = Register<0x4000F108, 32, ReadWriteMode, AAREVENTS_NOTRESOLVEDBase, T...> ;

  struct AARINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x4000F304, 32, ReadWriteMode>
  {
    using END = AAR_INTENSET_END_Values<AAR::INTENSET, 0, 1, ReadWriteMode, AARINTENSETBase> ;
    using RESOLVED = AAR_INTENSET_RESOLVED_Values<AAR::INTENSET, 1, 1, ReadWriteMode, AARINTENSETBase> ;
    using NOTRESOLVED = AAR_INTENSET_NOTRESOLVED_Values<AAR::INTENSET, 2, 1, ReadWriteMode, AARINTENSETBase> ;
    using FieldValues = AAR_INTENSET_NOTRESOLVED_Values<AAR::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x4000F304, 32, ReadWriteMode, AARINTENSETBase, T...> ;

  struct AARINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x4000F308, 32, ReadWriteMode>
  {
    using END = AAR_INTENCLR_END_Values<AAR::INTENCLR, 0, 1, ReadWriteMode, AARINTENCLRBase> ;
    using RESOLVED = AAR_INTENCLR_RESOLVED_Values<AAR::INTENCLR, 1, 1, ReadWriteMode, AARINTENCLRBase> ;
    using NOTRESOLVED = AAR_INTENCLR_NOTRESOLVED_Values<AAR::INTENCLR, 2, 1, ReadWriteMode, AARINTENCLRBase> ;
    using FieldValues = AAR_INTENCLR_NOTRESOLVED_Values<AAR::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x4000F308, 32, ReadWriteMode, AARINTENCLRBase, T...> ;

  struct AARSTATUSBase {} ;

  struct STATUS : public RegisterBase<0x4000F400, 32, ReadMode>
  {
    using STATUSField = AAR_STATUS_STATUS_Values<AAR::STATUS, 0, 4, ReadMode, AARSTATUSBase> ;
    using FieldValues = AAR_STATUS_STATUS_Values<AAR::STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATUSPack  = Register<0x4000F400, 32, ReadMode, AARSTATUSBase, T...> ;

  struct AARENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x4000F500, 32, ReadWriteMode>
  {
    using ENABLEField = AAR_ENABLE_ENABLE_Values<AAR::ENABLE, 0, 2, ReadWriteMode, AARENABLEBase> ;
    using FieldValues = AAR_ENABLE_ENABLE_Values<AAR::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x4000F500, 32, ReadWriteMode, AARENABLEBase, T...> ;

  struct AARNIRKBase {} ;

  struct NIRK : public RegisterBase<0x4000F504, 32, ReadWriteMode>
  {
    using NIRKField = AAR_NIRK_NIRK_Values<AAR::NIRK, 0, 5, ReadWriteMode, AARNIRKBase> ;
    using FieldValues = AAR_NIRK_NIRK_Values<AAR::NIRK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using NIRKPack  = Register<0x4000F504, 32, ReadWriteMode, AARNIRKBase, T...> ;

  struct AARIRKPTRBase {} ;

  struct IRKPTR : public RegisterBase<0x4000F508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using IRKPTRPack  = Register<0x4000F508, 32, ReadWriteMode, AARIRKPTRBase, T...> ;

  struct AARADDRPTRBase {} ;

  struct ADDRPTR : public RegisterBase<0x4000F510, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ADDRPTRPack  = Register<0x4000F510, 32, ReadWriteMode, AARADDRPTRBase, T...> ;

  struct AARSCRATCHPTRBase {} ;

  struct SCRATCHPTR : public RegisterBase<0x4000F514, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using SCRATCHPTRPack  = Register<0x4000F514, 32, ReadWriteMode, AARSCRATCHPTRBase, T...> ;

  struct AARPOWERBase {} ;

  struct POWER : public RegisterBase<0x4000FFFC, 32, ReadWriteMode>
  {
    using POWERField = AAR_POWER_POWER_Values<AAR::POWER, 0, 1, ReadWriteMode, AARPOWERBase> ;
    using FieldValues = AAR_POWER_POWER_Values<AAR::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x4000FFFC, 32, ReadWriteMode, AARPOWERBase, T...> ;

} ;

#endif //#if !defined(AARREGISTERS_HPP)
