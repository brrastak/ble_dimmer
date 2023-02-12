/*******************************************************************************
* Filename      : spi0registers.hpp
*
* Details       : SPI master 0. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(SPI0REGISTERS_HPP)
#define SPI0REGISTERS_HPP

#include "spi0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI0
{
  struct SPI0EVENTS_READYBase {} ;

  struct EVENTS_READY : public RegisterBase<0x40003108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_READYPack  = Register<0x40003108, 32, ReadWriteMode, SPI0EVENTS_READYBase, T...> ;

  struct SPI0INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40003304, 32, ReadWriteMode>
  {
    using READY = SPI0_INTENSET_READY_Values<SPI0::INTENSET, 2, 1, ReadWriteMode, SPI0INTENSETBase> ;
    using FieldValues = SPI0_INTENSET_READY_Values<SPI0::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40003304, 32, ReadWriteMode, SPI0INTENSETBase, T...> ;

  struct SPI0INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40003308, 32, ReadWriteMode>
  {
    using READY = SPI0_INTENCLR_READY_Values<SPI0::INTENCLR, 2, 1, ReadWriteMode, SPI0INTENCLRBase> ;
    using FieldValues = SPI0_INTENCLR_READY_Values<SPI0::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40003308, 32, ReadWriteMode, SPI0INTENCLRBase, T...> ;

  struct SPI0ENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x40003500, 32, ReadWriteMode>
  {
    using ENABLEField = SPI0_ENABLE_ENABLE_Values<SPI0::ENABLE, 0, 3, ReadWriteMode, SPI0ENABLEBase> ;
    using FieldValues = SPI0_ENABLE_ENABLE_Values<SPI0::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x40003500, 32, ReadWriteMode, SPI0ENABLEBase, T...> ;

  struct SPI0PSELSCKBase {} ;

  struct PSELSCK : public RegisterBase<0x40003508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELSCKPack  = Register<0x40003508, 32, ReadWriteMode, SPI0PSELSCKBase, T...> ;

  struct SPI0PSELMOSIBase {} ;

  struct PSELMOSI : public RegisterBase<0x4000350C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELMOSIPack  = Register<0x4000350C, 32, ReadWriteMode, SPI0PSELMOSIBase, T...> ;

  struct SPI0PSELMISOBase {} ;

  struct PSELMISO : public RegisterBase<0x40003510, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELMISOPack  = Register<0x40003510, 32, ReadWriteMode, SPI0PSELMISOBase, T...> ;

  struct SPI0RXDBase {} ;

  struct RXD : public RegisterBase<0x40003518, 32, ReadMode>
  {
    using RXDField = SPI0_RXD_RXD_Values<SPI0::RXD, 0, 8, ReadMode, SPI0RXDBase> ;
    using FieldValues = SPI0_RXD_RXD_Values<SPI0::RXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDPack  = Register<0x40003518, 32, ReadMode, SPI0RXDBase, T...> ;

  struct SPI0TXDBase {} ;

  struct TXD : public RegisterBase<0x4000351C, 32, ReadWriteMode>
  {
    using TXDField = SPI0_TXD_TXD_Values<SPI0::TXD, 0, 8, ReadWriteMode, SPI0TXDBase> ;
    using FieldValues = SPI0_TXD_TXD_Values<SPI0::TXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDPack  = Register<0x4000351C, 32, ReadWriteMode, SPI0TXDBase, T...> ;

  struct SPI0FREQUENCYBase {} ;

  struct FREQUENCY : public RegisterBase<0x40003524, 32, ReadWriteMode>
  {
    using FREQUENCYField = SPI0_FREQUENCY_FREQUENCY_Values<SPI0::FREQUENCY, 0, 32, ReadWriteMode, SPI0FREQUENCYBase> ;
    using FieldValues = SPI0_FREQUENCY_FREQUENCY_Values<SPI0::FREQUENCY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FREQUENCYPack  = Register<0x40003524, 32, ReadWriteMode, SPI0FREQUENCYBase, T...> ;

  struct SPI0CONFIGBase {} ;

  struct CONFIG : public RegisterBase<0x40003554, 32, ReadWriteMode>
  {
    using ORDER = SPI0_CONFIG_ORDER_Values<SPI0::CONFIG, 0, 1, ReadWriteMode, SPI0CONFIGBase> ;
    using CPHA = SPI0_CONFIG_CPHA_Values<SPI0::CONFIG, 1, 1, ReadWriteMode, SPI0CONFIGBase> ;
    using CPOL = SPI0_CONFIG_CPOL_Values<SPI0::CONFIG, 2, 1, ReadWriteMode, SPI0CONFIGBase> ;
    using FieldValues = SPI0_CONFIG_CPOL_Values<SPI0::CONFIG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIGPack  = Register<0x40003554, 32, ReadWriteMode, SPI0CONFIGBase, T...> ;

  struct SPI0POWERBase {} ;

  struct POWER : public RegisterBase<0x40003FFC, 32, ReadWriteMode>
  {
    using POWERField = SPI0_POWER_POWER_Values<SPI0::POWER, 0, 1, ReadWriteMode, SPI0POWERBase> ;
    using FieldValues = SPI0_POWER_POWER_Values<SPI0::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40003FFC, 32, ReadWriteMode, SPI0POWERBase, T...> ;

} ;

#endif //#if !defined(SPI0REGISTERS_HPP)
