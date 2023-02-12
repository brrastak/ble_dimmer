/*******************************************************************************
* Filename      : powerfieldvalues.hpp
*
* Details       : Enumerations related with POWER peripheral. This header file
*                 is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(POWERENUMS_HPP)
#define POWERENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_INTENSET_POFWARN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<POWER_INTENSET_POFWARN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<POWER_INTENSET_POFWARN_Values, BaseType, 1U> ;
  using Set = FieldValue<POWER_INTENSET_POFWARN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_INTENCLR_POFWARN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<POWER_INTENCLR_POFWARN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<POWER_INTENCLR_POFWARN_Values, BaseType, 1U> ;
  using Clear = FieldValue<POWER_INTENCLR_POFWARN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RESETREAS_RESETPIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotDetected = FieldValue<POWER_RESETREAS_RESETPIN_Values, BaseType, 0U> ;
  using Detected = FieldValue<POWER_RESETREAS_RESETPIN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RESETREAS_DOG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotDetected = FieldValue<POWER_RESETREAS_DOG_Values, BaseType, 0U> ;
  using Detected = FieldValue<POWER_RESETREAS_DOG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RESETREAS_SREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotDetected = FieldValue<POWER_RESETREAS_SREQ_Values, BaseType, 0U> ;
  using Detected = FieldValue<POWER_RESETREAS_SREQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RESETREAS_LOCKUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotDetected = FieldValue<POWER_RESETREAS_LOCKUP_Values, BaseType, 0U> ;
  using Detected = FieldValue<POWER_RESETREAS_LOCKUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RESETREAS_OFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotDetected = FieldValue<POWER_RESETREAS_OFF_Values, BaseType, 0U> ;
  using Detected = FieldValue<POWER_RESETREAS_OFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RESETREAS_LPCOMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotDetected = FieldValue<POWER_RESETREAS_LPCOMP_Values, BaseType, 0U> ;
  using Detected = FieldValue<POWER_RESETREAS_LPCOMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RESETREAS_DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotDetected = FieldValue<POWER_RESETREAS_DIF_Values, BaseType, 0U> ;
  using Detected = FieldValue<POWER_RESETREAS_DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMSTATUS_RAMBLOCK0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<POWER_RAMSTATUS_RAMBLOCK0_Values, BaseType, 0U> ;
  using On = FieldValue<POWER_RAMSTATUS_RAMBLOCK0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMSTATUS_RAMBLOCK1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<POWER_RAMSTATUS_RAMBLOCK1_Values, BaseType, 0U> ;
  using On = FieldValue<POWER_RAMSTATUS_RAMBLOCK1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMSTATUS_RAMBLOCK2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<POWER_RAMSTATUS_RAMBLOCK2_Values, BaseType, 0U> ;
  using On = FieldValue<POWER_RAMSTATUS_RAMBLOCK2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMSTATUS_RAMBLOCK3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<POWER_RAMSTATUS_RAMBLOCK3_Values, BaseType, 0U> ;
  using On = FieldValue<POWER_RAMSTATUS_RAMBLOCK3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_SYSTEMOFF_SYSTEMOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Enter = FieldValue<POWER_SYSTEMOFF_SYSTEMOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_POFCON_POF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<POWER_POFCON_POF_Values, BaseType, 0U> ;
  using Enabled = FieldValue<POWER_POFCON_POF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_POFCON_THRESHOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using V21 = FieldValue<POWER_POFCON_THRESHOLD_Values, BaseType, 0U> ;
  using V23 = FieldValue<POWER_POFCON_THRESHOLD_Values, BaseType, 1U> ;
  using V25 = FieldValue<POWER_POFCON_THRESHOLD_Values, BaseType, 2U> ;
  using V27 = FieldValue<POWER_POFCON_THRESHOLD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_GPREGRET_GPREGRET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMON_ONRAM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RAM0Off = FieldValue<POWER_RAMON_ONRAM0_Values, BaseType, 0U> ;
  using RAM0On = FieldValue<POWER_RAMON_ONRAM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMON_ONRAM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RAM1Off = FieldValue<POWER_RAMON_ONRAM1_Values, BaseType, 0U> ;
  using RAM1On = FieldValue<POWER_RAMON_ONRAM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMON_OFFRAM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RAM0Off = FieldValue<POWER_RAMON_OFFRAM0_Values, BaseType, 0U> ;
  using RAM0On = FieldValue<POWER_RAMON_OFFRAM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMON_OFFRAM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RAM1Off = FieldValue<POWER_RAMON_OFFRAM1_Values, BaseType, 0U> ;
  using RAM1On = FieldValue<POWER_RAMON_OFFRAM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RESET_RESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<POWER_RESET_RESET_Values, BaseType, 0U> ;
  using Enabled = FieldValue<POWER_RESET_RESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMONB_ONRAM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RAM2Off = FieldValue<POWER_RAMONB_ONRAM2_Values, BaseType, 0U> ;
  using RAM2On = FieldValue<POWER_RAMONB_ONRAM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMONB_ONRAM3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RAM3Off = FieldValue<POWER_RAMONB_ONRAM3_Values, BaseType, 0U> ;
  using RAM3On = FieldValue<POWER_RAMONB_ONRAM3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMONB_OFFRAM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RAM2Off = FieldValue<POWER_RAMONB_OFFRAM2_Values, BaseType, 0U> ;
  using RAM2On = FieldValue<POWER_RAMONB_OFFRAM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_RAMONB_OFFRAM3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RAM3Off = FieldValue<POWER_RAMONB_OFFRAM3_Values, BaseType, 0U> ;
  using RAM3On = FieldValue<POWER_RAMONB_OFFRAM3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_DCDCEN_DCDCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<POWER_DCDCEN_DCDCEN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<POWER_DCDCEN_DCDCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_DCDCFORCE_FORCEOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoForce = FieldValue<POWER_DCDCFORCE_FORCEOFF_Values, BaseType, 0U> ;
  using Force = FieldValue<POWER_DCDCFORCE_FORCEOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct POWER_DCDCFORCE_FORCEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoForce = FieldValue<POWER_DCDCFORCE_FORCEON_Values, BaseType, 0U> ;
  using Force = FieldValue<POWER_DCDCFORCE_FORCEON_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(POWERENUMS_HPP)
