/*******************************************************************************
* Filename      : spis1fieldvalues.hpp
*
* Details       : Enumerations related with SPIS1 peripheral. This header file
*                 is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(SPIS1ENUMS_HPP)
#define SPIS1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_SHORTS_END_ACQUIRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPIS1_SHORTS_END_ACQUIRE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPIS1_SHORTS_END_ACQUIRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_INTENSET_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPIS1_INTENSET_END_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPIS1_INTENSET_END_Values, BaseType, 1U> ;
  using Set = FieldValue<SPIS1_INTENSET_END_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_INTENSET_ENDRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPIS1_INTENSET_ENDRX_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPIS1_INTENSET_ENDRX_Values, BaseType, 1U> ;
  using Set = FieldValue<SPIS1_INTENSET_ENDRX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_INTENSET_ACQUIRED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPIS1_INTENSET_ACQUIRED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPIS1_INTENSET_ACQUIRED_Values, BaseType, 1U> ;
  using Set = FieldValue<SPIS1_INTENSET_ACQUIRED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_INTENCLR_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPIS1_INTENCLR_END_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPIS1_INTENCLR_END_Values, BaseType, 1U> ;
  using Clear = FieldValue<SPIS1_INTENCLR_END_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_INTENCLR_ENDRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPIS1_INTENCLR_ENDRX_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPIS1_INTENCLR_ENDRX_Values, BaseType, 1U> ;
  using Clear = FieldValue<SPIS1_INTENCLR_ENDRX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_INTENCLR_ACQUIRED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPIS1_INTENCLR_ACQUIRED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPIS1_INTENCLR_ACQUIRED_Values, BaseType, 1U> ;
  using Clear = FieldValue<SPIS1_INTENCLR_ACQUIRED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_SEMSTAT_SEMSTAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Free = FieldValue<SPIS1_SEMSTAT_SEMSTAT_Values, BaseType, 0U> ;
  using CPU = FieldValue<SPIS1_SEMSTAT_SEMSTAT_Values, BaseType, 1U> ;
  using SPIS = FieldValue<SPIS1_SEMSTAT_SEMSTAT_Values, BaseType, 2U> ;
  using CPUPending = FieldValue<SPIS1_SEMSTAT_SEMSTAT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_STATUS_OVERREAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<SPIS1_STATUS_OVERREAD_Values, BaseType, 0U> ;
  using Present = FieldValue<SPIS1_STATUS_OVERREAD_Values, BaseType, 1U> ;
  using Clear = FieldValue<SPIS1_STATUS_OVERREAD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_STATUS_OVERFLOW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<SPIS1_STATUS_OVERFLOW_Values, BaseType, 0U> ;
  using Present = FieldValue<SPIS1_STATUS_OVERFLOW_Values, BaseType, 1U> ;
  using Clear = FieldValue<SPIS1_STATUS_OVERFLOW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPIS1_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPIS1_ENABLE_ENABLE_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_MAXRX_MAXRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_AMOUNTRX_AMOUNTRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_MAXTX_MAXTX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_AMOUNTTX_AMOUNTTX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_CONFIG_ORDER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MsbFirst = FieldValue<SPIS1_CONFIG_ORDER_Values, BaseType, 0U> ;
  using LsbFirst = FieldValue<SPIS1_CONFIG_ORDER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_CONFIG_CPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Leading = FieldValue<SPIS1_CONFIG_CPHA_Values, BaseType, 0U> ;
  using Trailing = FieldValue<SPIS1_CONFIG_CPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_CONFIG_CPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ActiveHigh = FieldValue<SPIS1_CONFIG_CPOL_Values, BaseType, 0U> ;
  using ActiveLow = FieldValue<SPIS1_CONFIG_CPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_DEF_DEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_ORC_ORC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPIS1_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPIS1_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPIS1_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(SPIS1ENUMS_HPP)
