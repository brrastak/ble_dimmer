/*******************************************************************************
* Filename      : wdtfieldvalues.hpp
*
* Details       : Enumerations related with WDT peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(WDTENUMS_HPP)
#define WDTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_INTENSET_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_INTENSET_TIMEOUT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_INTENSET_TIMEOUT_Values, BaseType, 1U> ;
  using Set = FieldValue<WDT_INTENSET_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_INTENCLR_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_INTENCLR_TIMEOUT_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_INTENCLR_TIMEOUT_Values, BaseType, 1U> ;
  using Clear = FieldValue<WDT_INTENCLR_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RUNSTATUS_RUNSTATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotRunning = FieldValue<WDT_RUNSTATUS_RUNSTATUS_Values, BaseType, 0U> ;
  using Running = FieldValue<WDT_RUNSTATUS_RUNSTATUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_REQSTATUS_RR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisabledOrRequested = FieldValue<WDT_REQSTATUS_RR0_Values, BaseType, 0U> ;
  using EnabledAndUnrequested = FieldValue<WDT_REQSTATUS_RR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_REQSTATUS_RR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisabledOrRequested = FieldValue<WDT_REQSTATUS_RR1_Values, BaseType, 0U> ;
  using EnabledAndUnrequested = FieldValue<WDT_REQSTATUS_RR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_REQSTATUS_RR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisabledOrRequested = FieldValue<WDT_REQSTATUS_RR2_Values, BaseType, 0U> ;
  using EnabledAndUnrequested = FieldValue<WDT_REQSTATUS_RR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_REQSTATUS_RR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisabledOrRequested = FieldValue<WDT_REQSTATUS_RR3_Values, BaseType, 0U> ;
  using EnabledAndUnrequested = FieldValue<WDT_REQSTATUS_RR3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_REQSTATUS_RR4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisabledOrRequested = FieldValue<WDT_REQSTATUS_RR4_Values, BaseType, 0U> ;
  using EnabledAndUnrequested = FieldValue<WDT_REQSTATUS_RR4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_REQSTATUS_RR5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisabledOrRequested = FieldValue<WDT_REQSTATUS_RR5_Values, BaseType, 0U> ;
  using EnabledAndUnrequested = FieldValue<WDT_REQSTATUS_RR5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_REQSTATUS_RR6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisabledOrRequested = FieldValue<WDT_REQSTATUS_RR6_Values, BaseType, 0U> ;
  using EnabledAndUnrequested = FieldValue<WDT_REQSTATUS_RR6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_REQSTATUS_RR7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisabledOrRequested = FieldValue<WDT_REQSTATUS_RR7_Values, BaseType, 0U> ;
  using EnabledAndUnrequested = FieldValue<WDT_REQSTATUS_RR7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RREN_RR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_RREN_RR0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_RREN_RR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RREN_RR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_RREN_RR1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_RREN_RR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RREN_RR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_RREN_RR2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_RREN_RR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RREN_RR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_RREN_RR3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_RREN_RR3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RREN_RR4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_RREN_RR4_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_RREN_RR4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RREN_RR5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_RREN_RR5_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_RREN_RR5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RREN_RR6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_RREN_RR6_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_RREN_RR6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RREN_RR7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_RREN_RR7_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_RREN_RR7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_CONFIG_SLEEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Pause = FieldValue<WDT_CONFIG_SLEEP_Values, BaseType, 0U> ;
  using Run = FieldValue<WDT_CONFIG_SLEEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_CONFIG_HALT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Pause = FieldValue<WDT_CONFIG_HALT_Values, BaseType, 0U> ;
  using Run = FieldValue<WDT_CONFIG_HALT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<WDT_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<WDT_POWER_POWER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RR0_RR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RR1_RR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RR2_RR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RR3_RR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RR4_RR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RR5_RR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RR6_RR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_RR7_RR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(WDTENUMS_HPP)
