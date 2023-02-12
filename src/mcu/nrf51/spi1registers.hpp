/*******************************************************************************
* Filename      : spi1registers.hpp
*
* Details       : SPI master 1. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(SPI1REGISTERS_HPP)
#define SPI1REGISTERS_HPP

#include "spi1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI1
{
  struct SPI1EVENTS_READYBase {} ;

  struct EVENTS_READY : public RegisterBase<0x40004108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_READYPack  = Register<0x40004108, 32, ReadWriteMode, SPI1EVENTS_READYBase, T...> ;

  struct SPI1INTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40004304, 32, ReadWriteMode>
  {
    using READY = SPI1_INTENSET_READY_Values<SPI1::INTENSET, 2, 1, ReadWriteMode, SPI1INTENSETBase> ;
    using FieldValues = SPI1_INTENSET_READY_Values<SPI1::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40004304, 32, ReadWriteMode, SPI1INTENSETBase, T...> ;

  struct SPI1INTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40004308, 32, ReadWriteMode>
  {
    using READY = SPI1_INTENCLR_READY_Values<SPI1::INTENCLR, 2, 1, ReadWriteMode, SPI1INTENCLRBase> ;
    using FieldValues = SPI1_INTENCLR_READY_Values<SPI1::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40004308, 32, ReadWriteMode, SPI1INTENCLRBase, T...> ;

  struct SPI1ENABLEBase {} ;

  struct ENABLE : public RegisterBase<0x40004500, 32, ReadWriteMode>
  {
    using ENABLEField = SPI1_ENABLE_ENABLE_Values<SPI1::ENABLE, 0, 3, ReadWriteMode, SPI1ENABLEBase> ;
    using FieldValues = SPI1_ENABLE_ENABLE_Values<SPI1::ENABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ENABLEPack  = Register<0x40004500, 32, ReadWriteMode, SPI1ENABLEBase, T...> ;

  struct SPI1PSELSCKBase {} ;

  struct PSELSCK : public RegisterBase<0x40004508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELSCKPack  = Register<0x40004508, 32, ReadWriteMode, SPI1PSELSCKBase, T...> ;

  struct SPI1PSELMOSIBase {} ;

  struct PSELMOSI : public RegisterBase<0x4000450C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELMOSIPack  = Register<0x4000450C, 32, ReadWriteMode, SPI1PSELMOSIBase, T...> ;

  struct SPI1PSELMISOBase {} ;

  struct PSELMISO : public RegisterBase<0x40004510, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using PSELMISOPack  = Register<0x40004510, 32, ReadWriteMode, SPI1PSELMISOBase, T...> ;

  struct SPI1RXDBase {} ;

  struct RXD : public RegisterBase<0x40004518, 32, ReadMode>
  {
    using RXDField = SPI1_RXD_RXD_Values<SPI1::RXD, 0, 8, ReadMode, SPI1RXDBase> ;
    using FieldValues = SPI1_RXD_RXD_Values<SPI1::RXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDPack  = Register<0x40004518, 32, ReadMode, SPI1RXDBase, T...> ;

  struct SPI1TXDBase {} ;

  struct TXD : public RegisterBase<0x4000451C, 32, ReadWriteMode>
  {
    using TXDField = SPI1_TXD_TXD_Values<SPI1::TXD, 0, 8, ReadWriteMode, SPI1TXDBase> ;
    using FieldValues = SPI1_TXD_TXD_Values<SPI1::TXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDPack  = Register<0x4000451C, 32, ReadWriteMode, SPI1TXDBase, T...> ;

  struct SPI1FREQUENCYBase {} ;

  struct FREQUENCY : public RegisterBase<0x40004524, 32, ReadWriteMode>
  {
    using FREQUENCYField = SPI1_FREQUENCY_FREQUENCY_Values<SPI1::FREQUENCY, 0, 32, ReadWriteMode, SPI1FREQUENCYBase> ;
    using FieldValues = SPI1_FREQUENCY_FREQUENCY_Values<SPI1::FREQUENCY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FREQUENCYPack  = Register<0x40004524, 32, ReadWriteMode, SPI1FREQUENCYBase, T...> ;

  struct SPI1CONFIGBase {} ;

  struct CONFIG : public RegisterBase<0x40004554, 32, ReadWriteMode>
  {
    using ORDER = SPI1_CONFIG_ORDER_Values<SPI1::CONFIG, 0, 1, ReadWriteMode, SPI1CONFIGBase> ;
    using CPHA = SPI1_CONFIG_CPHA_Values<SPI1::CONFIG, 1, 1, ReadWriteMode, SPI1CONFIGBase> ;
    using CPOL = SPI1_CONFIG_CPOL_Values<SPI1::CONFIG, 2, 1, ReadWriteMode, SPI1CONFIGBase> ;
    using FieldValues = SPI1_CONFIG_CPOL_Values<SPI1::CONFIG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIGPack  = Register<0x40004554, 32, ReadWriteMode, SPI1CONFIGBase, T...> ;

  struct SPI1POWERBase {} ;

  struct POWER : public RegisterBase<0x40004FFC, 32, ReadWriteMode>
  {
    using POWERField = SPI1_POWER_POWER_Values<SPI1::POWER, 0, 1, ReadWriteMode, SPI1POWERBase> ;
    using FieldValues = SPI1_POWER_POWER_Values<SPI1::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40004FFC, 32, ReadWriteMode, SPI1POWERBase, T...> ;

} ;

#endif //#if !defined(SPI1REGISTERS_HPP)
