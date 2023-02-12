/*******************************************************************************
* Filename      : ficrregisters.hpp
*
* Details       : Factory Information Configuration. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(FICRREGISTERS_HPP)
#define FICRREGISTERS_HPP

#include "ficrfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FICR
{
  struct FICRCODEPAGESIZEBase {} ;

  struct CODEPAGESIZE : public RegisterBase<0x10000010, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using CODEPAGESIZEPack  = Register<0x10000010, 32, ReadMode, FICRCODEPAGESIZEBase, T...> ;

  struct FICRCODESIZEBase {} ;

  struct CODESIZE : public RegisterBase<0x10000014, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using CODESIZEPack  = Register<0x10000014, 32, ReadMode, FICRCODESIZEBase, T...> ;

  struct FICRCLENR0Base {} ;

  struct CLENR0 : public RegisterBase<0x10000028, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using CLENR0Pack  = Register<0x10000028, 32, ReadMode, FICRCLENR0Base, T...> ;

  struct FICRPPFCBase {} ;

  struct PPFC : public RegisterBase<0x1000002C, 32, ReadMode>
  {
    using PPFCField = FICR_PPFC_PPFC_Values<FICR::PPFC, 0, 8, ReadMode, FICRPPFCBase> ;
    using FieldValues = FICR_PPFC_PPFC_Values<FICR::PPFC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PPFCPack  = Register<0x1000002C, 32, ReadMode, FICRPPFCBase, T...> ;

  struct FICRNUMRAMBLOCKBase {} ;

  struct NUMRAMBLOCK : public RegisterBase<0x10000034, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using NUMRAMBLOCKPack  = Register<0x10000034, 32, ReadMode, FICRNUMRAMBLOCKBase, T...> ;

  struct FICRSIZERAMBLOCKSBase {} ;

  struct SIZERAMBLOCKS : public RegisterBase<0x10000038, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using SIZERAMBLOCKSPack  = Register<0x10000038, 32, ReadMode, FICRSIZERAMBLOCKSBase, T...> ;

  struct FICRCONFIGIDBase {} ;

  struct CONFIGID : public RegisterBase<0x1000005C, 32, ReadMode>
  {
    using HWID = FICR_CONFIGID_HWID_Values<FICR::CONFIGID, 0, 16, ReadMode, FICRCONFIGIDBase> ;
    using FWID = FICR_CONFIGID_FWID_Values<FICR::CONFIGID, 16, 16, ReadMode, FICRCONFIGIDBase> ;
    using FieldValues = FICR_CONFIGID_FWID_Values<FICR::CONFIGID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIGIDPack  = Register<0x1000005C, 32, ReadMode, FICRCONFIGIDBase, T...> ;

  struct FICRDEVICEADDRTYPEBase {} ;

  struct DEVICEADDRTYPE : public RegisterBase<0x100000A0, 32, ReadMode>
  {
    using DEVICEADDRTYPEField = FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Values<FICR::DEVICEADDRTYPE, 0, 1, ReadMode, FICRDEVICEADDRTYPEBase> ;
    using FieldValues = FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Values<FICR::DEVICEADDRTYPE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DEVICEADDRTYPEPack  = Register<0x100000A0, 32, ReadMode, FICRDEVICEADDRTYPEBase, T...> ;

  struct FICROVERRIDEENBase {} ;

  struct OVERRIDEEN : public RegisterBase<0x100000AC, 32, ReadMode>
  {
    using NRF_1MBIT = FICR_OVERRIDEEN_NRF_1MBIT_Values<FICR::OVERRIDEEN, 0, 1, ReadMode, FICROVERRIDEENBase> ;
    using BLE_1MBIT = FICR_OVERRIDEEN_BLE_1MBIT_Values<FICR::OVERRIDEEN, 3, 1, ReadMode, FICROVERRIDEENBase> ;
    using FieldValues = FICR_OVERRIDEEN_BLE_1MBIT_Values<FICR::OVERRIDEEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OVERRIDEENPack  = Register<0x100000AC, 32, ReadMode, FICROVERRIDEENBase, T...> ;

  struct FICRSIZERAMBLOCK0Base {} ;

  struct SIZERAMBLOCK0 : public RegisterBase<0x10000038, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using SIZERAMBLOCK0Pack  = Register<0x10000038, 32, ReadMode, FICRSIZERAMBLOCK0Base, T...> ;

  struct FICRSIZERAMBLOCK1Base {} ;

  struct SIZERAMBLOCK1 : public RegisterBase<0x1000003C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using SIZERAMBLOCK1Pack  = Register<0x1000003C, 32, ReadMode, FICRSIZERAMBLOCK1Base, T...> ;

  struct FICRSIZERAMBLOCK2Base {} ;

  struct SIZERAMBLOCK2 : public RegisterBase<0x10000040, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using SIZERAMBLOCK2Pack  = Register<0x10000040, 32, ReadMode, FICRSIZERAMBLOCK2Base, T...> ;

  struct FICRSIZERAMBLOCK3Base {} ;

  struct SIZERAMBLOCK3 : public RegisterBase<0x10000044, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using SIZERAMBLOCK3Pack  = Register<0x10000044, 32, ReadMode, FICRSIZERAMBLOCK3Base, T...> ;

  struct FICRDEVICEID0Base {} ;

  struct DEVICEID0 : public RegisterBase<0x10000060, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DEVICEID0Pack  = Register<0x10000060, 32, ReadMode, FICRDEVICEID0Base, T...> ;

  struct FICRDEVICEID1Base {} ;

  struct DEVICEID1 : public RegisterBase<0x10000064, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DEVICEID1Pack  = Register<0x10000064, 32, ReadMode, FICRDEVICEID1Base, T...> ;

  struct FICRER0Base {} ;

  struct ER0 : public RegisterBase<0x10000080, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ER0Pack  = Register<0x10000080, 32, ReadMode, FICRER0Base, T...> ;

  struct FICRER1Base {} ;

  struct ER1 : public RegisterBase<0x10000084, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ER1Pack  = Register<0x10000084, 32, ReadMode, FICRER1Base, T...> ;

  struct FICRER2Base {} ;

  struct ER2 : public RegisterBase<0x10000088, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ER2Pack  = Register<0x10000088, 32, ReadMode, FICRER2Base, T...> ;

  struct FICRER3Base {} ;

  struct ER3 : public RegisterBase<0x1000008C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ER3Pack  = Register<0x1000008C, 32, ReadMode, FICRER3Base, T...> ;

  struct FICRIR0Base {} ;

  struct IR0 : public RegisterBase<0x10000090, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using IR0Pack  = Register<0x10000090, 32, ReadMode, FICRIR0Base, T...> ;

  struct FICRIR1Base {} ;

  struct IR1 : public RegisterBase<0x10000094, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using IR1Pack  = Register<0x10000094, 32, ReadMode, FICRIR1Base, T...> ;

  struct FICRIR2Base {} ;

  struct IR2 : public RegisterBase<0x10000098, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using IR2Pack  = Register<0x10000098, 32, ReadMode, FICRIR2Base, T...> ;

  struct FICRIR3Base {} ;

  struct IR3 : public RegisterBase<0x1000009C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using IR3Pack  = Register<0x1000009C, 32, ReadMode, FICRIR3Base, T...> ;

  struct FICRDEVICEADDR0Base {} ;

  struct DEVICEADDR0 : public RegisterBase<0x100000A4, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DEVICEADDR0Pack  = Register<0x100000A4, 32, ReadMode, FICRDEVICEADDR0Base, T...> ;

  struct FICRDEVICEADDR1Base {} ;

  struct DEVICEADDR1 : public RegisterBase<0x100000A8, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DEVICEADDR1Pack  = Register<0x100000A8, 32, ReadMode, FICRDEVICEADDR1Base, T...> ;

  struct FICRNRF_1MBIT0Base {} ;

  struct NRF_1MBIT0 : public RegisterBase<0x100000B0, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using NRF_1MBIT0Pack  = Register<0x100000B0, 32, ReadMode, FICRNRF_1MBIT0Base, T...> ;

  struct FICRNRF_1MBIT1Base {} ;

  struct NRF_1MBIT1 : public RegisterBase<0x100000B4, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using NRF_1MBIT1Pack  = Register<0x100000B4, 32, ReadMode, FICRNRF_1MBIT1Base, T...> ;

  struct FICRNRF_1MBIT2Base {} ;

  struct NRF_1MBIT2 : public RegisterBase<0x100000B8, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using NRF_1MBIT2Pack  = Register<0x100000B8, 32, ReadMode, FICRNRF_1MBIT2Base, T...> ;

  struct FICRNRF_1MBIT3Base {} ;

  struct NRF_1MBIT3 : public RegisterBase<0x100000BC, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using NRF_1MBIT3Pack  = Register<0x100000BC, 32, ReadMode, FICRNRF_1MBIT3Base, T...> ;

  struct FICRNRF_1MBIT4Base {} ;

  struct NRF_1MBIT4 : public RegisterBase<0x100000C0, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using NRF_1MBIT4Pack  = Register<0x100000C0, 32, ReadMode, FICRNRF_1MBIT4Base, T...> ;

  struct FICRBLE_1MBIT0Base {} ;

  struct BLE_1MBIT0 : public RegisterBase<0x100000EC, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BLE_1MBIT0Pack  = Register<0x100000EC, 32, ReadMode, FICRBLE_1MBIT0Base, T...> ;

  struct FICRBLE_1MBIT1Base {} ;

  struct BLE_1MBIT1 : public RegisterBase<0x100000F0, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BLE_1MBIT1Pack  = Register<0x100000F0, 32, ReadMode, FICRBLE_1MBIT1Base, T...> ;

  struct FICRBLE_1MBIT2Base {} ;

  struct BLE_1MBIT2 : public RegisterBase<0x100000F4, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BLE_1MBIT2Pack  = Register<0x100000F4, 32, ReadMode, FICRBLE_1MBIT2Base, T...> ;

  struct FICRBLE_1MBIT3Base {} ;

  struct BLE_1MBIT3 : public RegisterBase<0x100000F8, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BLE_1MBIT3Pack  = Register<0x100000F8, 32, ReadMode, FICRBLE_1MBIT3Base, T...> ;

  struct FICRBLE_1MBIT4Base {} ;

  struct BLE_1MBIT4 : public RegisterBase<0x100000FC, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BLE_1MBIT4Pack  = Register<0x100000FC, 32, ReadMode, FICRBLE_1MBIT4Base, T...> ;

} ;

#endif //#if !defined(FICRREGISTERS_HPP)
