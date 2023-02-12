/*******************************************************************************
* Filename      : spis1registers.hpp
*
* Details       : SPI slave 1. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(SPIS1REGISTERS_HPP)
#define SPIS1REGISTERS_HPP

#include "spis1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPIS1
{
  struct SPIS1TASKS_ACQUIREBase {} ;

  struct TASKS_ACQUIRE : public RegisterBase<0x40004024, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_ACQUIREPack  = Register<0x40004024, 32, WriteMode, SPIS1TASKS_ACQUIREBase, T...> ;

  struct SPIS1TASKS_RELEASEBase {} ;

  struct TASKS_RELEASE : public RegisterBase<0x40004028, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_RELEASEPack  = Register<0x40004028, 32, WriteMode, SPIS1TASKS_RELEASEBase, T...> ;

  struct SPIS1EVENTS_ENDBase {} ;

  struct EVENTS_END : public RegisterBase<0x40004104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ENDPack  = Register<0x40004104, 32, ReadWriteMode, SPIS1EVENTS_ENDBase, T...> ;

  struct SPIS1EVENTS_ENDRXBase {} ;

  struct EVENTS_ENDRX : public RegisterBase<0x40004110, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ENDRXPack  = Register<0x40004110, 32, ReadWriteMode, SPIS1EVENTS_ENDRXBase, T...> ;

  struct SPIS1EVENTS_ACQUIREDBase {} ;

  struct EVENTS_ACQUIRED : public RegisterBase<0x40004128, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ACQUIREDPack  = Register<0x40004128, 32, ReadWriteMode, SPIS1EVENTS_ACQUIREDBase, T...> ;

  struct SPIS1SHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x40004200, 32, ReadWriteMode>
  {
    using END_ACQUIRE = SPIS1_SHORTS_END_ACQUIRE_Values<SPIS1::SHORTS, 2, 1, ReadWriteMode, SPIS1SHORTSBase> ;
    using FieldValues = SPIS1_SHORTS_END_ACQUIRE_Values<SPIS1::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x40004200, 32, ReadWriteMode, SPIS1SHORTSBase, T...> ;

  struct SPIS1INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40004304, 32, ReadWriteMode>
  {
    using END = SPIS1_INTENSET_END_Values<SPIS1::INTENSET, 1, 1, ReadWriteMode, SPIS1INTENSETBase> ;
    using ENDRX = SPIS1_INTENSET_ENDRX_Values<SPIS1::INTENSET, 4, 1, ReadWriteMode, SPIS1INTENSETBase> ;
    using ACQUIRED = SPIS1_INTENSET_ACQUIRED_Values<SPIS1::INTENSET, 10, 1, ReadWriteMode, SPIS1INTENSETBase> ;
    using FieldValues = SPIS1_INTENSET_ACQUIRED_Values<SPIS1::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40004304, 32, ReadWriteMode, SPIS1INTENSETBase, T...> ;

  struct SPIS1INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40004308, 32, ReadWriteMode>
  {
    using END = SPIS1_INTENCLR_END_Values<SPIS1::INTENCLR, 1, 1, ReadWriteMode, SPIS1INTENCLRBase> ;
    using ENDRX = SPIS1_INTENCLR_ENDRX_Values<SPIS1::INTENCLR, 4, 1, ReadWriteMode, SPIS1INTENCLRBase> ;
    using ACQUIRED = SPIS1_INTENCLR_ACQUIRED_Values<SPIS1::INTENCLR, 10, 1, ReadWriteMode, SPIS1INTENCLRBase> ;
    using FieldValues = SPIS1_INTENCLR_ACQUIRED_Values<SPIS1::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40004308, 32, ReadWriteMode, SPIS1INTENCLRBase, T...> ;

  struct SPIS1SEMSTATBase {} ;

  struct SEMSTAT : public RegisterBase<0x40004400, 32, ReadMode>
  {
    using SEMSTATField = SPIS1_SEMSTAT_SEMSTAT_Values<SPIS1::SEMSTAT, 0, 2, ReadMode, SPIS1SEMSTATBase> ;
    using FieldValues = SPIS1_SEMSTAT_SEMSTAT_Values<SPIS1::SEMSTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SEMSTATPack  = Register<0x40004400, 32, ReadMode, SPIS1SEMSTATBase, T...> ;

  struct SPIS1STATUSBase {} ;

  struct STATUS : public RegisterBase<0x40004440, 32, ReadWriteMode>
  {
    using OVERREAD = SPIS1_STATUS_OVERREAD_Values<SPIS1::STATUS, 0, 1, ReadWriteMode, SPIS1STATUSBase> ;
    using OVERFLOW = SPIS1_STATUS_OVERFLOW_Values<SPIS1::STATUS, 1, 1, ReadWriteMode, SPIS1STATUSBase> ;
    using FieldValues = SPIS1_STATUS_OVERFLOW_Values<SPIS1::STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATUSPack  = Register<0x40004440, 32, ReadWriteMode, SPIS1STATUSBase, T...> ;

  struct SPIS1ENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x40004500, 32, ReadWriteMode>
  {
    using ENABLEField = SPIS1_ENABLE_ENABLE_Values<SPIS1::ENABLE, 0, 3, ReadWriteMode, SPIS1ENABLEBase> ;
    using FieldValues = SPIS1_ENABLE_ENABLE_Values<SPIS1::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x40004500, 32, ReadWriteMode, SPIS1ENABLEBase, T...> ;

  struct SPIS1PSELSCKBase {} ;

  struct PSELSCK : public RegisterBase<0x40004508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELSCKPack  = Register<0x40004508, 32, ReadWriteMode, SPIS1PSELSCKBase, T...> ;

  struct SPIS1PSELMISOBase {} ;

  struct PSELMISO : public RegisterBase<0x4000450C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELMISOPack  = Register<0x4000450C, 32, ReadWriteMode, SPIS1PSELMISOBase, T...> ;

  struct SPIS1PSELMOSIBase {} ;

  struct PSELMOSI : public RegisterBase<0x40004510, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELMOSIPack  = Register<0x40004510, 32, ReadWriteMode, SPIS1PSELMOSIBase, T...> ;

  struct SPIS1PSELCSNBase {} ;

  struct PSELCSN : public RegisterBase<0x40004514, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELCSNPack  = Register<0x40004514, 32, ReadWriteMode, SPIS1PSELCSNBase, T...> ;

  struct SPIS1RXDPTRBase {} ;

  struct RXDPTR : public RegisterBase<0x40004534, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using RXDPTRPack  = Register<0x40004534, 32, ReadWriteMode, SPIS1RXDPTRBase, T...> ;

  struct SPIS1MAXRXBase {} ;

  struct MAXRX : public RegisterBase<0x40004538, 32, ReadWriteMode>
  {
    using MAXRXField = SPIS1_MAXRX_MAXRX_Values<SPIS1::MAXRX, 0, 8, ReadWriteMode, SPIS1MAXRXBase> ;
    using FieldValues = SPIS1_MAXRX_MAXRX_Values<SPIS1::MAXRX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MAXRXPack  = Register<0x40004538, 32, ReadWriteMode, SPIS1MAXRXBase, T...> ;

  struct SPIS1AMOUNTRXBase {} ;

  struct AMOUNTRX : public RegisterBase<0x4000453C, 32, ReadMode>
  {
    using AMOUNTRXField = SPIS1_AMOUNTRX_AMOUNTRX_Values<SPIS1::AMOUNTRX, 0, 8, ReadMode, SPIS1AMOUNTRXBase> ;
    using FieldValues = SPIS1_AMOUNTRX_AMOUNTRX_Values<SPIS1::AMOUNTRX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AMOUNTRXPack  = Register<0x4000453C, 32, ReadMode, SPIS1AMOUNTRXBase, T...> ;

  struct SPIS1TXDPTRBase {} ;

  struct TXDPTR : public RegisterBase<0x40004544, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using TXDPTRPack  = Register<0x40004544, 32, ReadWriteMode, SPIS1TXDPTRBase, T...> ;

  struct SPIS1MAXTXBase {} ;

  struct MAXTX : public RegisterBase<0x40004548, 32, ReadWriteMode>
  {
    using MAXTXField = SPIS1_MAXTX_MAXTX_Values<SPIS1::MAXTX, 0, 8, ReadWriteMode, SPIS1MAXTXBase> ;
    using FieldValues = SPIS1_MAXTX_MAXTX_Values<SPIS1::MAXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MAXTXPack  = Register<0x40004548, 32, ReadWriteMode, SPIS1MAXTXBase, T...> ;

  struct SPIS1AMOUNTTXBase {} ;

  struct AMOUNTTX : public RegisterBase<0x4000454C, 32, ReadMode>
  {
    using AMOUNTTXField = SPIS1_AMOUNTTX_AMOUNTTX_Values<SPIS1::AMOUNTTX, 0, 8, ReadMode, SPIS1AMOUNTTXBase> ;
    using FieldValues = SPIS1_AMOUNTTX_AMOUNTTX_Values<SPIS1::AMOUNTTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AMOUNTTXPack  = Register<0x4000454C, 32, ReadMode, SPIS1AMOUNTTXBase, T...> ;

  struct SPIS1CONFIGBase {} ;

  struct CONFIG : public RegisterBase<0x40004554, 32, ReadWriteMode>
  {
    using ORDER = SPIS1_CONFIG_ORDER_Values<SPIS1::CONFIG, 0, 1, ReadWriteMode, SPIS1CONFIGBase> ;
    using CPHA = SPIS1_CONFIG_CPHA_Values<SPIS1::CONFIG, 1, 1, ReadWriteMode, SPIS1CONFIGBase> ;
    using CPOL = SPIS1_CONFIG_CPOL_Values<SPIS1::CONFIG, 2, 1, ReadWriteMode, SPIS1CONFIGBase> ;
    using FieldValues = SPIS1_CONFIG_CPOL_Values<SPIS1::CONFIG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIGPack  = Register<0x40004554, 32, ReadWriteMode, SPIS1CONFIGBase, T...> ;

  struct SPIS1DEFBase {} ;

  struct DEF : public RegisterBase<0x4000455C, 32, ReadWriteMode>
  {
    using DEFField = SPIS1_DEF_DEF_Values<SPIS1::DEF, 0, 8, ReadWriteMode, SPIS1DEFBase> ;
    using FieldValues = SPIS1_DEF_DEF_Values<SPIS1::DEF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DEFPack  = Register<0x4000455C, 32, ReadWriteMode, SPIS1DEFBase, T...> ;

  struct SPIS1ORCBase {} ;

  struct ORC : public RegisterBase<0x400045C0, 32, ReadWriteMode>
  {
    using ORCField = SPIS1_ORC_ORC_Values<SPIS1::ORC, 0, 8, ReadWriteMode, SPIS1ORCBase> ;
    using FieldValues = SPIS1_ORC_ORC_Values<SPIS1::ORC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ORCPack  = Register<0x400045C0, 32, ReadWriteMode, SPIS1ORCBase, T...> ;

  struct SPIS1POWERBase {} ;

  struct POWER : public RegisterBase<0x40004FFC, 32, ReadWriteMode>
  {
    using POWERField = SPIS1_POWER_POWER_Values<SPIS1::POWER, 0, 1, ReadWriteMode, SPIS1POWERBase> ;
    using FieldValues = SPIS1_POWER_POWER_Values<SPIS1::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40004FFC, 32, ReadWriteMode, SPIS1POWERBase, T...> ;

} ;

#endif //#if !defined(SPIS1REGISTERS_HPP)
