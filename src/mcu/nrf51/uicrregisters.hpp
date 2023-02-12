/*******************************************************************************
* Filename      : uicrregisters.hpp
*
* Details       : User Information Configuration. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(UICRREGISTERS_HPP)
#define UICRREGISTERS_HPP

#include "uicrfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UICR
{
  struct UICRCLENR0Base {} ;

  struct CLENR0 : public RegisterBase<0x10001000, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CLENR0Pack  = Register<0x10001000, 32, ReadWriteMode, UICRCLENR0Base, T...> ;

  struct UICRRBPCONFBase {} ;

  struct RBPCONF : public RegisterBase<0x10001004, 32, ReadWriteMode>
  {
    using PR0 = UICR_RBPCONF_PR0_Values<UICR::RBPCONF, 0, 8, ReadWriteMode, UICRRBPCONFBase> ;
    using PALL = UICR_RBPCONF_PALL_Values<UICR::RBPCONF, 8, 8, ReadWriteMode, UICRRBPCONFBase> ;
    using FieldValues = UICR_RBPCONF_PALL_Values<UICR::RBPCONF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RBPCONFPack  = Register<0x10001004, 32, ReadWriteMode, UICRRBPCONFBase, T...> ;

  struct UICRXTALFREQBase {} ;

  struct XTALFREQ : public RegisterBase<0x10001008, 32, ReadWriteMode>
  {
    using XTALFREQField = UICR_XTALFREQ_XTALFREQ_Values<UICR::XTALFREQ, 0, 8, ReadWriteMode, UICRXTALFREQBase> ;
    using FieldValues = UICR_XTALFREQ_XTALFREQ_Values<UICR::XTALFREQ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using XTALFREQPack  = Register<0x10001008, 32, ReadWriteMode, UICRXTALFREQBase, T...> ;

  struct UICRFWIDBase {} ;

  struct FWID : public RegisterBase<0x10001010, 32, ReadMode>
  {
    using FWIDField = UICR_FWID_FWID_Values<UICR::FWID, 0, 16, ReadMode, UICRFWIDBase> ;
    using FieldValues = UICR_FWID_FWID_Values<UICR::FWID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FWIDPack  = Register<0x10001010, 32, ReadMode, UICRFWIDBase, T...> ;

  struct UICRBOOTLOADERADDRBase {} ;

  struct BOOTLOADERADDR : public RegisterBase<0x10001014, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using BOOTLOADERADDRPack  = Register<0x10001014, 32, ReadWriteMode, UICRBOOTLOADERADDRBase, T...> ;

  struct UICRNRFFW0Base {} ;

  struct NRFFW0 : public RegisterBase<0x10001014, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW0Pack  = Register<0x10001014, 32, ReadWriteMode, UICRNRFFW0Base, T...> ;

  struct UICRNRFFW1Base {} ;

  struct NRFFW1 : public RegisterBase<0x10001018, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW1Pack  = Register<0x10001018, 32, ReadWriteMode, UICRNRFFW1Base, T...> ;

  struct UICRNRFFW2Base {} ;

  struct NRFFW2 : public RegisterBase<0x1000101C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW2Pack  = Register<0x1000101C, 32, ReadWriteMode, UICRNRFFW2Base, T...> ;

  struct UICRNRFFW3Base {} ;

  struct NRFFW3 : public RegisterBase<0x10001020, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW3Pack  = Register<0x10001020, 32, ReadWriteMode, UICRNRFFW3Base, T...> ;

  struct UICRNRFFW4Base {} ;

  struct NRFFW4 : public RegisterBase<0x10001024, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW4Pack  = Register<0x10001024, 32, ReadWriteMode, UICRNRFFW4Base, T...> ;

  struct UICRNRFFW5Base {} ;

  struct NRFFW5 : public RegisterBase<0x10001028, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW5Pack  = Register<0x10001028, 32, ReadWriteMode, UICRNRFFW5Base, T...> ;

  struct UICRNRFFW6Base {} ;

  struct NRFFW6 : public RegisterBase<0x1000102C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW6Pack  = Register<0x1000102C, 32, ReadWriteMode, UICRNRFFW6Base, T...> ;

  struct UICRNRFFW7Base {} ;

  struct NRFFW7 : public RegisterBase<0x10001030, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW7Pack  = Register<0x10001030, 32, ReadWriteMode, UICRNRFFW7Base, T...> ;

  struct UICRNRFFW8Base {} ;

  struct NRFFW8 : public RegisterBase<0x10001034, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW8Pack  = Register<0x10001034, 32, ReadWriteMode, UICRNRFFW8Base, T...> ;

  struct UICRNRFFW9Base {} ;

  struct NRFFW9 : public RegisterBase<0x10001038, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW9Pack  = Register<0x10001038, 32, ReadWriteMode, UICRNRFFW9Base, T...> ;

  struct UICRNRFFW10Base {} ;

  struct NRFFW10 : public RegisterBase<0x1000103C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW10Pack  = Register<0x1000103C, 32, ReadWriteMode, UICRNRFFW10Base, T...> ;

  struct UICRNRFFW11Base {} ;

  struct NRFFW11 : public RegisterBase<0x10001040, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW11Pack  = Register<0x10001040, 32, ReadWriteMode, UICRNRFFW11Base, T...> ;

  struct UICRNRFFW12Base {} ;

  struct NRFFW12 : public RegisterBase<0x10001044, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW12Pack  = Register<0x10001044, 32, ReadWriteMode, UICRNRFFW12Base, T...> ;

  struct UICRNRFFW13Base {} ;

  struct NRFFW13 : public RegisterBase<0x10001048, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW13Pack  = Register<0x10001048, 32, ReadWriteMode, UICRNRFFW13Base, T...> ;

  struct UICRNRFFW14Base {} ;

  struct NRFFW14 : public RegisterBase<0x1000104C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFFW14Pack  = Register<0x1000104C, 32, ReadWriteMode, UICRNRFFW14Base, T...> ;

  struct UICRNRFHW0Base {} ;

  struct NRFHW0 : public RegisterBase<0x10001050, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW0Pack  = Register<0x10001050, 32, ReadWriteMode, UICRNRFHW0Base, T...> ;

  struct UICRNRFHW1Base {} ;

  struct NRFHW1 : public RegisterBase<0x10001054, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW1Pack  = Register<0x10001054, 32, ReadWriteMode, UICRNRFHW1Base, T...> ;

  struct UICRNRFHW2Base {} ;

  struct NRFHW2 : public RegisterBase<0x10001058, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW2Pack  = Register<0x10001058, 32, ReadWriteMode, UICRNRFHW2Base, T...> ;

  struct UICRNRFHW3Base {} ;

  struct NRFHW3 : public RegisterBase<0x1000105C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW3Pack  = Register<0x1000105C, 32, ReadWriteMode, UICRNRFHW3Base, T...> ;

  struct UICRNRFHW4Base {} ;

  struct NRFHW4 : public RegisterBase<0x10001060, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW4Pack  = Register<0x10001060, 32, ReadWriteMode, UICRNRFHW4Base, T...> ;

  struct UICRNRFHW5Base {} ;

  struct NRFHW5 : public RegisterBase<0x10001064, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW5Pack  = Register<0x10001064, 32, ReadWriteMode, UICRNRFHW5Base, T...> ;

  struct UICRNRFHW6Base {} ;

  struct NRFHW6 : public RegisterBase<0x10001068, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW6Pack  = Register<0x10001068, 32, ReadWriteMode, UICRNRFHW6Base, T...> ;

  struct UICRNRFHW7Base {} ;

  struct NRFHW7 : public RegisterBase<0x1000106C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW7Pack  = Register<0x1000106C, 32, ReadWriteMode, UICRNRFHW7Base, T...> ;

  struct UICRNRFHW8Base {} ;

  struct NRFHW8 : public RegisterBase<0x10001070, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW8Pack  = Register<0x10001070, 32, ReadWriteMode, UICRNRFHW8Base, T...> ;

  struct UICRNRFHW9Base {} ;

  struct NRFHW9 : public RegisterBase<0x10001074, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW9Pack  = Register<0x10001074, 32, ReadWriteMode, UICRNRFHW9Base, T...> ;

  struct UICRNRFHW10Base {} ;

  struct NRFHW10 : public RegisterBase<0x10001078, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW10Pack  = Register<0x10001078, 32, ReadWriteMode, UICRNRFHW10Base, T...> ;

  struct UICRNRFHW11Base {} ;

  struct NRFHW11 : public RegisterBase<0x1000107C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using NRFHW11Pack  = Register<0x1000107C, 32, ReadWriteMode, UICRNRFHW11Base, T...> ;

  struct UICRCUSTOMER0Base {} ;

  struct CUSTOMER0 : public RegisterBase<0x10001080, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER0Pack  = Register<0x10001080, 32, ReadWriteMode, UICRCUSTOMER0Base, T...> ;

  struct UICRCUSTOMER1Base {} ;

  struct CUSTOMER1 : public RegisterBase<0x10001084, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER1Pack  = Register<0x10001084, 32, ReadWriteMode, UICRCUSTOMER1Base, T...> ;

  struct UICRCUSTOMER2Base {} ;

  struct CUSTOMER2 : public RegisterBase<0x10001088, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER2Pack  = Register<0x10001088, 32, ReadWriteMode, UICRCUSTOMER2Base, T...> ;

  struct UICRCUSTOMER3Base {} ;

  struct CUSTOMER3 : public RegisterBase<0x1000108C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER3Pack  = Register<0x1000108C, 32, ReadWriteMode, UICRCUSTOMER3Base, T...> ;

  struct UICRCUSTOMER4Base {} ;

  struct CUSTOMER4 : public RegisterBase<0x10001090, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER4Pack  = Register<0x10001090, 32, ReadWriteMode, UICRCUSTOMER4Base, T...> ;

  struct UICRCUSTOMER5Base {} ;

  struct CUSTOMER5 : public RegisterBase<0x10001094, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER5Pack  = Register<0x10001094, 32, ReadWriteMode, UICRCUSTOMER5Base, T...> ;

  struct UICRCUSTOMER6Base {} ;

  struct CUSTOMER6 : public RegisterBase<0x10001098, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER6Pack  = Register<0x10001098, 32, ReadWriteMode, UICRCUSTOMER6Base, T...> ;

  struct UICRCUSTOMER7Base {} ;

  struct CUSTOMER7 : public RegisterBase<0x1000109C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER7Pack  = Register<0x1000109C, 32, ReadWriteMode, UICRCUSTOMER7Base, T...> ;

  struct UICRCUSTOMER8Base {} ;

  struct CUSTOMER8 : public RegisterBase<0x100010A0, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER8Pack  = Register<0x100010A0, 32, ReadWriteMode, UICRCUSTOMER8Base, T...> ;

  struct UICRCUSTOMER9Base {} ;

  struct CUSTOMER9 : public RegisterBase<0x100010A4, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER9Pack  = Register<0x100010A4, 32, ReadWriteMode, UICRCUSTOMER9Base, T...> ;

  struct UICRCUSTOMER10Base {} ;

  struct CUSTOMER10 : public RegisterBase<0x100010A8, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER10Pack  = Register<0x100010A8, 32, ReadWriteMode, UICRCUSTOMER10Base, T...> ;

  struct UICRCUSTOMER11Base {} ;

  struct CUSTOMER11 : public RegisterBase<0x100010AC, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER11Pack  = Register<0x100010AC, 32, ReadWriteMode, UICRCUSTOMER11Base, T...> ;

  struct UICRCUSTOMER12Base {} ;

  struct CUSTOMER12 : public RegisterBase<0x100010B0, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER12Pack  = Register<0x100010B0, 32, ReadWriteMode, UICRCUSTOMER12Base, T...> ;

  struct UICRCUSTOMER13Base {} ;

  struct CUSTOMER13 : public RegisterBase<0x100010B4, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER13Pack  = Register<0x100010B4, 32, ReadWriteMode, UICRCUSTOMER13Base, T...> ;

  struct UICRCUSTOMER14Base {} ;

  struct CUSTOMER14 : public RegisterBase<0x100010B8, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER14Pack  = Register<0x100010B8, 32, ReadWriteMode, UICRCUSTOMER14Base, T...> ;

  struct UICRCUSTOMER15Base {} ;

  struct CUSTOMER15 : public RegisterBase<0x100010BC, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER15Pack  = Register<0x100010BC, 32, ReadWriteMode, UICRCUSTOMER15Base, T...> ;

  struct UICRCUSTOMER16Base {} ;

  struct CUSTOMER16 : public RegisterBase<0x100010C0, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER16Pack  = Register<0x100010C0, 32, ReadWriteMode, UICRCUSTOMER16Base, T...> ;

  struct UICRCUSTOMER17Base {} ;

  struct CUSTOMER17 : public RegisterBase<0x100010C4, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER17Pack  = Register<0x100010C4, 32, ReadWriteMode, UICRCUSTOMER17Base, T...> ;

  struct UICRCUSTOMER18Base {} ;

  struct CUSTOMER18 : public RegisterBase<0x100010C8, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER18Pack  = Register<0x100010C8, 32, ReadWriteMode, UICRCUSTOMER18Base, T...> ;

  struct UICRCUSTOMER19Base {} ;

  struct CUSTOMER19 : public RegisterBase<0x100010CC, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER19Pack  = Register<0x100010CC, 32, ReadWriteMode, UICRCUSTOMER19Base, T...> ;

  struct UICRCUSTOMER20Base {} ;

  struct CUSTOMER20 : public RegisterBase<0x100010D0, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER20Pack  = Register<0x100010D0, 32, ReadWriteMode, UICRCUSTOMER20Base, T...> ;

  struct UICRCUSTOMER21Base {} ;

  struct CUSTOMER21 : public RegisterBase<0x100010D4, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER21Pack  = Register<0x100010D4, 32, ReadWriteMode, UICRCUSTOMER21Base, T...> ;

  struct UICRCUSTOMER22Base {} ;

  struct CUSTOMER22 : public RegisterBase<0x100010D8, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER22Pack  = Register<0x100010D8, 32, ReadWriteMode, UICRCUSTOMER22Base, T...> ;

  struct UICRCUSTOMER23Base {} ;

  struct CUSTOMER23 : public RegisterBase<0x100010DC, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER23Pack  = Register<0x100010DC, 32, ReadWriteMode, UICRCUSTOMER23Base, T...> ;

  struct UICRCUSTOMER24Base {} ;

  struct CUSTOMER24 : public RegisterBase<0x100010E0, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER24Pack  = Register<0x100010E0, 32, ReadWriteMode, UICRCUSTOMER24Base, T...> ;

  struct UICRCUSTOMER25Base {} ;

  struct CUSTOMER25 : public RegisterBase<0x100010E4, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER25Pack  = Register<0x100010E4, 32, ReadWriteMode, UICRCUSTOMER25Base, T...> ;

  struct UICRCUSTOMER26Base {} ;

  struct CUSTOMER26 : public RegisterBase<0x100010E8, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER26Pack  = Register<0x100010E8, 32, ReadWriteMode, UICRCUSTOMER26Base, T...> ;

  struct UICRCUSTOMER27Base {} ;

  struct CUSTOMER27 : public RegisterBase<0x100010EC, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER27Pack  = Register<0x100010EC, 32, ReadWriteMode, UICRCUSTOMER27Base, T...> ;

  struct UICRCUSTOMER28Base {} ;

  struct CUSTOMER28 : public RegisterBase<0x100010F0, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER28Pack  = Register<0x100010F0, 32, ReadWriteMode, UICRCUSTOMER28Base, T...> ;

  struct UICRCUSTOMER29Base {} ;

  struct CUSTOMER29 : public RegisterBase<0x100010F4, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER29Pack  = Register<0x100010F4, 32, ReadWriteMode, UICRCUSTOMER29Base, T...> ;

  struct UICRCUSTOMER30Base {} ;

  struct CUSTOMER30 : public RegisterBase<0x100010F8, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER30Pack  = Register<0x100010F8, 32, ReadWriteMode, UICRCUSTOMER30Base, T...> ;

  struct UICRCUSTOMER31Base {} ;

  struct CUSTOMER31 : public RegisterBase<0x100010FC, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CUSTOMER31Pack  = Register<0x100010FC, 32, ReadWriteMode, UICRCUSTOMER31Base, T...> ;

} ;

#endif //#if !defined(UICRREGISTERS_HPP)
