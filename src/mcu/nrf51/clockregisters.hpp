/*******************************************************************************
* Filename      : clockregisters.hpp
*
* Details       : Clock control. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(CLOCKREGISTERS_HPP)
#define CLOCKREGISTERS_HPP

#include "clockfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CLOCK
{
  struct CLOCKTASKS_HFCLKSTARTBase {} ;

  struct TASKS_HFCLKSTART : public RegisterBase<0x40000000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_HFCLKSTARTPack  = Register<0x40000000, 32, WriteMode, CLOCKTASKS_HFCLKSTARTBase, T...> ;

  struct CLOCKTASKS_HFCLKSTOPBase {} ;

  struct TASKS_HFCLKSTOP : public RegisterBase<0x40000004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_HFCLKSTOPPack  = Register<0x40000004, 32, WriteMode, CLOCKTASKS_HFCLKSTOPBase, T...> ;

  struct CLOCKTASKS_LFCLKSTARTBase {} ;

  struct TASKS_LFCLKSTART : public RegisterBase<0x40000008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_LFCLKSTARTPack  = Register<0x40000008, 32, WriteMode, CLOCKTASKS_LFCLKSTARTBase, T...> ;

  struct CLOCKTASKS_LFCLKSTOPBase {} ;

  struct TASKS_LFCLKSTOP : public RegisterBase<0x4000000C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_LFCLKSTOPPack  = Register<0x4000000C, 32, WriteMode, CLOCKTASKS_LFCLKSTOPBase, T...> ;

  struct CLOCKTASKS_CALBase {} ;

  struct TASKS_CAL : public RegisterBase<0x40000010, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CALPack  = Register<0x40000010, 32, WriteMode, CLOCKTASKS_CALBase, T...> ;

  struct CLOCKTASKS_CTSTARTBase {} ;

  struct TASKS_CTSTART : public RegisterBase<0x40000014, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CTSTARTPack  = Register<0x40000014, 32, WriteMode, CLOCKTASKS_CTSTARTBase, T...> ;

  struct CLOCKTASKS_CTSTOPBase {} ;

  struct TASKS_CTSTOP : public RegisterBase<0x40000018, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_CTSTOPPack  = Register<0x40000018, 32, WriteMode, CLOCKTASKS_CTSTOPBase, T...> ;

  struct CLOCKEVENTS_HFCLKSTARTEDBase {} ;

  struct EVENTS_HFCLKSTARTED : public RegisterBase<0x40000100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_HFCLKSTARTEDPack  = Register<0x40000100, 32, ReadWriteMode, CLOCKEVENTS_HFCLKSTARTEDBase, T...> ;

  struct CLOCKEVENTS_LFCLKSTARTEDBase {} ;

  struct EVENTS_LFCLKSTARTED : public RegisterBase<0x40000104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_LFCLKSTARTEDPack  = Register<0x40000104, 32, ReadWriteMode, CLOCKEVENTS_LFCLKSTARTEDBase, T...> ;

  struct CLOCKEVENTS_DONEBase {} ;

  struct EVENTS_DONE : public RegisterBase<0x4000010C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_DONEPack  = Register<0x4000010C, 32, ReadWriteMode, CLOCKEVENTS_DONEBase, T...> ;

  struct CLOCKEVENTS_CTTOBase {} ;

  struct EVENTS_CTTO : public RegisterBase<0x40000110, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_CTTOPack  = Register<0x40000110, 32, ReadWriteMode, CLOCKEVENTS_CTTOBase, T...> ;

  struct CLOCKINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40000304, 32, ReadWriteMode>
  {
    using HFCLKSTARTED = CLOCK_INTENSET_HFCLKSTARTED_Values<CLOCK::INTENSET, 0, 1, ReadWriteMode, CLOCKINTENSETBase> ;
    using LFCLKSTARTED = CLOCK_INTENSET_LFCLKSTARTED_Values<CLOCK::INTENSET, 1, 1, ReadWriteMode, CLOCKINTENSETBase> ;
    using DONE = CLOCK_INTENSET_DONE_Values<CLOCK::INTENSET, 3, 1, ReadWriteMode, CLOCKINTENSETBase> ;
    using CTTO = CLOCK_INTENSET_CTTO_Values<CLOCK::INTENSET, 4, 1, ReadWriteMode, CLOCKINTENSETBase> ;
    using FieldValues = CLOCK_INTENSET_CTTO_Values<CLOCK::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40000304, 32, ReadWriteMode, CLOCKINTENSETBase, T...> ;

  struct CLOCKINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40000308, 32, ReadWriteMode>
  {
    using HFCLKSTARTED = CLOCK_INTENCLR_HFCLKSTARTED_Values<CLOCK::INTENCLR, 0, 1, ReadWriteMode, CLOCKINTENCLRBase> ;
    using LFCLKSTARTED = CLOCK_INTENCLR_LFCLKSTARTED_Values<CLOCK::INTENCLR, 1, 1, ReadWriteMode, CLOCKINTENCLRBase> ;
    using DONE = CLOCK_INTENCLR_DONE_Values<CLOCK::INTENCLR, 3, 1, ReadWriteMode, CLOCKINTENCLRBase> ;
    using CTTO = CLOCK_INTENCLR_CTTO_Values<CLOCK::INTENCLR, 4, 1, ReadWriteMode, CLOCKINTENCLRBase> ;
    using FieldValues = CLOCK_INTENCLR_CTTO_Values<CLOCK::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40000308, 32, ReadWriteMode, CLOCKINTENCLRBase, T...> ;

  struct CLOCKHFCLKRUNBase {} ;

  struct HFCLKRUN : public RegisterBase<0x40000408, 32, ReadMode>
  {
    using STATUS = CLOCK_HFCLKRUN_STATUS_Values<CLOCK::HFCLKRUN, 0, 1, ReadMode, CLOCKHFCLKRUNBase> ;
    using FieldValues = CLOCK_HFCLKRUN_STATUS_Values<CLOCK::HFCLKRUN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HFCLKRUNPack  = Register<0x40000408, 32, ReadMode, CLOCKHFCLKRUNBase, T...> ;

  struct CLOCKHFCLKSTATBase {} ;

  struct HFCLKSTAT : public RegisterBase<0x4000040C, 32, ReadMode>
  {
    using SRC = CLOCK_HFCLKSTAT_SRC_Values<CLOCK::HFCLKSTAT, 0, 1, ReadMode, CLOCKHFCLKSTATBase> ;
    using STATE = CLOCK_HFCLKSTAT_STATE_Values<CLOCK::HFCLKSTAT, 16, 1, ReadMode, CLOCKHFCLKSTATBase> ;
    using FieldValues = CLOCK_HFCLKSTAT_STATE_Values<CLOCK::HFCLKSTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HFCLKSTATPack  = Register<0x4000040C, 32, ReadMode, CLOCKHFCLKSTATBase, T...> ;

  struct CLOCKLFCLKRUNBase {} ;

  struct LFCLKRUN : public RegisterBase<0x40000414, 32, ReadMode>
  {
    using STATUS = CLOCK_LFCLKRUN_STATUS_Values<CLOCK::LFCLKRUN, 0, 1, ReadMode, CLOCKLFCLKRUNBase> ;
    using FieldValues = CLOCK_LFCLKRUN_STATUS_Values<CLOCK::LFCLKRUN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LFCLKRUNPack  = Register<0x40000414, 32, ReadMode, CLOCKLFCLKRUNBase, T...> ;

  struct CLOCKLFCLKSTATBase {} ;

  struct LFCLKSTAT : public RegisterBase<0x40000418, 32, ReadMode>
  {
    using SRC = CLOCK_LFCLKSTAT_SRC_Values<CLOCK::LFCLKSTAT, 0, 2, ReadMode, CLOCKLFCLKSTATBase> ;
    using STATE = CLOCK_LFCLKSTAT_STATE_Values<CLOCK::LFCLKSTAT, 16, 1, ReadMode, CLOCKLFCLKSTATBase> ;
    using FieldValues = CLOCK_LFCLKSTAT_STATE_Values<CLOCK::LFCLKSTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LFCLKSTATPack  = Register<0x40000418, 32, ReadMode, CLOCKLFCLKSTATBase, T...> ;

  struct CLOCKLFCLKSRCCOPYBase {} ;

  struct LFCLKSRCCOPY : public RegisterBase<0x4000041C, 32, ReadMode>
  {
    using SRC = CLOCK_LFCLKSRCCOPY_SRC_Values<CLOCK::LFCLKSRCCOPY, 0, 2, ReadMode, CLOCKLFCLKSRCCOPYBase> ;
    using FieldValues = CLOCK_LFCLKSRCCOPY_SRC_Values<CLOCK::LFCLKSRCCOPY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LFCLKSRCCOPYPack  = Register<0x4000041C, 32, ReadMode, CLOCKLFCLKSRCCOPYBase, T...> ;

  struct CLOCKLFCLKSRCBase {} ;

  struct LFCLKSRC : public RegisterBase<0x40000518, 32, ReadWriteMode>
  {
    using SRC = CLOCK_LFCLKSRC_SRC_Values<CLOCK::LFCLKSRC, 0, 2, ReadWriteMode, CLOCKLFCLKSRCBase> ;
    using FieldValues = CLOCK_LFCLKSRC_SRC_Values<CLOCK::LFCLKSRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LFCLKSRCPack  = Register<0x40000518, 32, ReadWriteMode, CLOCKLFCLKSRCBase, T...> ;

  struct CLOCKCTIVBase {} ;

  struct CTIV : public RegisterBase<0x40000538, 32, ReadWriteMode>
  {
    using CTIVField = CLOCK_CTIV_CTIV_Values<CLOCK::CTIV, 0, 7, ReadWriteMode, CLOCKCTIVBase> ;
    using FieldValues = CLOCK_CTIV_CTIV_Values<CLOCK::CTIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTIVPack  = Register<0x40000538, 32, ReadWriteMode, CLOCKCTIVBase, T...> ;

  struct CLOCKXTALFREQBase {} ;

  struct XTALFREQ : public RegisterBase<0x40000550, 32, ReadWriteMode>
  {
    using XTALFREQField = CLOCK_XTALFREQ_XTALFREQ_Values<CLOCK::XTALFREQ, 0, 8, ReadWriteMode, CLOCKXTALFREQBase> ;
    using FieldValues = CLOCK_XTALFREQ_XTALFREQ_Values<CLOCK::XTALFREQ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using XTALFREQPack  = Register<0x40000550, 32, ReadWriteMode, CLOCKXTALFREQBase, T...> ;

} ;

#endif //#if !defined(CLOCKREGISTERS_HPP)
