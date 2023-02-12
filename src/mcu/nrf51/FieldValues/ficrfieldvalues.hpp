/*******************************************************************************
* Filename      : ficrfieldvalues.hpp
*
* Details       : Enumerations related with FICR peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(FICRENUMS_HPP)
#define FICRENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FICR_PPFC_PPFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FICR_CONFIGID_HWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FICR_CONFIGID_FWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Public = FieldValue<FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Values, BaseType, 0U> ;
  using Random = FieldValue<FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FICR_OVERRIDEEN_NRF_1MBIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Override = FieldValue<FICR_OVERRIDEEN_NRF_1MBIT_Values, BaseType, 0U> ;
  using NotOverride = FieldValue<FICR_OVERRIDEEN_NRF_1MBIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FICR_OVERRIDEEN_BLE_1MBIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Override = FieldValue<FICR_OVERRIDEEN_BLE_1MBIT_Values, BaseType, 0U> ;
  using NotOverride = FieldValue<FICR_OVERRIDEEN_BLE_1MBIT_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(FICRENUMS_HPP)
