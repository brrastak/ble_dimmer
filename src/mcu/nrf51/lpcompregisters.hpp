/*******************************************************************************
* Filename      : lpcompregisters.hpp
*
* Details       : Low power comparator. This header file is auto-generated for
*                 nrf51 device.
*
*
*******************************************************************************/

#if !defined(LPCOMPREGISTERS_HPP)
#define LPCOMPREGISTERS_HPP

#include "lpcompfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPCOMP
{
  struct LPCOMPTASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x40013000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x40013000, 32, WriteMode, LPCOMPTASKS_STARTBase, T...> ;

  struct LPCOMPTASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x40013004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x40013004, 32, WriteMode, LPCOMPTASKS_STOPBase, T...> ;

  struct LPCOMPTASKS_SAMPLEBase {} ;

  struct TASKS_SAMPLE : public RegisterBase<0x40013008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_SAMPLEPack  = Register<0x40013008, 32, WriteMode, LPCOMPTASKS_SAMPLEBase, T...> ;

  struct LPCOMPEVENTS_READYBase {} ;

  struct EVENTS_READY : public RegisterBase<0x40013100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_READYPack  = Register<0x40013100, 32, ReadWriteMode, LPCOMPEVENTS_READYBase, T...> ;

  struct LPCOMPEVENTS_DOWNBase {} ;

  struct EVENTS_DOWN : public RegisterBase<0x40013104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_DOWNPack  = Register<0x40013104, 32, ReadWriteMode, LPCOMPEVENTS_DOWNBase, T...> ;

  struct LPCOMPEVENTS_UPBase {} ;

  struct EVENTS_UP : public RegisterBase<0x40013108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_UPPack  = Register<0x40013108, 32, ReadWriteMode, LPCOMPEVENTS_UPBase, T...> ;

  struct LPCOMPEVENTS_CROSSBase {} ;

  struct EVENTS_CROSS : public RegisterBase<0x4001310C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_CROSSPack  = Register<0x4001310C, 32, ReadWriteMode, LPCOMPEVENTS_CROSSBase, T...> ;

  struct LPCOMPSHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x40013200, 32, ReadWriteMode>
  {
    using READY_SAMPLE = LPCOMP_SHORTS_READY_SAMPLE_Values<LPCOMP::SHORTS, 0, 1, ReadWriteMode, LPCOMPSHORTSBase> ;
    using READY_STOP = LPCOMP_SHORTS_READY_STOP_Values<LPCOMP::SHORTS, 1, 1, ReadWriteMode, LPCOMPSHORTSBase> ;
    using DOWN_STOP = LPCOMP_SHORTS_DOWN_STOP_Values<LPCOMP::SHORTS, 2, 1, ReadWriteMode, LPCOMPSHORTSBase> ;
    using UP_STOP = LPCOMP_SHORTS_UP_STOP_Values<LPCOMP::SHORTS, 3, 1, ReadWriteMode, LPCOMPSHORTSBase> ;
    using CROSS_STOP = LPCOMP_SHORTS_CROSS_STOP_Values<LPCOMP::SHORTS, 4, 1, ReadWriteMode, LPCOMPSHORTSBase> ;
    using FieldValues = LPCOMP_SHORTS_CROSS_STOP_Values<LPCOMP::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x40013200, 32, ReadWriteMode, LPCOMPSHORTSBase, T...> ;

  struct LPCOMPINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40013304, 32, ReadWriteMode>
  {
    using READY = LPCOMP_INTENSET_READY_Values<LPCOMP::INTENSET, 0, 1, ReadWriteMode, LPCOMPINTENSETBase> ;
    using DOWN = LPCOMP_INTENSET_DOWN_Values<LPCOMP::INTENSET, 1, 1, ReadWriteMode, LPCOMPINTENSETBase> ;
    using UP = LPCOMP_INTENSET_UP_Values<LPCOMP::INTENSET, 2, 1, ReadWriteMode, LPCOMPINTENSETBase> ;
    using CROSS = LPCOMP_INTENSET_CROSS_Values<LPCOMP::INTENSET, 3, 1, ReadWriteMode, LPCOMPINTENSETBase> ;
    using FieldValues = LPCOMP_INTENSET_CROSS_Values<LPCOMP::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40013304, 32, ReadWriteMode, LPCOMPINTENSETBase, T...> ;

  struct LPCOMPINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40013308, 32, ReadWriteMode>
  {
    using READY = LPCOMP_INTENCLR_READY_Values<LPCOMP::INTENCLR, 0, 1, ReadWriteMode, LPCOMPINTENCLRBase> ;
    using DOWN = LPCOMP_INTENCLR_DOWN_Values<LPCOMP::INTENCLR, 1, 1, ReadWriteMode, LPCOMPINTENCLRBase> ;
    using UP = LPCOMP_INTENCLR_UP_Values<LPCOMP::INTENCLR, 2, 1, ReadWriteMode, LPCOMPINTENCLRBase> ;
    using CROSS = LPCOMP_INTENCLR_CROSS_Values<LPCOMP::INTENCLR, 3, 1, ReadWriteMode, LPCOMPINTENCLRBase> ;
    using FieldValues = LPCOMP_INTENCLR_CROSS_Values<LPCOMP::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40013308, 32, ReadWriteMode, LPCOMPINTENCLRBase, T...> ;

  struct LPCOMPRESULTBase {} ;

  struct RESULT : public RegisterBase<0x40013400, 32, ReadMode>
  {
    using RESULTField = LPCOMP_RESULT_RESULT_Values<LPCOMP::RESULT, 0, 1, ReadMode, LPCOMPRESULTBase> ;
    using FieldValues = LPCOMP_RESULT_RESULT_Values<LPCOMP::RESULT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESULTPack  = Register<0x40013400, 32, ReadMode, LPCOMPRESULTBase, T...> ;

  struct LPCOMPENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x40013500, 32, ReadWriteMode>
  {
    using ENABLEField = LPCOMP_ENABLE_ENABLE_Values<LPCOMP::ENABLE, 0, 2, ReadWriteMode, LPCOMPENABLEBase> ;
    using FieldValues = LPCOMP_ENABLE_ENABLE_Values<LPCOMP::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x40013500, 32, ReadWriteMode, LPCOMPENABLEBase, T...> ;

  struct LPCOMPPSELBase {} ;

  struct PSEL : public RegisterBase<0x40013504, 32, ReadWriteMode>
  {
    using PSELField = LPCOMP_PSEL_PSEL_Values<LPCOMP::PSEL, 0, 3, ReadWriteMode, LPCOMPPSELBase> ;
    using FieldValues = LPCOMP_PSEL_PSEL_Values<LPCOMP::PSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSELPack  = Register<0x40013504, 32, ReadWriteMode, LPCOMPPSELBase, T...> ;

  struct LPCOMPREFSELBase {} ;

  struct REFSEL : public RegisterBase<0x40013508, 32, ReadWriteMode>
  {
    using REFSELField = LPCOMP_REFSEL_REFSEL_Values<LPCOMP::REFSEL, 0, 3, ReadWriteMode, LPCOMPREFSELBase> ;
    using FieldValues = LPCOMP_REFSEL_REFSEL_Values<LPCOMP::REFSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REFSELPack  = Register<0x40013508, 32, ReadWriteMode, LPCOMPREFSELBase, T...> ;

  struct LPCOMPEXTREFSELBase {} ;

  struct EXTREFSEL : public RegisterBase<0x4001350C, 32, ReadWriteMode>
  {
    using EXTREFSELField = LPCOMP_EXTREFSEL_EXTREFSEL_Values<LPCOMP::EXTREFSEL, 0, 1, ReadWriteMode, LPCOMPEXTREFSELBase> ;
    using FieldValues = LPCOMP_EXTREFSEL_EXTREFSEL_Values<LPCOMP::EXTREFSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTREFSELPack  = Register<0x4001350C, 32, ReadWriteMode, LPCOMPEXTREFSELBase, T...> ;

  struct LPCOMPANADETECTBase {} ;

  struct ANADETECT : public RegisterBase<0x40013520, 32, ReadWriteMode>
  {
    using ANADETECTField = LPCOMP_ANADETECT_ANADETECT_Values<LPCOMP::ANADETECT, 0, 2, ReadWriteMode, LPCOMPANADETECTBase> ;
    using FieldValues = LPCOMP_ANADETECT_ANADETECT_Values<LPCOMP::ANADETECT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANADETECTPack  = Register<0x40013520, 32, ReadWriteMode, LPCOMPANADETECTBase, T...> ;

  struct LPCOMPPOWERBase {} ;

  struct POWER : public RegisterBase<0x40013FFC, 32, ReadWriteMode>
  {
    using POWERField = LPCOMP_POWER_POWER_Values<LPCOMP::POWER, 0, 1, ReadWriteMode, LPCOMPPOWERBase> ;
    using FieldValues = LPCOMP_POWER_POWER_Values<LPCOMP::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40013FFC, 32, ReadWriteMode, LPCOMPPOWERBase, T...> ;

} ;

#endif //#if !defined(LPCOMPREGISTERS_HPP)
