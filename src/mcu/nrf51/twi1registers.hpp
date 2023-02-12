/*******************************************************************************
* Filename      : twi1registers.hpp
*
* Details       : Two-wire interface master 1. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(TWI1REGISTERS_HPP)
#define TWI1REGISTERS_HPP

#include "twi1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TWI1
{
  struct TWI1TASKS_STARTRXBase {} ;

  struct TASKS_STARTRX : public RegisterBase<0x40004000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTRXPack  = Register<0x40004000, 32, WriteMode, TWI1TASKS_STARTRXBase, T...> ;

  struct TWI1TASKS_STARTTXBase {} ;

  struct TASKS_STARTTX : public RegisterBase<0x40004008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTTXPack  = Register<0x40004008, 32, WriteMode, TWI1TASKS_STARTTXBase, T...> ;

  struct TWI1TASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x40004014, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x40004014, 32, WriteMode, TWI1TASKS_STOPBase, T...> ;

  struct TWI1TASKS_SUSPENDBase {} ;

  struct TASKS_SUSPEND : public RegisterBase<0x4000401C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_SUSPENDPack  = Register<0x4000401C, 32, WriteMode, TWI1TASKS_SUSPENDBase, T...> ;

  struct TWI1TASKS_RESUMEBase {} ;

  struct TASKS_RESUME : public RegisterBase<0x40004020, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_RESUMEPack  = Register<0x40004020, 32, WriteMode, TWI1TASKS_RESUMEBase, T...> ;

  struct TWI1EVENTS_STOPPEDBase {} ;

  struct EVENTS_STOPPED : public RegisterBase<0x40004104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_STOPPEDPack  = Register<0x40004104, 32, ReadWriteMode, TWI1EVENTS_STOPPEDBase, T...> ;

  struct TWI1EVENTS_RXDREADYBase {} ;

  struct EVENTS_RXDREADY : public RegisterBase<0x40004108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_RXDREADYPack  = Register<0x40004108, 32, ReadWriteMode, TWI1EVENTS_RXDREADYBase, T...> ;

  struct TWI1EVENTS_TXDSENTBase {} ;

  struct EVENTS_TXDSENT : public RegisterBase<0x4000411C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_TXDSENTPack  = Register<0x4000411C, 32, ReadWriteMode, TWI1EVENTS_TXDSENTBase, T...> ;

  struct TWI1EVENTS_ERRORBase {} ;

  struct EVENTS_ERROR : public RegisterBase<0x40004124, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ERRORPack  = Register<0x40004124, 32, ReadWriteMode, TWI1EVENTS_ERRORBase, T...> ;

  struct TWI1EVENTS_BBBase {} ;

  struct EVENTS_BB : public RegisterBase<0x40004138, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_BBPack  = Register<0x40004138, 32, ReadWriteMode, TWI1EVENTS_BBBase, T...> ;

  struct TWI1EVENTS_SUSPENDEDBase {} ;

  struct EVENTS_SUSPENDED : public RegisterBase<0x40004148, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_SUSPENDEDPack  = Register<0x40004148, 32, ReadWriteMode, TWI1EVENTS_SUSPENDEDBase, T...> ;

  struct TWI1SHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x40004200, 32, ReadWriteMode>
  {
    using BB_SUSPEND = TWI1_SHORTS_BB_SUSPEND_Values<TWI1::SHORTS, 0, 1, ReadWriteMode, TWI1SHORTSBase> ;
    using BB_STOP = TWI1_SHORTS_BB_STOP_Values<TWI1::SHORTS, 1, 1, ReadWriteMode, TWI1SHORTSBase> ;
    using FieldValues = TWI1_SHORTS_BB_STOP_Values<TWI1::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x40004200, 32, ReadWriteMode, TWI1SHORTSBase, T...> ;

  struct TWI1INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40004304, 32, ReadWriteMode>
  {
    using STOPPED = TWI1_INTENSET_STOPPED_Values<TWI1::INTENSET, 1, 1, ReadWriteMode, TWI1INTENSETBase> ;
    using RXDREADY = TWI1_INTENSET_RXDREADY_Values<TWI1::INTENSET, 2, 1, ReadWriteMode, TWI1INTENSETBase> ;
    using TXDSENT = TWI1_INTENSET_TXDSENT_Values<TWI1::INTENSET, 7, 1, ReadWriteMode, TWI1INTENSETBase> ;
    using ERROR = TWI1_INTENSET_ERROR_Values<TWI1::INTENSET, 9, 1, ReadWriteMode, TWI1INTENSETBase> ;
    using BB = TWI1_INTENSET_BB_Values<TWI1::INTENSET, 14, 1, ReadWriteMode, TWI1INTENSETBase> ;
    using SUSPENDED = TWI1_INTENSET_SUSPENDED_Values<TWI1::INTENSET, 18, 1, ReadWriteMode, TWI1INTENSETBase> ;
    using FieldValues = TWI1_INTENSET_SUSPENDED_Values<TWI1::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40004304, 32, ReadWriteMode, TWI1INTENSETBase, T...> ;

  struct TWI1INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40004308, 32, ReadWriteMode>
  {
    using STOPPED = TWI1_INTENCLR_STOPPED_Values<TWI1::INTENCLR, 1, 1, ReadWriteMode, TWI1INTENCLRBase> ;
    using RXDREADY = TWI1_INTENCLR_RXDREADY_Values<TWI1::INTENCLR, 2, 1, ReadWriteMode, TWI1INTENCLRBase> ;
    using TXDSENT = TWI1_INTENCLR_TXDSENT_Values<TWI1::INTENCLR, 7, 1, ReadWriteMode, TWI1INTENCLRBase> ;
    using ERROR = TWI1_INTENCLR_ERROR_Values<TWI1::INTENCLR, 9, 1, ReadWriteMode, TWI1INTENCLRBase> ;
    using BB = TWI1_INTENCLR_BB_Values<TWI1::INTENCLR, 14, 1, ReadWriteMode, TWI1INTENCLRBase> ;
    using SUSPENDED = TWI1_INTENCLR_SUSPENDED_Values<TWI1::INTENCLR, 18, 1, ReadWriteMode, TWI1INTENCLRBase> ;
    using FieldValues = TWI1_INTENCLR_SUSPENDED_Values<TWI1::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40004308, 32, ReadWriteMode, TWI1INTENCLRBase, T...> ;

  struct TWI1ERRORSRCBase {} ;

  struct ERRORSRC : public RegisterBase<0x400044C4, 32, ReadWriteMode>
  {
    using OVERRUN = TWI1_ERRORSRC_OVERRUN_Values<TWI1::ERRORSRC, 0, 1, ReadWriteMode, TWI1ERRORSRCBase> ;
    using ANACK = TWI1_ERRORSRC_ANACK_Values<TWI1::ERRORSRC, 1, 1, ReadWriteMode, TWI1ERRORSRCBase> ;
    using DNACK = TWI1_ERRORSRC_DNACK_Values<TWI1::ERRORSRC, 2, 1, ReadWriteMode, TWI1ERRORSRCBase> ;
    using FieldValues = TWI1_ERRORSRC_DNACK_Values<TWI1::ERRORSRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ERRORSRCPack  = Register<0x400044C4, 32, ReadWriteMode, TWI1ERRORSRCBase, T...> ;

  struct TWI1ENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x40004500, 32, ReadWriteMode>
  {
    using ENABLEField = TWI1_ENABLE_ENABLE_Values<TWI1::ENABLE, 0, 3, ReadWriteMode, TWI1ENABLEBase> ;
    using FieldValues = TWI1_ENABLE_ENABLE_Values<TWI1::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x40004500, 32, ReadWriteMode, TWI1ENABLEBase, T...> ;

  struct TWI1PSELSCLBase {} ;

  struct PSELSCL : public RegisterBase<0x40004508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELSCLPack  = Register<0x40004508, 32, ReadWriteMode, TWI1PSELSCLBase, T...> ;

  struct TWI1PSELSDABase {} ;

  struct PSELSDA : public RegisterBase<0x4000450C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELSDAPack  = Register<0x4000450C, 32, ReadWriteMode, TWI1PSELSDABase, T...> ;

  struct TWI1RXDBase {} ;

  struct RXD : public RegisterBase<0x40004518, 32, ReadMode>
  {
    using RXDField = TWI1_RXD_RXD_Values<TWI1::RXD, 0, 8, ReadMode, TWI1RXDBase> ;
    using FieldValues = TWI1_RXD_RXD_Values<TWI1::RXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDPack  = Register<0x40004518, 32, ReadMode, TWI1RXDBase, T...> ;

  struct TWI1TXDBase {} ;

  struct TXD : public RegisterBase<0x4000451C, 32, ReadWriteMode>
  {
    using TXDField = TWI1_TXD_TXD_Values<TWI1::TXD, 0, 8, ReadWriteMode, TWI1TXDBase> ;
    using FieldValues = TWI1_TXD_TXD_Values<TWI1::TXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDPack  = Register<0x4000451C, 32, ReadWriteMode, TWI1TXDBase, T...> ;

  struct TWI1FREQUENCYBase {} ;

  struct FREQUENCY : public RegisterBase<0x40004524, 32, ReadWriteMode>
  {
    using FREQUENCYField = TWI1_FREQUENCY_FREQUENCY_Values<TWI1::FREQUENCY, 0, 32, ReadWriteMode, TWI1FREQUENCYBase> ;
    using FieldValues = TWI1_FREQUENCY_FREQUENCY_Values<TWI1::FREQUENCY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FREQUENCYPack  = Register<0x40004524, 32, ReadWriteMode, TWI1FREQUENCYBase, T...> ;

  struct TWI1ADDRESSBase {} ;

  struct ADDRESS : public RegisterBase<0x40004588, 32, ReadWriteMode>
  {
    using ADDRESSField = TWI1_ADDRESS_ADDRESS_Values<TWI1::ADDRESS, 0, 7, ReadWriteMode, TWI1ADDRESSBase> ;
    using FieldValues = TWI1_ADDRESS_ADDRESS_Values<TWI1::ADDRESS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDRESSPack  = Register<0x40004588, 32, ReadWriteMode, TWI1ADDRESSBase, T...> ;

  struct TWI1POWERBase {} ;

  struct POWER : public RegisterBase<0x40004FFC, 32, ReadWriteMode>
  {
    using POWERField = TWI1_POWER_POWER_Values<TWI1::POWER, 0, 1, ReadWriteMode, TWI1POWERBase> ;
    using FieldValues = TWI1_POWER_POWER_Values<TWI1::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40004FFC, 32, ReadWriteMode, TWI1POWERBase, T...> ;

} ;

#endif //#if !defined(TWI1REGISTERS_HPP)
