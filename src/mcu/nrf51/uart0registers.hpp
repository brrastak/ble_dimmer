/*******************************************************************************
* Filename      : uart0registers.hpp
*
* Details       : Universal Asynchronous Receiver/Transmitter. This header file
*                 is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(UART0REGISTERS_HPP)
#define UART0REGISTERS_HPP

#include "uart0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART0
{
  struct UART0TASKS_STARTRXBase {} ;

  struct TASKS_STARTRX : public RegisterBase<0x40002000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTRXPack  = Register<0x40002000, 32, WriteMode, UART0TASKS_STARTRXBase, T...> ;

  struct UART0TASKS_STOPRXBase {} ;

  struct TASKS_STOPRX : public RegisterBase<0x40002004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPRXPack  = Register<0x40002004, 32, WriteMode, UART0TASKS_STOPRXBase, T...> ;

  struct UART0TASKS_STARTTXBase {} ;

  struct TASKS_STARTTX : public RegisterBase<0x40002008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTTXPack  = Register<0x40002008, 32, WriteMode, UART0TASKS_STARTTXBase, T...> ;

  struct UART0TASKS_STOPTXBase {} ;

  struct TASKS_STOPTX : public RegisterBase<0x4000200C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPTXPack  = Register<0x4000200C, 32, WriteMode, UART0TASKS_STOPTXBase, T...> ;

  struct UART0TASKS_SUSPENDBase {} ;

  struct TASKS_SUSPEND : public RegisterBase<0x4000201C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_SUSPENDPack  = Register<0x4000201C, 32, WriteMode, UART0TASKS_SUSPENDBase, T...> ;

  struct UART0EVENTS_CTSBase {} ;

  struct EVENTS_CTS : public RegisterBase<0x40002100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_CTSPack  = Register<0x40002100, 32, ReadWriteMode, UART0EVENTS_CTSBase, T...> ;

  struct UART0EVENTS_NCTSBase {} ;

  struct EVENTS_NCTS : public RegisterBase<0x40002104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_NCTSPack  = Register<0x40002104, 32, ReadWriteMode, UART0EVENTS_NCTSBase, T...> ;

  struct UART0EVENTS_RXDRDYBase {} ;

  struct EVENTS_RXDRDY : public RegisterBase<0x40002108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_RXDRDYPack  = Register<0x40002108, 32, ReadWriteMode, UART0EVENTS_RXDRDYBase, T...> ;

  struct UART0EVENTS_TXDRDYBase {} ;

  struct EVENTS_TXDRDY : public RegisterBase<0x4000211C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_TXDRDYPack  = Register<0x4000211C, 32, ReadWriteMode, UART0EVENTS_TXDRDYBase, T...> ;

  struct UART0EVENTS_ERRORBase {} ;

  struct EVENTS_ERROR : public RegisterBase<0x40002124, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ERRORPack  = Register<0x40002124, 32, ReadWriteMode, UART0EVENTS_ERRORBase, T...> ;

  struct UART0EVENTS_RXTOBase {} ;

  struct EVENTS_RXTO : public RegisterBase<0x40002144, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_RXTOPack  = Register<0x40002144, 32, ReadWriteMode, UART0EVENTS_RXTOBase, T...> ;

  struct UART0SHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x40002200, 32, ReadWriteMode>
  {
    using CTS_STARTRX = UART0_SHORTS_CTS_STARTRX_Values<UART0::SHORTS, 3, 1, ReadWriteMode, UART0SHORTSBase> ;
    using NCTS_STOPRX = UART0_SHORTS_NCTS_STOPRX_Values<UART0::SHORTS, 4, 1, ReadWriteMode, UART0SHORTSBase> ;
    using FieldValues = UART0_SHORTS_NCTS_STOPRX_Values<UART0::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x40002200, 32, ReadWriteMode, UART0SHORTSBase, T...> ;

  struct UART0INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40002304, 32, ReadWriteMode>
  {
    using CTS = UART0_INTENSET_CTS_Values<UART0::INTENSET, 0, 1, ReadWriteMode, UART0INTENSETBase> ;
    using NCTS = UART0_INTENSET_NCTS_Values<UART0::INTENSET, 1, 1, ReadWriteMode, UART0INTENSETBase> ;
    using RXDRDY = UART0_INTENSET_RXDRDY_Values<UART0::INTENSET, 2, 1, ReadWriteMode, UART0INTENSETBase> ;
    using TXDRDY = UART0_INTENSET_TXDRDY_Values<UART0::INTENSET, 7, 1, ReadWriteMode, UART0INTENSETBase> ;
    using ERROR = UART0_INTENSET_ERROR_Values<UART0::INTENSET, 9, 1, ReadWriteMode, UART0INTENSETBase> ;
    using RXTO = UART0_INTENSET_RXTO_Values<UART0::INTENSET, 17, 1, ReadWriteMode, UART0INTENSETBase> ;
    using FieldValues = UART0_INTENSET_RXTO_Values<UART0::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40002304, 32, ReadWriteMode, UART0INTENSETBase, T...> ;

  struct UART0INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40002308, 32, ReadWriteMode>
  {
    using CTS = UART0_INTENCLR_CTS_Values<UART0::INTENCLR, 0, 1, ReadWriteMode, UART0INTENCLRBase> ;
    using NCTS = UART0_INTENCLR_NCTS_Values<UART0::INTENCLR, 1, 1, ReadWriteMode, UART0INTENCLRBase> ;
    using RXDRDY = UART0_INTENCLR_RXDRDY_Values<UART0::INTENCLR, 2, 1, ReadWriteMode, UART0INTENCLRBase> ;
    using TXDRDY = UART0_INTENCLR_TXDRDY_Values<UART0::INTENCLR, 7, 1, ReadWriteMode, UART0INTENCLRBase> ;
    using ERROR = UART0_INTENCLR_ERROR_Values<UART0::INTENCLR, 9, 1, ReadWriteMode, UART0INTENCLRBase> ;
    using RXTO = UART0_INTENCLR_RXTO_Values<UART0::INTENCLR, 17, 1, ReadWriteMode, UART0INTENCLRBase> ;
    using FieldValues = UART0_INTENCLR_RXTO_Values<UART0::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40002308, 32, ReadWriteMode, UART0INTENCLRBase, T...> ;

  struct UART0ERRORSRCBase {} ;

  struct ERRORSRC : public RegisterBase<0x40002480, 32, ReadWriteMode>
  {
    using OVERRUN = UART0_ERRORSRC_OVERRUN_Values<UART0::ERRORSRC, 0, 1, ReadWriteMode, UART0ERRORSRCBase> ;
    using PARITY = UART0_ERRORSRC_PARITY_Values<UART0::ERRORSRC, 1, 1, ReadWriteMode, UART0ERRORSRCBase> ;
    using FRAMING = UART0_ERRORSRC_FRAMING_Values<UART0::ERRORSRC, 2, 1, ReadWriteMode, UART0ERRORSRCBase> ;
    using BREAK = UART0_ERRORSRC_BREAK_Values<UART0::ERRORSRC, 3, 1, ReadWriteMode, UART0ERRORSRCBase> ;
    using FieldValues = UART0_ERRORSRC_BREAK_Values<UART0::ERRORSRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ERRORSRCPack  = Register<0x40002480, 32, ReadWriteMode, UART0ERRORSRCBase, T...> ;

  struct UART0ENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x40002500, 32, ReadWriteMode>
  {
    using ENABLEField = UART0_ENABLE_ENABLE_Values<UART0::ENABLE, 0, 3, ReadWriteMode, UART0ENABLEBase> ;
    using FieldValues = UART0_ENABLE_ENABLE_Values<UART0::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x40002500, 32, ReadWriteMode, UART0ENABLEBase, T...> ;

  struct UART0PSELRTSBase {} ;

  struct PSELRTS : public RegisterBase<0x40002508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELRTSPack  = Register<0x40002508, 32, ReadWriteMode, UART0PSELRTSBase, T...> ;

  struct UART0PSELTXDBase {} ;

  struct PSELTXD : public RegisterBase<0x4000250C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELTXDPack  = Register<0x4000250C, 32, ReadWriteMode, UART0PSELTXDBase, T...> ;

  struct UART0PSELCTSBase {} ;

  struct PSELCTS : public RegisterBase<0x40002510, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELCTSPack  = Register<0x40002510, 32, ReadWriteMode, UART0PSELCTSBase, T...> ;

  struct UART0PSELRXDBase {} ;

  struct PSELRXD : public RegisterBase<0x40002514, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELRXDPack  = Register<0x40002514, 32, ReadWriteMode, UART0PSELRXDBase, T...> ;

  struct UART0RXDBase {} ;

  struct RXD : public RegisterBase<0x40002518, 32, ReadMode>
  {
    using RXDField = UART0_RXD_RXD_Values<UART0::RXD, 0, 8, ReadMode, UART0RXDBase> ;
    using FieldValues = UART0_RXD_RXD_Values<UART0::RXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDPack  = Register<0x40002518, 32, ReadMode, UART0RXDBase, T...> ;

  struct UART0TXDBase {} ;

  struct TXD : public RegisterBase<0x4000251C, 32, WriteMode>
  {
    using TXDField = UART0_TXD_TXD_Values<UART0::TXD, 0, 8, WriteMode, UART0TXDBase> ;
    using FieldValues = UART0_TXD_TXD_Values<UART0::TXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDPack  = Register<0x4000251C, 32, WriteMode, UART0TXDBase, T...> ;

  struct UART0BAUDRATEBase {} ;

  struct BAUDRATE : public RegisterBase<0x40002524, 32, ReadWriteMode>
  {
    using BAUDRATEField = UART0_BAUDRATE_BAUDRATE_Values<UART0::BAUDRATE, 0, 32, ReadWriteMode, UART0BAUDRATEBase> ;
    using FieldValues = UART0_BAUDRATE_BAUDRATE_Values<UART0::BAUDRATE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BAUDRATEPack  = Register<0x40002524, 32, ReadWriteMode, UART0BAUDRATEBase, T...> ;

  struct UART0CONFIGBase {} ;

  struct CONFIG : public RegisterBase<0x4000256C, 32, ReadWriteMode>
  {
    using HWFC = UART0_CONFIG_HWFC_Values<UART0::CONFIG, 0, 1, ReadWriteMode, UART0CONFIGBase> ;
    using PARITY = UART0_CONFIG_PARITY_Values<UART0::CONFIG, 1, 3, ReadWriteMode, UART0CONFIGBase> ;
    using FieldValues = UART0_CONFIG_PARITY_Values<UART0::CONFIG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIGPack  = Register<0x4000256C, 32, ReadWriteMode, UART0CONFIGBase, T...> ;

  struct UART0POWERBase {} ;

  struct POWER : public RegisterBase<0x40002FFC, 32, ReadWriteMode>
  {
    using POWERField = UART0_POWER_POWER_Values<UART0::POWER, 0, 1, ReadWriteMode, UART0POWERBase> ;
    using FieldValues = UART0_POWER_POWER_Values<UART0::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40002FFC, 32, ReadWriteMode, UART0POWERBase, T...> ;

} ;

#endif //#if !defined(UART0REGISTERS_HPP)
