/*******************************************************************************
* Filename      : nvmcfieldvalues.hpp
*
* Details       : Enumerations related with NVMC peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(NVMCENUMS_HPP)
#define NVMCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVMC_READY_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Busy = FieldValue<NVMC_READY_READY_Values, BaseType, 0U> ;
  using Ready = FieldValue<NVMC_READY_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVMC_CONFIG_WEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ren = FieldValue<NVMC_CONFIG_WEN_Values, BaseType, 0U> ;
  using Wen = FieldValue<NVMC_CONFIG_WEN_Values, BaseType, 1U> ;
  using Een = FieldValue<NVMC_CONFIG_WEN_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVMC_ERASEALL_ERASEALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoOperation = FieldValue<NVMC_ERASEALL_ERASEALL_Values, BaseType, 0U> ;
  using Erase = FieldValue<NVMC_ERASEALL_ERASEALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVMC_ERASEUICR_ERASEUICR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoOperation = FieldValue<NVMC_ERASEUICR_ERASEUICR_Values, BaseType, 0U> ;
  using Erase = FieldValue<NVMC_ERASEUICR_ERASEUICR_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(NVMCENUMS_HPP)
