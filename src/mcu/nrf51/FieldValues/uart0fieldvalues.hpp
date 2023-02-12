/*******************************************************************************
* Filename      : uart0fieldvalues.hpp
*
* Details       : Enumerations related with UART0 peripheral. This header file
*                 is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(UART0ENUMS_HPP)
#define UART0ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_SHORTS_CTS_STARTRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_SHORTS_CTS_STARTRX_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_SHORTS_CTS_STARTRX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_SHORTS_NCTS_STOPRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_SHORTS_NCTS_STOPRX_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_SHORTS_NCTS_STOPRX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENSET_CTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENSET_CTS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENSET_CTS_Values, BaseType, 1U> ;
  using Set = FieldValue<UART0_INTENSET_CTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENSET_NCTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENSET_NCTS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENSET_NCTS_Values, BaseType, 1U> ;
  using Set = FieldValue<UART0_INTENSET_NCTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENSET_RXDRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENSET_RXDRDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENSET_RXDRDY_Values, BaseType, 1U> ;
  using Set = FieldValue<UART0_INTENSET_RXDRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENSET_TXDRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENSET_TXDRDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENSET_TXDRDY_Values, BaseType, 1U> ;
  using Set = FieldValue<UART0_INTENSET_TXDRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENSET_ERROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENSET_ERROR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENSET_ERROR_Values, BaseType, 1U> ;
  using Set = FieldValue<UART0_INTENSET_ERROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENSET_RXTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENSET_RXTO_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENSET_RXTO_Values, BaseType, 1U> ;
  using Set = FieldValue<UART0_INTENSET_RXTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENCLR_CTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENCLR_CTS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENCLR_CTS_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_INTENCLR_CTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENCLR_NCTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENCLR_NCTS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENCLR_NCTS_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_INTENCLR_NCTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENCLR_RXDRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENCLR_RXDRDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENCLR_RXDRDY_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_INTENCLR_RXDRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENCLR_TXDRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENCLR_TXDRDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENCLR_TXDRDY_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_INTENCLR_TXDRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENCLR_ERROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENCLR_ERROR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENCLR_ERROR_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_INTENCLR_ERROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_INTENCLR_RXTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_INTENCLR_RXTO_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_INTENCLR_RXTO_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_INTENCLR_RXTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_ERRORSRC_OVERRUN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<UART0_ERRORSRC_OVERRUN_Values, BaseType, 0U> ;
  using Present = FieldValue<UART0_ERRORSRC_OVERRUN_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_ERRORSRC_OVERRUN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_ERRORSRC_PARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<UART0_ERRORSRC_PARITY_Values, BaseType, 0U> ;
  using Present = FieldValue<UART0_ERRORSRC_PARITY_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_ERRORSRC_PARITY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_ERRORSRC_FRAMING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<UART0_ERRORSRC_FRAMING_Values, BaseType, 0U> ;
  using Present = FieldValue<UART0_ERRORSRC_FRAMING_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_ERRORSRC_FRAMING_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_ERRORSRC_BREAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<UART0_ERRORSRC_BREAK_Values, BaseType, 0U> ;
  using Present = FieldValue<UART0_ERRORSRC_BREAK_Values, BaseType, 1U> ;
  using Clear = FieldValue<UART0_ERRORSRC_BREAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_ENABLE_ENABLE_Values, BaseType, 4U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_RXD_RXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_TXD_TXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_BAUDRATE_BAUDRATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_CONFIG_HWFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_CONFIG_HWFC_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_CONFIG_HWFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_CONFIG_PARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Excluded = FieldValue<UART0_CONFIG_PARITY_Values, BaseType, 0U> ;
  using Included = FieldValue<UART0_CONFIG_PARITY_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART0_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<UART0_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<UART0_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(UART0ENUMS_HPP)
