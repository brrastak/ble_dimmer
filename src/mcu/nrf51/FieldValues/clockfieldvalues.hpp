/*******************************************************************************
* Filename      : clockfieldvalues.hpp
*
* Details       : Enumerations related with CLOCK peripheral. This header file
*                 is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(CLOCKENUMS_HPP)
#define CLOCKENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_INTENSET_HFCLKSTARTED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CLOCK_INTENSET_HFCLKSTARTED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CLOCK_INTENSET_HFCLKSTARTED_Values, BaseType, 1U> ;
  using Set = FieldValue<CLOCK_INTENSET_HFCLKSTARTED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_INTENSET_LFCLKSTARTED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CLOCK_INTENSET_LFCLKSTARTED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CLOCK_INTENSET_LFCLKSTARTED_Values, BaseType, 1U> ;
  using Set = FieldValue<CLOCK_INTENSET_LFCLKSTARTED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_INTENSET_DONE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CLOCK_INTENSET_DONE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CLOCK_INTENSET_DONE_Values, BaseType, 1U> ;
  using Set = FieldValue<CLOCK_INTENSET_DONE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_INTENSET_CTTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CLOCK_INTENSET_CTTO_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CLOCK_INTENSET_CTTO_Values, BaseType, 1U> ;
  using Set = FieldValue<CLOCK_INTENSET_CTTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_INTENCLR_HFCLKSTARTED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CLOCK_INTENCLR_HFCLKSTARTED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CLOCK_INTENCLR_HFCLKSTARTED_Values, BaseType, 1U> ;
  using Clear = FieldValue<CLOCK_INTENCLR_HFCLKSTARTED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_INTENCLR_LFCLKSTARTED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CLOCK_INTENCLR_LFCLKSTARTED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CLOCK_INTENCLR_LFCLKSTARTED_Values, BaseType, 1U> ;
  using Clear = FieldValue<CLOCK_INTENCLR_LFCLKSTARTED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_INTENCLR_DONE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CLOCK_INTENCLR_DONE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CLOCK_INTENCLR_DONE_Values, BaseType, 1U> ;
  using Clear = FieldValue<CLOCK_INTENCLR_DONE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_INTENCLR_CTTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<CLOCK_INTENCLR_CTTO_Values, BaseType, 0U> ;
  using Enabled = FieldValue<CLOCK_INTENCLR_CTTO_Values, BaseType, 1U> ;
  using Clear = FieldValue<CLOCK_INTENCLR_CTTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_HFCLKRUN_STATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotTriggered = FieldValue<CLOCK_HFCLKRUN_STATUS_Values, BaseType, 0U> ;
  using Triggered = FieldValue<CLOCK_HFCLKRUN_STATUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_HFCLKSTAT_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RC = FieldValue<CLOCK_HFCLKSTAT_SRC_Values, BaseType, 0U> ;
  using Xtal = FieldValue<CLOCK_HFCLKSTAT_SRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_HFCLKSTAT_STATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotRunning = FieldValue<CLOCK_HFCLKSTAT_STATE_Values, BaseType, 0U> ;
  using Running = FieldValue<CLOCK_HFCLKSTAT_STATE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_LFCLKRUN_STATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotTriggered = FieldValue<CLOCK_LFCLKRUN_STATUS_Values, BaseType, 0U> ;
  using Triggered = FieldValue<CLOCK_LFCLKRUN_STATUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_LFCLKSTAT_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RC = FieldValue<CLOCK_LFCLKSTAT_SRC_Values, BaseType, 0U> ;
  using Xtal = FieldValue<CLOCK_LFCLKSTAT_SRC_Values, BaseType, 1U> ;
  using Synth = FieldValue<CLOCK_LFCLKSTAT_SRC_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_LFCLKSTAT_STATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotRunning = FieldValue<CLOCK_LFCLKSTAT_STATE_Values, BaseType, 0U> ;
  using Running = FieldValue<CLOCK_LFCLKSTAT_STATE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_LFCLKSRCCOPY_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RC = FieldValue<CLOCK_LFCLKSRCCOPY_SRC_Values, BaseType, 0U> ;
  using Xtal = FieldValue<CLOCK_LFCLKSRCCOPY_SRC_Values, BaseType, 1U> ;
  using Synth = FieldValue<CLOCK_LFCLKSRCCOPY_SRC_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_LFCLKSRC_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RC = FieldValue<CLOCK_LFCLKSRC_SRC_Values, BaseType, 0U> ;
  using Xtal = FieldValue<CLOCK_LFCLKSRC_SRC_Values, BaseType, 1U> ;
  using Synth = FieldValue<CLOCK_LFCLKSRC_SRC_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_CTIV_CTIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CLOCK_XTALFREQ_XTALFREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(CLOCKENUMS_HPP)
