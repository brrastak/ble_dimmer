/*******************************************************************************
* Filename      : qdecregisters.hpp
*
* Details       : Rotary decoder. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(QDECREGISTERS_HPP)
#define QDECREGISTERS_HPP

#include "qdecfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct QDEC
{
  struct QDECTASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x40012000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x40012000, 32, WriteMode, QDECTASKS_STARTBase, T...> ;

  struct QDECTASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x40012004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x40012004, 32, WriteMode, QDECTASKS_STOPBase, T...> ;

  struct QDECTASKS_READCLRACCBase {} ;

  struct TASKS_READCLRACC : public RegisterBase<0x40012008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_READCLRACCPack  = Register<0x40012008, 32, WriteMode, QDECTASKS_READCLRACCBase, T...> ;

  struct QDECEVENTS_SAMPLERDYBase {} ;

  struct EVENTS_SAMPLERDY : public RegisterBase<0x40012100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_SAMPLERDYPack  = Register<0x40012100, 32, ReadWriteMode, QDECEVENTS_SAMPLERDYBase, T...> ;

  struct QDECEVENTS_REPORTRDYBase {} ;

  struct EVENTS_REPORTRDY : public RegisterBase<0x40012104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_REPORTRDYPack  = Register<0x40012104, 32, ReadWriteMode, QDECEVENTS_REPORTRDYBase, T...> ;

  struct QDECEVENTS_ACCOFBase {} ;

  struct EVENTS_ACCOF : public RegisterBase<0x40012108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ACCOFPack  = Register<0x40012108, 32, ReadWriteMode, QDECEVENTS_ACCOFBase, T...> ;

  struct QDECSHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x40012200, 32, ReadWriteMode>
  {
    using REPORTRDY_READCLRACC = QDEC_SHORTS_REPORTRDY_READCLRACC_Values<QDEC::SHORTS, 0, 1, ReadWriteMode, QDECSHORTSBase> ;
    using SAMPLERDY_STOP = QDEC_SHORTS_SAMPLERDY_STOP_Values<QDEC::SHORTS, 1, 1, ReadWriteMode, QDECSHORTSBase> ;
    using FieldValues = QDEC_SHORTS_SAMPLERDY_STOP_Values<QDEC::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x40012200, 32, ReadWriteMode, QDECSHORTSBase, T...> ;

  struct QDECINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40012304, 32, ReadWriteMode>
  {
    using SAMPLERDY = QDEC_INTENSET_SAMPLERDY_Values<QDEC::INTENSET, 0, 1, ReadWriteMode, QDECINTENSETBase> ;
    using REPORTRDY = QDEC_INTENSET_REPORTRDY_Values<QDEC::INTENSET, 1, 1, ReadWriteMode, QDECINTENSETBase> ;
    using ACCOF = QDEC_INTENSET_ACCOF_Values<QDEC::INTENSET, 2, 1, ReadWriteMode, QDECINTENSETBase> ;
    using FieldValues = QDEC_INTENSET_ACCOF_Values<QDEC::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40012304, 32, ReadWriteMode, QDECINTENSETBase, T...> ;

  struct QDECINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40012308, 32, ReadWriteMode>
  {
    using SAMPLERDY = QDEC_INTENCLR_SAMPLERDY_Values<QDEC::INTENCLR, 0, 1, ReadWriteMode, QDECINTENCLRBase> ;
    using REPORTRDY = QDEC_INTENCLR_REPORTRDY_Values<QDEC::INTENCLR, 1, 1, ReadWriteMode, QDECINTENCLRBase> ;
    using ACCOF = QDEC_INTENCLR_ACCOF_Values<QDEC::INTENCLR, 2, 1, ReadWriteMode, QDECINTENCLRBase> ;
    using FieldValues = QDEC_INTENCLR_ACCOF_Values<QDEC::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40012308, 32, ReadWriteMode, QDECINTENCLRBase, T...> ;

  struct QDECENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x40012500, 32, ReadWriteMode>
  {
    using ENABLEField = QDEC_ENABLE_ENABLE_Values<QDEC::ENABLE, 0, 1, ReadWriteMode, QDECENABLEBase> ;
    using FieldValues = QDEC_ENABLE_ENABLE_Values<QDEC::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x40012500, 32, ReadWriteMode, QDECENABLEBase, T...> ;

  struct QDECLEDPOLBase {} ;

  struct LEDPOL : public RegisterBase<0x40012504, 32, ReadWriteMode>
  {
    using LEDPOLField = QDEC_LEDPOL_LEDPOL_Values<QDEC::LEDPOL, 0, 1, ReadWriteMode, QDECLEDPOLBase> ;
    using FieldValues = QDEC_LEDPOL_LEDPOL_Values<QDEC::LEDPOL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LEDPOLPack  = Register<0x40012504, 32, ReadWriteMode, QDECLEDPOLBase, T...> ;

  struct QDECSAMPLEPERBase {} ;

  struct SAMPLEPER : public RegisterBase<0x40012508, 32, ReadWriteMode>
  {
    using SAMPLEPERField = QDEC_SAMPLEPER_SAMPLEPER_Values<QDEC::SAMPLEPER, 0, 3, ReadWriteMode, QDECSAMPLEPERBase> ;
    using FieldValues = QDEC_SAMPLEPER_SAMPLEPER_Values<QDEC::SAMPLEPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAMPLEPERPack  = Register<0x40012508, 32, ReadWriteMode, QDECSAMPLEPERBase, T...> ;

  struct QDECSAMPLEBase {} ;

  struct SAMPLE : public RegisterBase<0x4001250C, 32, ReadMode>
  {
    using SAMPLEField = QDEC_SAMPLE_SAMPLE_Values<QDEC::SAMPLE, 0, 32, ReadMode, QDECSAMPLEBase> ;
    using FieldValues = QDEC_SAMPLE_SAMPLE_Values<QDEC::SAMPLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAMPLEPack  = Register<0x4001250C, 32, ReadMode, QDECSAMPLEBase, T...> ;

  struct QDECREPORTPERBase {} ;

  struct REPORTPER : public RegisterBase<0x40012510, 32, ReadWriteMode>
  {
    using REPORTPERField = QDEC_REPORTPER_REPORTPER_Values<QDEC::REPORTPER, 0, 3, ReadWriteMode, QDECREPORTPERBase> ;
    using FieldValues = QDEC_REPORTPER_REPORTPER_Values<QDEC::REPORTPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REPORTPERPack  = Register<0x40012510, 32, ReadWriteMode, QDECREPORTPERBase, T...> ;

  struct QDECACCBase {} ;

  struct ACC : public RegisterBase<0x40012514, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ACCPack  = Register<0x40012514, 32, ReadMode, QDECACCBase, T...> ;

  struct QDECACCREADBase {} ;

  struct ACCREAD : public RegisterBase<0x40012518, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ACCREADPack  = Register<0x40012518, 32, ReadMode, QDECACCREADBase, T...> ;

  struct QDECPSELLEDBase {} ;

  struct PSELLED : public RegisterBase<0x4001251C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELLEDPack  = Register<0x4001251C, 32, ReadWriteMode, QDECPSELLEDBase, T...> ;

  struct QDECPSELABase {} ;

  struct PSELA : public RegisterBase<0x40012520, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELAPack  = Register<0x40012520, 32, ReadWriteMode, QDECPSELABase, T...> ;

  struct QDECPSELBBase {} ;

  struct PSELB : public RegisterBase<0x40012524, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELBPack  = Register<0x40012524, 32, ReadWriteMode, QDECPSELBBase, T...> ;

  struct QDECDBFENBase {} ;

  struct DBFEN : public RegisterBase<0x40012528, 32, ReadWriteMode>
  {
    using DBFENField = QDEC_DBFEN_DBFEN_Values<QDEC::DBFEN, 0, 1, ReadWriteMode, QDECDBFENBase> ;
    using FieldValues = QDEC_DBFEN_DBFEN_Values<QDEC::DBFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DBFENPack  = Register<0x40012528, 32, ReadWriteMode, QDECDBFENBase, T...> ;

  struct QDECLEDPREBase {} ;

  struct LEDPRE : public RegisterBase<0x40012540, 32, ReadWriteMode>
  {
    using LEDPREField = QDEC_LEDPRE_LEDPRE_Values<QDEC::LEDPRE, 0, 9, ReadWriteMode, QDECLEDPREBase> ;
    using FieldValues = QDEC_LEDPRE_LEDPRE_Values<QDEC::LEDPRE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LEDPREPack  = Register<0x40012540, 32, ReadWriteMode, QDECLEDPREBase, T...> ;

  struct QDECACCDBLBase {} ;

  struct ACCDBL : public RegisterBase<0x40012544, 32, ReadMode>
  {
    using ACCDBLField = QDEC_ACCDBL_ACCDBL_Values<QDEC::ACCDBL, 0, 4, ReadMode, QDECACCDBLBase> ;
    using FieldValues = QDEC_ACCDBL_ACCDBL_Values<QDEC::ACCDBL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACCDBLPack  = Register<0x40012544, 32, ReadMode, QDECACCDBLBase, T...> ;

  struct QDECACCDBLREADBase {} ;

  struct ACCDBLREAD : public RegisterBase<0x40012548, 32, ReadMode>
  {
    using ACCDBLREADField = QDEC_ACCDBLREAD_ACCDBLREAD_Values<QDEC::ACCDBLREAD, 0, 4, ReadMode, QDECACCDBLREADBase> ;
    using FieldValues = QDEC_ACCDBLREAD_ACCDBLREAD_Values<QDEC::ACCDBLREAD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACCDBLREADPack  = Register<0x40012548, 32, ReadMode, QDECACCDBLREADBase, T...> ;

  struct QDECPOWERBase {} ;

  struct POWER : public RegisterBase<0x40012FFC, 32, ReadWriteMode>
  {
    using POWERField = QDEC_POWER_POWER_Values<QDEC::POWER, 0, 1, ReadWriteMode, QDECPOWERBase> ;
    using FieldValues = QDEC_POWER_POWER_Values<QDEC::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40012FFC, 32, ReadWriteMode, QDECPOWERBase, T...> ;

} ;

#endif //#if !defined(QDECREGISTERS_HPP)
