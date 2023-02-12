/*******************************************************************************
* Filename      : nvmcregisters.hpp
*
* Details       : Non Volatile Memory Controller. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(NVMCREGISTERS_HPP)
#define NVMCREGISTERS_HPP

#include "nvmcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct NVMC
{
  struct NVMCREADYBase {} ;

  struct READY : public RegisterBase<0x4001E400, 32, ReadMode>
  {
    using READYField = NVMC_READY_READY_Values<NVMC::READY, 0, 1, ReadMode, NVMCREADYBase> ;
    using FieldValues = NVMC_READY_READY_Values<NVMC::READY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using READYPack  = Register<0x4001E400, 32, ReadMode, NVMCREADYBase, T...> ;

  struct NVMCCONFIGBase {} ;

  struct CONFIG : public RegisterBase<0x4001E504, 32, ReadWriteMode>
  {
    using WEN = NVMC_CONFIG_WEN_Values<NVMC::CONFIG, 0, 2, ReadWriteMode, NVMCCONFIGBase> ;
    using FieldValues = NVMC_CONFIG_WEN_Values<NVMC::CONFIG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIGPack  = Register<0x4001E504, 32, ReadWriteMode, NVMCCONFIGBase, T...> ;

  struct NVMCERASEPAGEBase {} ;

  struct ERASEPAGE : public RegisterBase<0x4001E508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ERASEPAGEPack  = Register<0x4001E508, 32, ReadWriteMode, NVMCERASEPAGEBase, T...> ;

  struct NVMCERASEPCR1Base {} ;

  struct ERASEPCR1 : public RegisterBase<0x4001E508, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ERASEPCR1Pack  = Register<0x4001E508, 32, ReadWriteMode, NVMCERASEPCR1Base, T...> ;

  struct NVMCERASEALLBase {} ;

  struct ERASEALL : public RegisterBase<0x4001E50C, 32, ReadWriteMode>
  {
    using ERASEALLField = NVMC_ERASEALL_ERASEALL_Values<NVMC::ERASEALL, 0, 1, ReadWriteMode, NVMCERASEALLBase> ;
    using FieldValues = NVMC_ERASEALL_ERASEALL_Values<NVMC::ERASEALL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ERASEALLPack  = Register<0x4001E50C, 32, ReadWriteMode, NVMCERASEALLBase, T...> ;

  struct NVMCERASEPCR0Base {} ;

  struct ERASEPCR0 : public RegisterBase<0x4001E510, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ERASEPCR0Pack  = Register<0x4001E510, 32, ReadWriteMode, NVMCERASEPCR0Base, T...> ;

  struct NVMCERASEUICRBase {} ;

  struct ERASEUICR : public RegisterBase<0x4001E514, 32, ReadWriteMode>
  {
    using ERASEUICRField = NVMC_ERASEUICR_ERASEUICR_Values<NVMC::ERASEUICR, 0, 1, ReadWriteMode, NVMCERASEUICRBase> ;
    using FieldValues = NVMC_ERASEUICR_ERASEUICR_Values<NVMC::ERASEUICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ERASEUICRPack  = Register<0x4001E514, 32, ReadWriteMode, NVMCERASEUICRBase, T...> ;

} ;

#endif //#if !defined(NVMCREGISTERS_HPP)
