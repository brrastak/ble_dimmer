/*******************************************************************************
* Filename      : twi0fieldvalues.hpp
*
* Details       : Enumerations related with TWI0 peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(TWI0ENUMS_HPP)
#define TWI0ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_SHORTS_BB_SUSPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_SHORTS_BB_SUSPEND_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_SHORTS_BB_SUSPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_SHORTS_BB_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_SHORTS_BB_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_SHORTS_BB_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENSET_STOPPED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENSET_STOPPED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENSET_STOPPED_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI0_INTENSET_STOPPED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENSET_RXDREADY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENSET_RXDREADY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENSET_RXDREADY_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI0_INTENSET_RXDREADY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENSET_TXDSENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENSET_TXDSENT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENSET_TXDSENT_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI0_INTENSET_TXDSENT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENSET_ERROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENSET_ERROR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENSET_ERROR_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI0_INTENSET_ERROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENSET_BB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENSET_BB_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENSET_BB_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI0_INTENSET_BB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENSET_SUSPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENSET_SUSPENDED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENSET_SUSPENDED_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI0_INTENSET_SUSPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENCLR_STOPPED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENCLR_STOPPED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENCLR_STOPPED_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI0_INTENCLR_STOPPED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENCLR_RXDREADY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENCLR_RXDREADY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENCLR_RXDREADY_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI0_INTENCLR_RXDREADY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENCLR_TXDSENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENCLR_TXDSENT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENCLR_TXDSENT_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI0_INTENCLR_TXDSENT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENCLR_ERROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENCLR_ERROR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENCLR_ERROR_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI0_INTENCLR_ERROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENCLR_BB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENCLR_BB_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENCLR_BB_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI0_INTENCLR_BB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_INTENCLR_SUSPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_INTENCLR_SUSPENDED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_INTENCLR_SUSPENDED_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI0_INTENCLR_SUSPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_ERRORSRC_OVERRUN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<TWI0_ERRORSRC_OVERRUN_Values, BaseType, 0U> ;
  using Present = FieldValue<TWI0_ERRORSRC_OVERRUN_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI0_ERRORSRC_OVERRUN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_ERRORSRC_ANACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<TWI0_ERRORSRC_ANACK_Values, BaseType, 0U> ;
  using Present = FieldValue<TWI0_ERRORSRC_ANACK_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI0_ERRORSRC_ANACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_ERRORSRC_DNACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<TWI0_ERRORSRC_DNACK_Values, BaseType, 0U> ;
  using Present = FieldValue<TWI0_ERRORSRC_DNACK_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI0_ERRORSRC_DNACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_ENABLE_ENABLE_Values, BaseType, 5U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_RXD_RXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_TXD_TXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_FREQUENCY_FREQUENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_ADDRESS_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI0_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI0_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI0_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(TWI0ENUMS_HPP)
