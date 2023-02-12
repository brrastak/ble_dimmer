/*******************************************************************************
* Filename      : twi1fieldvalues.hpp
*
* Details       : Enumerations related with TWI1 peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(TWI1ENUMS_HPP)
#define TWI1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_SHORTS_BB_SUSPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_SHORTS_BB_SUSPEND_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_SHORTS_BB_SUSPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_SHORTS_BB_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_SHORTS_BB_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_SHORTS_BB_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENSET_STOPPED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENSET_STOPPED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENSET_STOPPED_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI1_INTENSET_STOPPED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENSET_RXDREADY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENSET_RXDREADY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENSET_RXDREADY_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI1_INTENSET_RXDREADY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENSET_TXDSENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENSET_TXDSENT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENSET_TXDSENT_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI1_INTENSET_TXDSENT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENSET_ERROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENSET_ERROR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENSET_ERROR_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI1_INTENSET_ERROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENSET_BB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENSET_BB_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENSET_BB_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI1_INTENSET_BB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENSET_SUSPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENSET_SUSPENDED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENSET_SUSPENDED_Values, BaseType, 1U> ;
  using Set = FieldValue<TWI1_INTENSET_SUSPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENCLR_STOPPED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENCLR_STOPPED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENCLR_STOPPED_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI1_INTENCLR_STOPPED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENCLR_RXDREADY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENCLR_RXDREADY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENCLR_RXDREADY_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI1_INTENCLR_RXDREADY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENCLR_TXDSENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENCLR_TXDSENT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENCLR_TXDSENT_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI1_INTENCLR_TXDSENT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENCLR_ERROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENCLR_ERROR_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENCLR_ERROR_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI1_INTENCLR_ERROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENCLR_BB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENCLR_BB_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENCLR_BB_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI1_INTENCLR_BB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_INTENCLR_SUSPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_INTENCLR_SUSPENDED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_INTENCLR_SUSPENDED_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI1_INTENCLR_SUSPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_ERRORSRC_OVERRUN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<TWI1_ERRORSRC_OVERRUN_Values, BaseType, 0U> ;
  using Present = FieldValue<TWI1_ERRORSRC_OVERRUN_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI1_ERRORSRC_OVERRUN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_ERRORSRC_ANACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<TWI1_ERRORSRC_ANACK_Values, BaseType, 0U> ;
  using Present = FieldValue<TWI1_ERRORSRC_ANACK_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI1_ERRORSRC_ANACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_ERRORSRC_DNACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPresent = FieldValue<TWI1_ERRORSRC_DNACK_Values, BaseType, 0U> ;
  using Present = FieldValue<TWI1_ERRORSRC_DNACK_Values, BaseType, 1U> ;
  using Clear = FieldValue<TWI1_ERRORSRC_DNACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_ENABLE_ENABLE_Values, BaseType, 5U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_RXD_RXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_TXD_TXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_FREQUENCY_FREQUENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_ADDRESS_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TWI1_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<TWI1_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<TWI1_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(TWI1ENUMS_HPP)
