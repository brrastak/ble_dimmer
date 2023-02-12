/*******************************************************************************
* Filename      : spi1fieldvalues.hpp
*
* Details       : Enumerations related with SPI1 peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(SPI1ENUMS_HPP)
#define SPI1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_INTENSET_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPI1_INTENSET_READY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPI1_INTENSET_READY_Values, BaseType, 1U> ;
  using Set = FieldValue<SPI1_INTENSET_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_INTENCLR_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPI1_INTENCLR_READY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPI1_INTENCLR_READY_Values, BaseType, 1U> ;
  using Clear = FieldValue<SPI1_INTENCLR_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPI1_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPI1_ENABLE_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_RXD_RXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_TXD_TXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_FREQUENCY_FREQUENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CONFIG_ORDER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MsbFirst = FieldValue<SPI1_CONFIG_ORDER_Values, BaseType, 0U> ;
  using LsbFirst = FieldValue<SPI1_CONFIG_ORDER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CONFIG_CPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Leading = FieldValue<SPI1_CONFIG_CPHA_Values, BaseType, 0U> ;
  using Trailing = FieldValue<SPI1_CONFIG_CPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CONFIG_CPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ActiveHigh = FieldValue<SPI1_CONFIG_CPOL_Values, BaseType, 0U> ;
  using ActiveLow = FieldValue<SPI1_CONFIG_CPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<SPI1_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<SPI1_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(SPI1ENUMS_HPP)
