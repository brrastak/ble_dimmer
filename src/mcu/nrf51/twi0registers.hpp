/*******************************************************************************
* Filename      : twi0registers.hpp
*
* Details       : Two-wire interface master 0. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(TWI0REGISTERS_HPP)
#define TWI0REGISTERS_HPP

#include "twi0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TWI0
{
  struct TWI0TASKS_STARTRXBase {} ;

  struct TASKS_STARTRX : public RegisterBase<0x40003000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTRXPack  = Register<0x40003000, 32, WriteMode, TWI0TASKS_STARTRXBase, T...> ;

  struct TWI0TASKS_STARTTXBase {} ;

  struct TASKS_STARTTX : public RegisterBase<0x40003008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTTXPack  = Register<0x40003008, 32, WriteMode, TWI0TASKS_STARTTXBase, T...> ;

  struct TWI0TASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x40003014, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x40003014, 32, WriteMode, TWI0TASKS_STOPBase, T...> ;

  struct TWI0TASKS_SUSPENDBase {} ;

  struct TASKS_SUSPEND : public RegisterBase<0x4000301C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_SUSPENDPack  = Register<0x4000301C, 32, WriteMode, TWI0TASKS_SUSPENDBase, T...> ;

  struct TWI0TASKS_RESUMEBase {} ;

  struct TASKS_RESUME : public RegisterBase<0x40003020, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_RESUMEPack  = Register<0x40003020, 32, WriteMode, TWI0TASKS_RESUMEBase, T...> ;

  struct TWI0EVENTS_STOPPEDBase {} ;

  struct EVENTS_STOPPED : public RegisterBase<0x40003104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_STOPPEDPack  = Register<0x40003104, 32, ReadWriteMode, TWI0EVENTS_STOPPEDBase, T...> ;

  struct TWI0EVENTS_RXDREADYBase {} ;

  struct EVENTS_RXDREADY : public RegisterBase<0x40003108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_RXDREADYPack  = Register<0x40003108, 32, ReadWriteMode, TWI0EVENTS_RXDREADYBase, T...> ;

  struct TWI0EVENTS_TXDSENTBase {} ;

  struct EVENTS_TXDSENT : public RegisterBase<0x4000311C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_TXDSENTPack  = Register<0x4000311C, 32, ReadWriteMode, TWI0EVENTS_TXDSENTBase, T...> ;

  struct TWI0EVENTS_ERRORBase {} ;

  struct EVENTS_ERROR : public RegisterBase<0x40003124, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_ERRORPack  = Register<0x40003124, 32, ReadWriteMode, TWI0EVENTS_ERRORBase, T...> ;

  struct TWI0EVENTS_BBBase {} ;

  struct EVENTS_BB : public RegisterBase<0x40003138, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_BBPack  = Register<0x40003138, 32, ReadWriteMode, TWI0EVENTS_BBBase, T...> ;

  struct TWI0EVENTS_SUSPENDEDBase {} ;

  struct EVENTS_SUSPENDED : public RegisterBase<0x40003148, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_SUSPENDEDPack  = Register<0x40003148, 32, ReadWriteMode, TWI0EVENTS_SUSPENDEDBase, T...> ;

  struct TWI0SHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x40003200, 32, ReadWriteMode>
  {
    using BB_SUSPEND = TWI0_SHORTS_BB_SUSPEND_Values<TWI0::SHORTS, 0, 1, ReadWriteMode, TWI0SHORTSBase> ;
    using BB_STOP = TWI0_SHORTS_BB_STOP_Values<TWI0::SHORTS, 1, 1, ReadWriteMode, TWI0SHORTSBase> ;
    using FieldValues = TWI0_SHORTS_BB_STOP_Values<TWI0::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x40003200, 32, ReadWriteMode, TWI0SHORTSBase, T...> ;

  struct TWI0INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40003304, 32, ReadWriteMode>
  {
    using STOPPED = TWI0_INTENSET_STOPPED_Values<TWI0::INTENSET, 1, 1, ReadWriteMode, TWI0INTENSETBase> ;
    using RXDREADY = TWI0_INTENSET_RXDREADY_Values<TWI0::INTENSET, 2, 1, ReadWriteMode, TWI0INTENSETBase> ;
    using TXDSENT = TWI0_INTENSET_TXDSENT_Values<TWI0::INTENSET, 7, 1, ReadWriteMode, TWI0INTENSETBase> ;
    using ERROR = TWI0_INTENSET_ERROR_Values<TWI0::INTENSET, 9, 1, ReadWriteMode, TWI0INTENSETBase> ;
    using BB = TWI0_INTENSET_BB_Values<TWI0::INTENSET, 14, 1, ReadWriteMode, TWI0INTENSETBase> ;
    using SUSPENDED = TWI0_INTENSET_SUSPENDED_Values<TWI0::INTENSET, 18, 1, ReadWriteMode, TWI0INTENSETBase> ;
    using FieldValues = TWI0_INTENSET_SUSPENDED_Values<TWI0::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40003304, 32, ReadWriteMode, TWI0INTENSETBase, T...> ;

  struct TWI0INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40003308, 32, ReadWriteMode>
  {
    using STOPPED = TWI0_INTENCLR_STOPPED_Values<TWI0::INTENCLR, 1, 1, ReadWriteMode, TWI0INTENCLRBase> ;
    using RXDREADY = TWI0_INTENCLR_RXDREADY_Values<TWI0::INTENCLR, 2, 1, ReadWriteMode, TWI0INTENCLRBase> ;
    using TXDSENT = TWI0_INTENCLR_TXDSENT_Values<TWI0::INTENCLR, 7, 1, ReadWriteMode, TWI0INTENCLRBase> ;
    using ERROR = TWI0_INTENCLR_ERROR_Values<TWI0::INTENCLR, 9, 1, ReadWriteMode, TWI0INTENCLRBase> ;
    using BB = TWI0_INTENCLR_BB_Values<TWI0::INTENCLR, 14, 1, ReadWriteMode, TWI0INTENCLRBase> ;
    using SUSPENDED = TWI0_INTENCLR_SUSPENDED_Values<TWI0::INTENCLR, 18, 1, ReadWriteMode, TWI0INTENCLRBase> ;
    using FieldValues = TWI0_INTENCLR_SUSPENDED_Values<TWI0::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40003308, 32, ReadWriteMode, TWI0INTENCLRBase, T...> ;

  struct TWI0ERRORSRCBase {} ;

  struct ERRORSRC : public RegisterBase<0x400034C4, 32, ReadWriteMode>
  {
    using OVERRUN = TWI0_ERRORSRC_OVERRUN_Values<TWI0::ERRORSRC, 0, 1, ReadWriteMode, TWI0ERRORSRCBase> ;
    using ANACK = TWI0_ERRORSRC_ANACK_Values<TWI0::ERRORSRC, 1, 1, ReadWriteMode, TWI0ERRORSRCBase> ;
    using DNACK = TWI0_ERRORSRC_DNACK_Values<TWI0::ERRORSRC, 2, 1, ReadWriteMode, TWI0ERRORSRCBase> ;
    using FieldValues = TWI0_ERRORSRC_DNACK_Values<TWI0::ERRORSRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ERRORSRCPack  = Register<0x400034C4, 32, ReadWriteMode, TWI0ERRORSRCBase, T...> ;

  struct TWI0ENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x40003500, 32, ReadWriteMode>
  {
    using ENABLEField = TWI0_ENABLE_ENABLE_Values<TWI0::ENABLE, 0, 3, ReadWriteMode, TWI0ENABLEBase> ;
    using FieldValues = TWI0_ENABLE_ENABLE_Values<TWI0::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x40003500, 32, ReadWriteMode, TWI0ENABLEBase, T...> ;

  struct TWI0PSELSCLBase {} ;

  struct PSELSCL : public RegisterBase<0x40003508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELSCLPack  = Register<0x40003508, 32, ReadWriteMode, TWI0PSELSCLBase, T...> ;

  struct TWI0PSELSDABase {} ;

  struct PSELSDA : public RegisterBase<0x4000350C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELSDAPack  = Register<0x4000350C, 32, ReadWriteMode, TWI0PSELSDABase, T...> ;

  struct TWI0RXDBase {} ;

  struct RXD : public RegisterBase<0x40003518, 32, ReadMode>
  {
    using RXDField = TWI0_RXD_RXD_Values<TWI0::RXD, 0, 8, ReadMode, TWI0RXDBase> ;
    using FieldValues = TWI0_RXD_RXD_Values<TWI0::RXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDPack  = Register<0x40003518, 32, ReadMode, TWI0RXDBase, T...> ;

  struct TWI0TXDBase {} ;

  struct TXD : public RegisterBase<0x4000351C, 32, ReadWriteMode>
  {
    using TXDField = TWI0_TXD_TXD_Values<TWI0::TXD, 0, 8, ReadWriteMode, TWI0TXDBase> ;
    using FieldValues = TWI0_TXD_TXD_Values<TWI0::TXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDPack  = Register<0x4000351C, 32, ReadWriteMode, TWI0TXDBase, T...> ;

  struct TWI0FREQUENCYBase {} ;

  struct FREQUENCY : public RegisterBase<0x40003524, 32, ReadWriteMode>
  {
    using FREQUENCYField = TWI0_FREQUENCY_FREQUENCY_Values<TWI0::FREQUENCY, 0, 32, ReadWriteMode, TWI0FREQUENCYBase> ;
    using FieldValues = TWI0_FREQUENCY_FREQUENCY_Values<TWI0::FREQUENCY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FREQUENCYPack  = Register<0x40003524, 32, ReadWriteMode, TWI0FREQUENCYBase, T...> ;

  struct TWI0ADDRESSBase {} ;

  struct ADDRESS : public RegisterBase<0x40003588, 32, ReadWriteMode>
  {
    using ADDRESSField = TWI0_ADDRESS_ADDRESS_Values<TWI0::ADDRESS, 0, 7, ReadWriteMode, TWI0ADDRESSBase> ;
    using FieldValues = TWI0_ADDRESS_ADDRESS_Values<TWI0::ADDRESS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDRESSPack  = Register<0x40003588, 32, ReadWriteMode, TWI0ADDRESSBase, T...> ;

  struct TWI0POWERBase {} ;

  struct POWER : public RegisterBase<0x40003FFC, 32, ReadWriteMode>
  {
    using POWERField = TWI0_POWER_POWER_Values<TWI0::POWER, 0, 1, ReadWriteMode, TWI0POWERBase> ;
    using FieldValues = TWI0_POWER_POWER_Values<TWI0::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40003FFC, 32, ReadWriteMode, TWI0POWERBase, T...> ;

} ;

#endif //#if !defined(TWI0REGISTERS_HPP)
