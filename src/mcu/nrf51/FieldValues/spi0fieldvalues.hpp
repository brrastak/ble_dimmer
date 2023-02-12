/*******************************************************************************
* Filename      : spi0fieldvalues.hpp
*
* Details       : Enumerations related with SPI0 peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(SPI0ENUMS_HPP)
#define SPI0ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_INTENSET_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPI0_INTENSET_READY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPI0_INTENSET_READY_Values, BaseType, 1U> ;
  using Set = FieldValue<SPI0_INTENSET_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_INTENCLR_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPI0_INTENCLR_READY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPI0_INTENCLR_READY_Values, BaseType, 1U> ;
  using Clear = FieldValue<SPI0_INTENCLR_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPI0_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPI0_ENABLE_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_RXD_RXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_TXD_TXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_FREQUENCY_FREQUENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CONFIG_ORDER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MsbFirst = FieldValue<SPI0_CONFIG_ORDER_Values, BaseType, 0U> ;
  using LsbFirst = FieldValue<SPI0_CONFIG_ORDER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CONFIG_CPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Leading = FieldValue<SPI0_CONFIG_CPHA_Values, BaseType, 0U> ;
  using Trailing = FieldValue<SPI0_CONFIG_CPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CONFIG_CPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ActiveHigh = FieldValue<SPI0_CONFIG_CPOL_Values, BaseType, 0U> ;
  using ActiveLow = FieldValue<SPI0_CONFIG_CPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPI0_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPI0_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(SPI0ENUMS_HPP)
