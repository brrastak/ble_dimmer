/*******************************************************************************
* Filename      : radioregisters.hpp
*
* Details       : The radio. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(RADIOREGISTERS_HPP)
#define RADIOREGISTERS_HPP

#include "radiofieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RADIO
{
  struct RADIOTASKS_TXENBase {} ;

  struct TASKS_TXEN : public RegisterBase<0x40001000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_TXENPack  = Register<0x40001000, 32, WriteMode, RADIOTASKS_TXENBase, T...> ;

  struct RADIOTASKS_RXENBase {} ;

  struct TASKS_RXEN : public RegisterBase<0x40001004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_RXENPack  = Register<0x40001004, 32, WriteMode, RADIOTASKS_RXENBase, T...> ;

  struct RADIOTASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x40001008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x40001008, 32, WriteMode, RADIOTASKS_STARTBase, T...> ;

  struct RADIOTASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x4000100C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x4000100C, 32, WriteMode, RADIOTASKS_STOPBase, T...> ;

  struct RADIOTASKS_DISABLEBase {} ;

  struct TASKS_DISABLE : public RegisterBase<0x40001010, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_DISABLEPack  = Register<0x40001010, 32, WriteMode, RADIOTASKS_DISABLEBase, T...> ;

  struct RADIOTASKS_RSSISTARTBase {} ;

  struct TASKS_RSSISTART : public RegisterBase<0x40001014, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_RSSISTARTPack  = Register<0x40001014, 32, WriteMode, RADIOTASKS_RSSISTARTBase, T...> ;

  struct RADIOTASKS_RSSISTOPBase {} ;

  struct TASKS_RSSISTOP : public RegisterBase<0x40001018, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_RSSISTOPPack  = Register<0x40001018, 32, WriteMode, RADIOTASKS_RSSISTOPBase, T...> ;

  struct RADIOTASKS_BCSTARTBase {} ;

  struct TASKS_BCSTART : public RegisterBase<0x4000101C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_BCSTARTPack  = Register<0x4000101C, 32, WriteMode, RADIOTASKS_BCSTARTBase, T...> ;

  struct RADIOTASKS_BCSTOPBase {} ;

  struct TASKS_BCSTOP : public RegisterBase<0x40001020, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_BCSTOPPack  = Register<0x40001020, 32, WriteMode, RADIOTASKS_BCSTOPBase, T...> ;

  struct RADIOEVENTS_READYBase {} ;

  struct EVENTS_READY : public RegisterBase<0x40001100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_READYPack  = Register<0x40001100, 32, ReadWriteMode, RADIOEVENTS_READYBase, T...> ;

  struct RADIOEVENTS_ADDRESSBase {} ;

  struct EVENTS_ADDRESS : public RegisterBase<0x40001104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ADDRESSPack  = Register<0x40001104, 32, ReadWriteMode, RADIOEVENTS_ADDRESSBase, T...> ;

  struct RADIOEVENTS_PAYLOADBase {} ;

  struct EVENTS_PAYLOAD : public RegisterBase<0x40001108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_PAYLOADPack  = Register<0x40001108, 32, ReadWriteMode, RADIOEVENTS_PAYLOADBase, T...> ;

  struct RADIOEVENTS_ENDBase {} ;

  struct EVENTS_END : public RegisterBase<0x4000110C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ENDPack  = Register<0x4000110C, 32, ReadWriteMode, RADIOEVENTS_ENDBase, T...> ;

  struct RADIOEVENTS_DISABLEDBase {} ;

  struct EVENTS_DISABLED : public RegisterBase<0x40001110, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_DISABLEDPack  = Register<0x40001110, 32, ReadWriteMode, RADIOEVENTS_DISABLEDBase, T...> ;

  struct RADIOEVENTS_DEVMATCHBase {} ;

  struct EVENTS_DEVMATCH : public RegisterBase<0x40001114, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_DEVMATCHPack  = Register<0x40001114, 32, ReadWriteMode, RADIOEVENTS_DEVMATCHBase, T...> ;

  struct RADIOEVENTS_DEVMISSBase {} ;

  struct EVENTS_DEVMISS : public RegisterBase<0x40001118, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_DEVMISSPack  = Register<0x40001118, 32, ReadWriteMode, RADIOEVENTS_DEVMISSBase, T...> ;

  struct RADIOEVENTS_RSSIENDBase {} ;

  struct EVENTS_RSSIEND : public RegisterBase<0x4000111C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_RSSIENDPack  = Register<0x4000111C, 32, ReadWriteMode, RADIOEVENTS_RSSIENDBase, T...> ;

  struct RADIOEVENTS_BCMATCHBase {} ;

  struct EVENTS_BCMATCH : public RegisterBase<0x40001128, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_BCMATCHPack  = Register<0x40001128, 32, ReadWriteMode, RADIOEVENTS_BCMATCHBase, T...> ;

  struct RADIOSHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x40001200, 32, ReadWriteMode>
  {
    using READY_START = RADIO_SHORTS_READY_START_Values<RADIO::SHORTS, 0, 1, ReadWriteMode, RADIOSHORTSBase> ;
    using END_DISABLE = RADIO_SHORTS_END_DISABLE_Values<RADIO::SHORTS, 1, 1, ReadWriteMode, RADIOSHORTSBase> ;
    using DISABLED_TXEN = RADIO_SHORTS_DISABLED_TXEN_Values<RADIO::SHORTS, 2, 1, ReadWriteMode, RADIOSHORTSBase> ;
    using DISABLED_RXEN = RADIO_SHORTS_DISABLED_RXEN_Values<RADIO::SHORTS, 3, 1, ReadWriteMode, RADIOSHORTSBase> ;
    using ADDRESS_RSSISTART = RADIO_SHORTS_ADDRESS_RSSISTART_Values<RADIO::SHORTS, 4, 1, ReadWriteMode, RADIOSHORTSBase> ;
    using END_START = RADIO_SHORTS_END_START_Values<RADIO::SHORTS, 5, 1, ReadWriteMode, RADIOSHORTSBase> ;
    using ADDRESS_BCSTART = RADIO_SHORTS_ADDRESS_BCSTART_Values<RADIO::SHORTS, 6, 1, ReadWriteMode, RADIOSHORTSBase> ;
    using DISABLED_RSSISTOP = RADIO_SHORTS_DISABLED_RSSISTOP_Values<RADIO::SHORTS, 8, 1, ReadWriteMode, RADIOSHORTSBase> ;
    using FieldValues = RADIO_SHORTS_DISABLED_RSSISTOP_Values<RADIO::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x40001200, 32, ReadWriteMode, RADIOSHORTSBase, T...> ;

  struct RADIOINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40001304, 32, ReadWriteMode>
  {
    using READY = RADIO_INTENSET_READY_Values<RADIO::INTENSET, 0, 1, ReadWriteMode, RADIOINTENSETBase> ;
    using ADDRESS = RADIO_INTENSET_ADDRESS_Values<RADIO::INTENSET, 1, 1, ReadWriteMode, RADIOINTENSETBase> ;
    using PAYLOAD = RADIO_INTENSET_PAYLOAD_Values<RADIO::INTENSET, 2, 1, ReadWriteMode, RADIOINTENSETBase> ;
    using END = RADIO_INTENSET_END_Values<RADIO::INTENSET, 3, 1, ReadWriteMode, RADIOINTENSETBase> ;
    using DISABLED = RADIO_INTENSET_DISABLED_Values<RADIO::INTENSET, 4, 1, ReadWriteMode, RADIOINTENSETBase> ;
    using DEVMATCH = RADIO_INTENSET_DEVMATCH_Values<RADIO::INTENSET, 5, 1, ReadWriteMode, RADIOINTENSETBase> ;
    using DEVMISS = RADIO_INTENSET_DEVMISS_Values<RADIO::INTENSET, 6, 1, ReadWriteMode, RADIOINTENSETBase> ;
    using RSSIEND = RADIO_INTENSET_RSSIEND_Values<RADIO::INTENSET, 7, 1, ReadWriteMode, RADIOINTENSETBase> ;
    using BCMATCH = RADIO_INTENSET_BCMATCH_Values<RADIO::INTENSET, 10, 1, ReadWriteMode, RADIOINTENSETBase> ;
    using FieldValues = RADIO_INTENSET_BCMATCH_Values<RADIO::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40001304, 32, ReadWriteMode, RADIOINTENSETBase, T...> ;

  struct RADIOINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40001308, 32, ReadWriteMode>
  {
    using READY = RADIO_INTENCLR_READY_Values<RADIO::INTENCLR, 0, 1, ReadWriteMode, RADIOINTENCLRBase> ;
    using ADDRESS = RADIO_INTENCLR_ADDRESS_Values<RADIO::INTENCLR, 1, 1, ReadWriteMode, RADIOINTENCLRBase> ;
    using PAYLOAD = RADIO_INTENCLR_PAYLOAD_Values<RADIO::INTENCLR, 2, 1, ReadWriteMode, RADIOINTENCLRBase> ;
    using END = RADIO_INTENCLR_END_Values<RADIO::INTENCLR, 3, 1, ReadWriteMode, RADIOINTENCLRBase> ;
    using DISABLED = RADIO_INTENCLR_DISABLED_Values<RADIO::INTENCLR, 4, 1, ReadWriteMode, RADIOINTENCLRBase> ;
    using DEVMATCH = RADIO_INTENCLR_DEVMATCH_Values<RADIO::INTENCLR, 5, 1, ReadWriteMode, RADIOINTENCLRBase> ;
    using DEVMISS = RADIO_INTENCLR_DEVMISS_Values<RADIO::INTENCLR, 6, 1, ReadWriteMode, RADIOINTENCLRBase> ;
    using RSSIEND = RADIO_INTENCLR_RSSIEND_Values<RADIO::INTENCLR, 7, 1, ReadWriteMode, RADIOINTENCLRBase> ;
    using BCMATCH = RADIO_INTENCLR_BCMATCH_Values<RADIO::INTENCLR, 10, 1, ReadWriteMode, RADIOINTENCLRBase> ;
    using FieldValues = RADIO_INTENCLR_BCMATCH_Values<RADIO::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40001308, 32, ReadWriteMode, RADIOINTENCLRBase, T...> ;

  struct RADIOCRCSTATUSBase {} ;

  struct CRCSTATUS : public RegisterBase<0x40001400, 32, ReadMode>
  {
    using CRCSTATUSField = RADIO_CRCSTATUS_CRCSTATUS_Values<RADIO::CRCSTATUS, 0, 1, ReadMode, RADIOCRCSTATUSBase> ;
    using FieldValues = RADIO_CRCSTATUS_CRCSTATUS_Values<RADIO::CRCSTATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCSTATUSPack  = Register<0x40001400, 32, ReadMode, RADIOCRCSTATUSBase, T...> ;

  struct RADIORXMATCHBase {} ;

  struct RXMATCH : public RegisterBase<0x40001408, 32, ReadMode>
  {
    using RXMATCHField = RADIO_RXMATCH_RXMATCH_Values<RADIO::RXMATCH, 0, 3, ReadMode, RADIORXMATCHBase> ;
    using FieldValues = RADIO_RXMATCH_RXMATCH_Values<RADIO::RXMATCH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXMATCHPack  = Register<0x40001408, 32, ReadMode, RADIORXMATCHBase, T...> ;

  struct RADIORXCRCBase {} ;

  struct RXCRC : public RegisterBase<0x4000140C, 32, ReadMode>
  {
    using RXCRCField = RADIO_RXCRC_RXCRC_Values<RADIO::RXCRC, 0, 24, ReadMode, RADIORXCRCBase> ;
    using FieldValues = RADIO_RXCRC_RXCRC_Values<RADIO::RXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCPack  = Register<0x4000140C, 32, ReadMode, RADIORXCRCBase, T...> ;

  struct RADIODAIBase {} ;

  struct DAI : public RegisterBase<0x40001410, 32, ReadMode>
  {
    using DAIField = RADIO_DAI_DAI_Values<RADIO::DAI, 0, 3, ReadMode, RADIODAIBase> ;
    using FieldValues = RADIO_DAI_DAI_Values<RADIO::DAI, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAIPack  = Register<0x40001410, 32, ReadMode, RADIODAIBase, T...> ;

  struct RADIOPACKETPTRBase {} ;

  struct PACKETPTR : public RegisterBase<0x40001504, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PACKETPTRPack  = Register<0x40001504, 32, ReadWriteMode, RADIOPACKETPTRBase, T...> ;

  struct RADIOFREQUENCYBase {} ;

  struct FREQUENCY : public RegisterBase<0x40001508, 32, ReadWriteMode>
  {
    using FREQUENCYField = RADIO_FREQUENCY_FREQUENCY_Values<RADIO::FREQUENCY, 0, 7, ReadWriteMode, RADIOFREQUENCYBase> ;
    using FieldValues = RADIO_FREQUENCY_FREQUENCY_Values<RADIO::FREQUENCY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FREQUENCYPack  = Register<0x40001508, 32, ReadWriteMode, RADIOFREQUENCYBase, T...> ;

  struct RADIOTXPOWERBase {} ;

  struct TXPOWER : public RegisterBase<0x4000150C, 32, ReadWriteMode>
  {
    using TXPOWERField = RADIO_TXPOWER_TXPOWER_Values<RADIO::TXPOWER, 0, 8, ReadWriteMode, RADIOTXPOWERBase> ;
    using FieldValues = RADIO_TXPOWER_TXPOWER_Values<RADIO::TXPOWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXPOWERPack  = Register<0x4000150C, 32, ReadWriteMode, RADIOTXPOWERBase, T...> ;

  struct RADIOMODEBase {} ;

  struct MODE : public RegisterBase<0x40001510, 32, ReadWriteMode>
  {
    using MODEField = RADIO_MODE_MODE_Values<RADIO::MODE, 0, 2, ReadWriteMode, RADIOMODEBase> ;
    using FieldValues = RADIO_MODE_MODE_Values<RADIO::MODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODEPack  = Register<0x40001510, 32, ReadWriteMode, RADIOMODEBase, T...> ;

  struct RADIOPCNF0Base {} ;

  struct PCNF0 : public RegisterBase<0x40001514, 32, ReadWriteMode>
  {
    using LFLEN = RADIO_PCNF0_LFLEN_Values<RADIO::PCNF0, 0, 4, ReadWriteMode, RADIOPCNF0Base> ;
    using S0LEN = RADIO_PCNF0_S0LEN_Values<RADIO::PCNF0, 8, 1, ReadWriteMode, RADIOPCNF0Base> ;
    using S1LEN = RADIO_PCNF0_S1LEN_Values<RADIO::PCNF0, 16, 4, ReadWriteMode, RADIOPCNF0Base> ;
    using FieldValues = RADIO_PCNF0_S1LEN_Values<RADIO::PCNF0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCNF0Pack  = Register<0x40001514, 32, ReadWriteMode, RADIOPCNF0Base, T...> ;

  struct RADIOPCNF1Base {} ;

  struct PCNF1 : public RegisterBase<0x40001518, 32, ReadWriteMode>
  {
    using MAXLEN = RADIO_PCNF1_MAXLEN_Values<RADIO::PCNF1, 0, 8, ReadWriteMode, RADIOPCNF1Base> ;
    using STATLEN = RADIO_PCNF1_STATLEN_Values<RADIO::PCNF1, 8, 8, ReadWriteMode, RADIOPCNF1Base> ;
    using BALEN = RADIO_PCNF1_BALEN_Values<RADIO::PCNF1, 16, 3, ReadWriteMode, RADIOPCNF1Base> ;
    using ENDIAN = RADIO_PCNF1_ENDIAN_Values<RADIO::PCNF1, 24, 1, ReadWriteMode, RADIOPCNF1Base> ;
    using WHITEEN = RADIO_PCNF1_WHITEEN_Values<RADIO::PCNF1, 25, 1, ReadWriteMode, RADIOPCNF1Base> ;
    using FieldValues = RADIO_PCNF1_WHITEEN_Values<RADIO::PCNF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCNF1Pack  = Register<0x40001518, 32, ReadWriteMode, RADIOPCNF1Base, T...> ;

  struct RADIOBASE0Base {} ;

  struct BASE0 : public RegisterBase<0x4000151C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using BASE0Pack  = Register<0x4000151C, 32, ReadWriteMode, RADIOBASE0Base, T...> ;

  struct RADIOBASE1Base {} ;

  struct BASE1 : public RegisterBase<0x40001520, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using BASE1Pack  = Register<0x40001520, 32, ReadWriteMode, RADIOBASE1Base, T...> ;

  struct RADIOPREFIX0Base {} ;

  struct PREFIX0 : public RegisterBase<0x40001524, 32, ReadWriteMode>
  {
    using AP0 = RADIO_PREFIX0_AP0_Values<RADIO::PREFIX0, 0, 8, ReadWriteMode, RADIOPREFIX0Base> ;
    using AP1 = RADIO_PREFIX0_AP1_Values<RADIO::PREFIX0, 8, 8, ReadWriteMode, RADIOPREFIX0Base> ;
    using AP2 = RADIO_PREFIX0_AP2_Values<RADIO::PREFIX0, 16, 8, ReadWriteMode, RADIOPREFIX0Base> ;
    using AP3 = RADIO_PREFIX0_AP3_Values<RADIO::PREFIX0, 24, 8, ReadWriteMode, RADIOPREFIX0Base> ;
    using FieldValues = RADIO_PREFIX0_AP3_Values<RADIO::PREFIX0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PREFIX0Pack  = Register<0x40001524, 32, ReadWriteMode, RADIOPREFIX0Base, T...> ;

  struct RADIOPREFIX1Base {} ;

  struct PREFIX1 : public RegisterBase<0x40001528, 32, ReadWriteMode>
  {
    using AP4 = RADIO_PREFIX1_AP4_Values<RADIO::PREFIX1, 0, 8, ReadWriteMode, RADIOPREFIX1Base> ;
    using AP5 = RADIO_PREFIX1_AP5_Values<RADIO::PREFIX1, 8, 8, ReadWriteMode, RADIOPREFIX1Base> ;
    using AP6 = RADIO_PREFIX1_AP6_Values<RADIO::PREFIX1, 16, 8, ReadWriteMode, RADIOPREFIX1Base> ;
    using AP7 = RADIO_PREFIX1_AP7_Values<RADIO::PREFIX1, 24, 8, ReadWriteMode, RADIOPREFIX1Base> ;
    using FieldValues = RADIO_PREFIX1_AP7_Values<RADIO::PREFIX1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PREFIX1Pack  = Register<0x40001528, 32, ReadWriteMode, RADIOPREFIX1Base, T...> ;

  struct RADIOTXADDRESSBase {} ;

  struct TXADDRESS : public RegisterBase<0x4000152C, 32, ReadWriteMode>
  {
    using TXADDRESSField = RADIO_TXADDRESS_TXADDRESS_Values<RADIO::TXADDRESS, 0, 3, ReadWriteMode, RADIOTXADDRESSBase> ;
    using FieldValues = RADIO_TXADDRESS_TXADDRESS_Values<RADIO::TXADDRESS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXADDRESSPack  = Register<0x4000152C, 32, ReadWriteMode, RADIOTXADDRESSBase, T...> ;

  struct RADIORXADDRESSESBase {} ;

  struct RXADDRESSES : public RegisterBase<0x40001530, 32, ReadWriteMode>
  {
    using ADDR0 = RADIO_RXADDRESSES_ADDR0_Values<RADIO::RXADDRESSES, 0, 1, ReadWriteMode, RADIORXADDRESSESBase> ;
    using ADDR1 = RADIO_RXADDRESSES_ADDR1_Values<RADIO::RXADDRESSES, 1, 1, ReadWriteMode, RADIORXADDRESSESBase> ;
    using ADDR2 = RADIO_RXADDRESSES_ADDR2_Values<RADIO::RXADDRESSES, 2, 1, ReadWriteMode, RADIORXADDRESSESBase> ;
    using ADDR3 = RADIO_RXADDRESSES_ADDR3_Values<RADIO::RXADDRESSES, 3, 1, ReadWriteMode, RADIORXADDRESSESBase> ;
    using ADDR4 = RADIO_RXADDRESSES_ADDR4_Values<RADIO::RXADDRESSES, 4, 1, ReadWriteMode, RADIORXADDRESSESBase> ;
    using ADDR5 = RADIO_RXADDRESSES_ADDR5_Values<RADIO::RXADDRESSES, 5, 1, ReadWriteMode, RADIORXADDRESSESBase> ;
    using ADDR6 = RADIO_RXADDRESSES_ADDR6_Values<RADIO::RXADDRESSES, 6, 1, ReadWriteMode, RADIORXADDRESSESBase> ;
    using ADDR7 = RADIO_RXADDRESSES_ADDR7_Values<RADIO::RXADDRESSES, 7, 1, ReadWriteMode, RADIORXADDRESSESBase> ;
    using FieldValues = RADIO_RXADDRESSES_ADDR7_Values<RADIO::RXADDRESSES, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXADDRESSESPack  = Register<0x40001530, 32, ReadWriteMode, RADIORXADDRESSESBase, T...> ;

  struct RADIOCRCCNFBase {} ;

  struct CRCCNF : public RegisterBase<0x40001534, 32, ReadWriteMode>
  {
    using LEN = RADIO_CRCCNF_LEN_Values<RADIO::CRCCNF, 0, 2, ReadWriteMode, RADIOCRCCNFBase> ;
    using SKIPADDR = RADIO_CRCCNF_SKIPADDR_Values<RADIO::CRCCNF, 8, 1, ReadWriteMode, RADIOCRCCNFBase> ;
    using FieldValues = RADIO_CRCCNF_SKIPADDR_Values<RADIO::CRCCNF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCCNFPack  = Register<0x40001534, 32, ReadWriteMode, RADIOCRCCNFBase, T...> ;

  struct RADIOCRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x40001538, 32, ReadWriteMode>
  {
    using CRCPOLYField = RADIO_CRCPOLY_CRCPOLY_Values<RADIO::CRCPOLY, 0, 24, ReadWriteMode, RADIOCRCPOLYBase> ;
    using FieldValues = RADIO_CRCPOLY_CRCPOLY_Values<RADIO::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x40001538, 32, ReadWriteMode, RADIOCRCPOLYBase, T...> ;

  struct RADIOCRCINITBase {} ;

  struct CRCINIT : public RegisterBase<0x4000153C, 32, ReadWriteMode>
  {
    using CRCINITField = RADIO_CRCINIT_CRCINIT_Values<RADIO::CRCINIT, 0, 24, ReadWriteMode, RADIOCRCINITBase> ;
    using FieldValues = RADIO_CRCINIT_CRCINIT_Values<RADIO::CRCINIT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCINITPack  = Register<0x4000153C, 32, ReadWriteMode, RADIOCRCINITBase, T...> ;

  struct RADIOTESTBase {} ;

  struct TEST : public RegisterBase<0x40001540, 32, ReadWriteMode>
  {
    using CONSTCARRIER = RADIO_TEST_CONSTCARRIER_Values<RADIO::TEST, 0, 1, ReadWriteMode, RADIOTESTBase> ;
    using PLLLOCK = RADIO_TEST_PLLLOCK_Values<RADIO::TEST, 1, 1, ReadWriteMode, RADIOTESTBase> ;
    using FieldValues = RADIO_TEST_PLLLOCK_Values<RADIO::TEST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TESTPack  = Register<0x40001540, 32, ReadWriteMode, RADIOTESTBase, T...> ;

  struct RADIOTIFSBase {} ;

  struct TIFS : public RegisterBase<0x40001544, 32, ReadWriteMode>
  {
    using TIFSField = RADIO_TIFS_TIFS_Values<RADIO::TIFS, 0, 8, ReadWriteMode, RADIOTIFSBase> ;
    using FieldValues = RADIO_TIFS_TIFS_Values<RADIO::TIFS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIFSPack  = Register<0x40001544, 32, ReadWriteMode, RADIOTIFSBase, T...> ;

  struct RADIORSSISAMPLEBase {} ;

  struct RSSISAMPLE : public RegisterBase<0x40001548, 32, ReadMode>
  {
    using RSSISAMPLEField = RADIO_RSSISAMPLE_RSSISAMPLE_Values<RADIO::RSSISAMPLE, 0, 7, ReadMode, RADIORSSISAMPLEBase> ;
    using FieldValues = RADIO_RSSISAMPLE_RSSISAMPLE_Values<RADIO::RSSISAMPLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSSISAMPLEPack  = Register<0x40001548, 32, ReadMode, RADIORSSISAMPLEBase, T...> ;

  struct RADIOSTATEBase {} ;

  struct STATE : public RegisterBase<0x40001550, 32, ReadMode>
  {
    using STATEField = RADIO_STATE_STATE_Values<RADIO::STATE, 0, 4, ReadMode, RADIOSTATEBase> ;
    using FieldValues = RADIO_STATE_STATE_Values<RADIO::STATE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATEPack  = Register<0x40001550, 32, ReadMode, RADIOSTATEBase, T...> ;

  struct RADIODATAWHITEIVBase {} ;

  struct DATAWHITEIV : public RegisterBase<0x40001554, 32, ReadWriteMode>
  {
    using DATAWHITEIVField = RADIO_DATAWHITEIV_DATAWHITEIV_Values<RADIO::DATAWHITEIV, 0, 7, ReadWriteMode, RADIODATAWHITEIVBase> ;
    using FieldValues = RADIO_DATAWHITEIV_DATAWHITEIV_Values<RADIO::DATAWHITEIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAWHITEIVPack  = Register<0x40001554, 32, ReadWriteMode, RADIODATAWHITEIVBase, T...> ;

  struct RADIOBCCBase {} ;

  struct BCC : public RegisterBase<0x40001560, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using BCCPack  = Register<0x40001560, 32, ReadWriteMode, RADIOBCCBase, T...> ;

  struct RADIODACNFBase {} ;

  struct DACNF : public RegisterBase<0x40001640, 32, ReadWriteMode>
  {
    using ENA0 = RADIO_DACNF_ENA0_Values<RADIO::DACNF, 0, 1, ReadWriteMode, RADIODACNFBase> ;
    using ENA1 = RADIO_DACNF_ENA1_Values<RADIO::DACNF, 1, 1, ReadWriteMode, RADIODACNFBase> ;
    using ENA2 = RADIO_DACNF_ENA2_Values<RADIO::DACNF, 2, 1, ReadWriteMode, RADIODACNFBase> ;
    using ENA3 = RADIO_DACNF_ENA3_Values<RADIO::DACNF, 3, 1, ReadWriteMode, RADIODACNFBase> ;
    using ENA4 = RADIO_DACNF_ENA4_Values<RADIO::DACNF, 4, 1, ReadWriteMode, RADIODACNFBase> ;
    using ENA5 = RADIO_DACNF_ENA5_Values<RADIO::DACNF, 5, 1, ReadWriteMode, RADIODACNFBase> ;
    using ENA6 = RADIO_DACNF_ENA6_Values<RADIO::DACNF, 6, 1, ReadWriteMode, RADIODACNFBase> ;
    using ENA7 = RADIO_DACNF_ENA7_Values<RADIO::DACNF, 7, 1, ReadWriteMode, RADIODACNFBase> ;
    using TXADD0 = RADIO_DACNF_TXADD0_Values<RADIO::DACNF, 8, 1, ReadWriteMode, RADIODACNFBase> ;
    using TXADD1 = RADIO_DACNF_TXADD1_Values<RADIO::DACNF, 9, 1, ReadWriteMode, RADIODACNFBase> ;
    using TXADD2 = RADIO_DACNF_TXADD2_Values<RADIO::DACNF, 10, 1, ReadWriteMode, RADIODACNFBase> ;
    using TXADD3 = RADIO_DACNF_TXADD3_Values<RADIO::DACNF, 11, 1, ReadWriteMode, RADIODACNFBase> ;
    using TXADD4 = RADIO_DACNF_TXADD4_Values<RADIO::DACNF, 12, 1, ReadWriteMode, RADIODACNFBase> ;
    using TXADD5 = RADIO_DACNF_TXADD5_Values<RADIO::DACNF, 13, 1, ReadWriteMode, RADIODACNFBase> ;
    using TXADD6 = RADIO_DACNF_TXADD6_Values<RADIO::DACNF, 14, 1, ReadWriteMode, RADIODACNFBase> ;
    using TXADD7 = RADIO_DACNF_TXADD7_Values<RADIO::DACNF, 15, 1, ReadWriteMode, RADIODACNFBase> ;
    using FieldValues = RADIO_DACNF_TXADD7_Values<RADIO::DACNF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DACNFPack  = Register<0x40001640, 32, ReadWriteMode, RADIODACNFBase, T...> ;

  struct RADIOOVERRIDE0Base {} ;

  struct OVERRIDE0 : public RegisterBase<0x40001724, 32, ReadWriteMode>
  {
    using OVERRIDE0Field = RADIO_OVERRIDE0_OVERRIDE0_Values<RADIO::OVERRIDE0, 0, 32, ReadWriteMode, RADIOOVERRIDE0Base> ;
    using FieldValues = RADIO_OVERRIDE0_OVERRIDE0_Values<RADIO::OVERRIDE0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OVERRIDE0Pack  = Register<0x40001724, 32, ReadWriteMode, RADIOOVERRIDE0Base, T...> ;

  struct RADIOOVERRIDE1Base {} ;

  struct OVERRIDE1 : public RegisterBase<0x40001728, 32, ReadWriteMode>
  {
    using OVERRIDE1Field = RADIO_OVERRIDE1_OVERRIDE1_Values<RADIO::OVERRIDE1, 0, 32, ReadWriteMode, RADIOOVERRIDE1Base> ;
    using FieldValues = RADIO_OVERRIDE1_OVERRIDE1_Values<RADIO::OVERRIDE1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OVERRIDE1Pack  = Register<0x40001728, 32, ReadWriteMode, RADIOOVERRIDE1Base, T...> ;

  struct RADIOOVERRIDE2Base {} ;

  struct OVERRIDE2 : public RegisterBase<0x4000172C, 32, ReadWriteMode>
  {
    using OVERRIDE2Field = RADIO_OVERRIDE2_OVERRIDE2_Values<RADIO::OVERRIDE2, 0, 32, ReadWriteMode, RADIOOVERRIDE2Base> ;
    using FieldValues = RADIO_OVERRIDE2_OVERRIDE2_Values<RADIO::OVERRIDE2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OVERRIDE2Pack  = Register<0x4000172C, 32, ReadWriteMode, RADIOOVERRIDE2Base, T...> ;

  struct RADIOOVERRIDE3Base {} ;

  struct OVERRIDE3 : public RegisterBase<0x40001730, 32, ReadWriteMode>
  {
    using OVERRIDE3Field = RADIO_OVERRIDE3_OVERRIDE3_Values<RADIO::OVERRIDE3, 0, 32, ReadWriteMode, RADIOOVERRIDE3Base> ;
    using FieldValues = RADIO_OVERRIDE3_OVERRIDE3_Values<RADIO::OVERRIDE3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OVERRIDE3Pack  = Register<0x40001730, 32, ReadWriteMode, RADIOOVERRIDE3Base, T...> ;

  struct RADIOOVERRIDE4Base {} ;

  struct OVERRIDE4 : public RegisterBase<0x40001734, 32, ReadWriteMode>
  {
    using OVERRIDE4Field = RADIO_OVERRIDE4_OVERRIDE4_Values<RADIO::OVERRIDE4, 0, 28, ReadWriteMode, RADIOOVERRIDE4Base> ;
    using ENABLE = RADIO_OVERRIDE4_ENABLE_Values<RADIO::OVERRIDE4, 31, 1, ReadWriteMode, RADIOOVERRIDE4Base> ;
    using FieldValues = RADIO_OVERRIDE4_ENABLE_Values<RADIO::OVERRIDE4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OVERRIDE4Pack  = Register<0x40001734, 32, ReadWriteMode, RADIOOVERRIDE4Base, T...> ;

  struct RADIOPOWERBase {} ;

  struct POWER : public RegisterBase<0x40001FFC, 32, ReadWriteMode>
  {
    using POWERField = RADIO_POWER_POWER_Values<RADIO::POWER, 0, 1, ReadWriteMode, RADIOPOWERBase> ;
    using FieldValues = RADIO_POWER_POWER_Values<RADIO::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40001FFC, 32, ReadWriteMode, RADIOPOWERBase, T...> ;

  struct RADIODAB0Base {} ;

  struct DAB0 : public RegisterBase<0x40001600, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using DAB0Pack  = Register<0x40001600, 32, ReadWriteMode, RADIODAB0Base, T...> ;

  struct RADIODAB1Base {} ;

  struct DAB1 : public RegisterBase<0x40001604, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using DAB1Pack  = Register<0x40001604, 32, ReadWriteMode, RADIODAB1Base, T...> ;

  struct RADIODAB2Base {} ;

  struct DAB2 : public RegisterBase<0x40001608, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using DAB2Pack  = Register<0x40001608, 32, ReadWriteMode, RADIODAB2Base, T...> ;

  struct RADIODAB3Base {} ;

  struct DAB3 : public RegisterBase<0x4000160C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using DAB3Pack  = Register<0x4000160C, 32, ReadWriteMode, RADIODAB3Base, T...> ;

  struct RADIODAB4Base {} ;

  struct DAB4 : public RegisterBase<0x40001610, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using DAB4Pack  = Register<0x40001610, 32, ReadWriteMode, RADIODAB4Base, T...> ;

  struct RADIODAB5Base {} ;

  struct DAB5 : public RegisterBase<0x40001614, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using DAB5Pack  = Register<0x40001614, 32, ReadWriteMode, RADIODAB5Base, T...> ;

  struct RADIODAB6Base {} ;

  struct DAB6 : public RegisterBase<0x40001618, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using DAB6Pack  = Register<0x40001618, 32, ReadWriteMode, RADIODAB6Base, T...> ;

  struct RADIODAB7Base {} ;

  struct DAB7 : public RegisterBase<0x4000161C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using DAB7Pack  = Register<0x4000161C, 32, ReadWriteMode, RADIODAB7Base, T...> ;

  struct RADIODAP0Base {} ;

  struct DAP0 : public RegisterBase<0x40001620, 32, ReadWriteMode>
  {
    using DAP = RADIO_DAP0_DAP_Values<RADIO::DAP0, 0, 16, ReadWriteMode, RADIODAP0Base> ;
    using FieldValues = RADIO_DAP0_DAP_Values<RADIO::DAP0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAP0Pack  = Register<0x40001620, 32, ReadWriteMode, RADIODAP0Base, T...> ;

  struct RADIODAP1Base {} ;

  struct DAP1 : public RegisterBase<0x40001624, 32, ReadWriteMode>
  {
    using DAP = RADIO_DAP1_DAP_Values<RADIO::DAP1, 0, 16, ReadWriteMode, RADIODAP1Base> ;
    using FieldValues = RADIO_DAP1_DAP_Values<RADIO::DAP1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAP1Pack  = Register<0x40001624, 32, ReadWriteMode, RADIODAP1Base, T...> ;

  struct RADIODAP2Base {} ;

  struct DAP2 : public RegisterBase<0x40001628, 32, ReadWriteMode>
  {
    using DAP = RADIO_DAP2_DAP_Values<RADIO::DAP2, 0, 16, ReadWriteMode, RADIODAP2Base> ;
    using FieldValues = RADIO_DAP2_DAP_Values<RADIO::DAP2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAP2Pack  = Register<0x40001628, 32, ReadWriteMode, RADIODAP2Base, T...> ;

  struct RADIODAP3Base {} ;

  struct DAP3 : public RegisterBase<0x4000162C, 32, ReadWriteMode>
  {
    using DAP = RADIO_DAP3_DAP_Values<RADIO::DAP3, 0, 16, ReadWriteMode, RADIODAP3Base> ;
    using FieldValues = RADIO_DAP3_DAP_Values<RADIO::DAP3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAP3Pack  = Register<0x4000162C, 32, ReadWriteMode, RADIODAP3Base, T...> ;

  struct RADIODAP4Base {} ;

  struct DAP4 : public RegisterBase<0x40001630, 32, ReadWriteMode>
  {
    using DAP = RADIO_DAP4_DAP_Values<RADIO::DAP4, 0, 16, ReadWriteMode, RADIODAP4Base> ;
    using FieldValues = RADIO_DAP4_DAP_Values<RADIO::DAP4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAP4Pack  = Register<0x40001630, 32, ReadWriteMode, RADIODAP4Base, T...> ;

  struct RADIODAP5Base {} ;

  struct DAP5 : public RegisterBase<0x40001634, 32, ReadWriteMode>
  {
    using DAP = RADIO_DAP5_DAP_Values<RADIO::DAP5, 0, 16, ReadWriteMode, RADIODAP5Base> ;
    using FieldValues = RADIO_DAP5_DAP_Values<RADIO::DAP5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAP5Pack  = Register<0x40001634, 32, ReadWriteMode, RADIODAP5Base, T...> ;

  struct RADIODAP6Base {} ;

  struct DAP6 : public RegisterBase<0x40001638, 32, ReadWriteMode>
  {
    using DAP = RADIO_DAP6_DAP_Values<RADIO::DAP6, 0, 16, ReadWriteMode, RADIODAP6Base> ;
    using FieldValues = RADIO_DAP6_DAP_Values<RADIO::DAP6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAP6Pack  = Register<0x40001638, 32, ReadWriteMode, RADIODAP6Base, T...> ;

  struct RADIODAP7Base {} ;

  struct DAP7 : public RegisterBase<0x4000163C, 32, ReadWriteMode>
  {
    using DAP = RADIO_DAP7_DAP_Values<RADIO::DAP7, 0, 16, ReadWriteMode, RADIODAP7Base> ;
    using FieldValues = RADIO_DAP7_DAP_Values<RADIO::DAP7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAP7Pack  = Register<0x4000163C, 32, ReadWriteMode, RADIODAP7Base, T...> ;

} ;

#endif //#if !defined(RADIOREGISTERS_HPP)
