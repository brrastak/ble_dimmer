/*******************************************************************************
* Filename      : powerregisters.hpp
*
* Details       : Power Control. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(POWERREGISTERS_HPP)
#define POWERREGISTERS_HPP

#include "powerfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct POWER
{
  struct POWERTASKS_CONSTLATBase {} ;

  struct TASKS_CONSTLAT : public RegisterBase<0x40000078, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CONSTLATPack  = Register<0x40000078, 32, WriteMode, POWERTASKS_CONSTLATBase, T...> ;

  struct POWERTASKS_LOWPWRBase {} ;

  struct TASKS_LOWPWR : public RegisterBase<0x4000007C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_LOWPWRPack  = Register<0x4000007C, 32, WriteMode, POWERTASKS_LOWPWRBase, T...> ;

  struct POWEREVENTS_POFWARNBase {} ;

  struct EVENTS_POFWARN : public RegisterBase<0x40000108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_POFWARNPack  = Register<0x40000108, 32, ReadWriteMode, POWEREVENTS_POFWARNBase, T...> ;

  struct POWERINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40000304, 32, ReadWriteMode>
  {
    using POFWARN = POWER_INTENSET_POFWARN_Values<POWER::INTENSET, 2, 1, ReadWriteMode, POWERINTENSETBase> ;
    using FieldValues = POWER_INTENSET_POFWARN_Values<POWER::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40000304, 32, ReadWriteMode, POWERINTENSETBase, T...> ;

  struct POWERINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40000308, 32, ReadWriteMode>
  {
    using POFWARN = POWER_INTENCLR_POFWARN_Values<POWER::INTENCLR, 2, 1, ReadWriteMode, POWERINTENCLRBase> ;
    using FieldValues = POWER_INTENCLR_POFWARN_Values<POWER::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40000308, 32, ReadWriteMode, POWERINTENCLRBase, T...> ;

  struct POWERRESETREASBase {} ;

  struct RESETREAS : public RegisterBase<0x40000400, 32, ReadWriteMode>
  {
    using RESETPIN = POWER_RESETREAS_RESETPIN_Values<POWER::RESETREAS, 0, 1, ReadWriteMode, POWERRESETREASBase> ;
    using DOG = POWER_RESETREAS_DOG_Values<POWER::RESETREAS, 1, 1, ReadWriteMode, POWERRESETREASBase> ;
    using SREQ = POWER_RESETREAS_SREQ_Values<POWER::RESETREAS, 2, 1, ReadWriteMode, POWERRESETREASBase> ;
    using LOCKUP = POWER_RESETREAS_LOCKUP_Values<POWER::RESETREAS, 3, 1, ReadWriteMode, POWERRESETREASBase> ;
    using OFF = POWER_RESETREAS_OFF_Values<POWER::RESETREAS, 16, 1, ReadWriteMode, POWERRESETREASBase> ;
    using LPCOMP = POWER_RESETREAS_LPCOMP_Values<POWER::RESETREAS, 17, 1, ReadWriteMode, POWERRESETREASBase> ;
    using DIF = POWER_RESETREAS_DIF_Values<POWER::RESETREAS, 18, 1, ReadWriteMode, POWERRESETREASBase> ;
    using FieldValues = POWER_RESETREAS_DIF_Values<POWER::RESETREAS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESETREASPack  = Register<0x40000400, 32, ReadWriteMode, POWERRESETREASBase, T...> ;

  struct POWERRAMSTATUSBase {} ;

  struct RAMSTATUS : public RegisterBase<0x40000428, 32, ReadMode>
  {
    using RAMBLOCK0 = POWER_RAMSTATUS_RAMBLOCK0_Values<POWER::RAMSTATUS, 0, 1, ReadMode, POWERRAMSTATUSBase> ;
    using RAMBLOCK1 = POWER_RAMSTATUS_RAMBLOCK1_Values<POWER::RAMSTATUS, 1, 1, ReadMode, POWERRAMSTATUSBase> ;
    using RAMBLOCK2 = POWER_RAMSTATUS_RAMBLOCK2_Values<POWER::RAMSTATUS, 2, 1, ReadMode, POWERRAMSTATUSBase> ;
    using RAMBLOCK3 = POWER_RAMSTATUS_RAMBLOCK3_Values<POWER::RAMSTATUS, 3, 1, ReadMode, POWERRAMSTATUSBase> ;
    using FieldValues = POWER_RAMSTATUS_RAMBLOCK3_Values<POWER::RAMSTATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAMSTATUSPack  = Register<0x40000428, 32, ReadMode, POWERRAMSTATUSBase, T...> ;

  struct POWERSYSTEMOFFBase {} ;

  struct SYSTEMOFF : public RegisterBase<0x40000500, 32, WriteMode>
  {
    using SYSTEMOFFField = POWER_SYSTEMOFF_SYSTEMOFF_Values<POWER::SYSTEMOFF, 0, 1, WriteMode, POWERSYSTEMOFFBase> ;
    using FieldValues = POWER_SYSTEMOFF_SYSTEMOFF_Values<POWER::SYSTEMOFF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SYSTEMOFFPack  = Register<0x40000500, 32, WriteMode, POWERSYSTEMOFFBase, T...> ;

  struct POWERPOFCONBase {} ;

  struct POFCON : public RegisterBase<0x40000510, 32, ReadWriteMode>
  {
    using POF = POWER_POFCON_POF_Values<POWER::POFCON, 0, 1, ReadWriteMode, POWERPOFCONBase> ;
    using THRESHOLD = POWER_POFCON_THRESHOLD_Values<POWER::POFCON, 1, 2, ReadWriteMode, POWERPOFCONBase> ;
    using FieldValues = POWER_POFCON_THRESHOLD_Values<POWER::POFCON, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POFCONPack  = Register<0x40000510, 32, ReadWriteMode, POWERPOFCONBase, T...> ;

  struct POWERGPREGRETBase {} ;

  struct GPREGRET : public RegisterBase<0x4000051C, 32, ReadWriteMode>
  {
    using GPREGRETField = POWER_GPREGRET_GPREGRET_Values<POWER::GPREGRET, 0, 8, ReadWriteMode, POWERGPREGRETBase> ;
    using FieldValues = POWER_GPREGRET_GPREGRET_Values<POWER::GPREGRET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPREGRETPack  = Register<0x4000051C, 32, ReadWriteMode, POWERGPREGRETBase, T...> ;

  struct POWERRAMONBase {} ;

  struct RAMON : public RegisterBase<0x40000524, 32, ReadWriteMode>
  {
    using ONRAM0 = POWER_RAMON_ONRAM0_Values<POWER::RAMON, 0, 1, ReadWriteMode, POWERRAMONBase> ;
    using ONRAM1 = POWER_RAMON_ONRAM1_Values<POWER::RAMON, 1, 1, ReadWriteMode, POWERRAMONBase> ;
    using OFFRAM0 = POWER_RAMON_OFFRAM0_Values<POWER::RAMON, 16, 1, ReadWriteMode, POWERRAMONBase> ;
    using OFFRAM1 = POWER_RAMON_OFFRAM1_Values<POWER::RAMON, 17, 1, ReadWriteMode, POWERRAMONBase> ;
    using FieldValues = POWER_RAMON_OFFRAM1_Values<POWER::RAMON, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAMONPack  = Register<0x40000524, 32, ReadWriteMode, POWERRAMONBase, T...> ;

  struct POWERRESETBase {} ;

  struct RESET : public RegisterBase<0x40000544, 32, ReadWriteMode>
  {
    using RESETField = POWER_RESET_RESET_Values<POWER::RESET, 0, 1, ReadWriteMode, POWERRESETBase> ;
    using FieldValues = POWER_RESET_RESET_Values<POWER::RESET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESETPack  = Register<0x40000544, 32, ReadWriteMode, POWERRESETBase, T...> ;

  struct POWERRAMONBBase {} ;

  struct RAMONB : public RegisterBase<0x40000554, 32, ReadWriteMode>
  {
    using ONRAM2 = POWER_RAMONB_ONRAM2_Values<POWER::RAMONB, 0, 1, ReadWriteMode, POWERRAMONBBase> ;
    using ONRAM3 = POWER_RAMONB_ONRAM3_Values<POWER::RAMONB, 1, 1, ReadWriteMode, POWERRAMONBBase> ;
    using OFFRAM2 = POWER_RAMONB_OFFRAM2_Values<POWER::RAMONB, 16, 1, ReadWriteMode, POWERRAMONBBase> ;
    using OFFRAM3 = POWER_RAMONB_OFFRAM3_Values<POWER::RAMONB, 17, 1, ReadWriteMode, POWERRAMONBBase> ;
    using FieldValues = POWER_RAMONB_OFFRAM3_Values<POWER::RAMONB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAMONBPack  = Register<0x40000554, 32, ReadWriteMode, POWERRAMONBBase, T...> ;

  struct POWERDCDCENBase {} ;

  struct DCDCEN : public RegisterBase<0x40000578, 32, ReadWriteMode>
  {
    using DCDCENField = POWER_DCDCEN_DCDCEN_Values<POWER::DCDCEN, 0, 1, ReadWriteMode, POWERDCDCENBase> ;
    using FieldValues = POWER_DCDCEN_DCDCEN_Values<POWER::DCDCEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCDCENPack  = Register<0x40000578, 32, ReadWriteMode, POWERDCDCENBase, T...> ;

  struct POWERDCDCFORCEBase {} ;

  struct DCDCFORCE : public RegisterBase<0x40000A08, 32, ReadWriteMode>
  {
    using FORCEOFF = POWER_DCDCFORCE_FORCEOFF_Values<POWER::DCDCFORCE, 0, 1, ReadWriteMode, POWERDCDCFORCEBase> ;
    using FORCEON = POWER_DCDCFORCE_FORCEON_Values<POWER::DCDCFORCE, 1, 1, ReadWriteMode, POWERDCDCFORCEBase> ;
    using FieldValues = POWER_DCDCFORCE_FORCEON_Values<POWER::DCDCFORCE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCDCFORCEPack  = Register<0x40000A08, 32, ReadWriteMode, POWERDCDCFORCEBase, T...> ;

} ;

#endif //#if !defined(POWERREGISTERS_HPP)
