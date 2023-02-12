/*******************************************************************************
* Filename      : aarfieldvalues.hpp
*
* Details       : Enumerations related with AAR peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(AARENUMS_HPP)
#define AARENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_INTENSET_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<AAR_INTENSET_END_Values, BaseType, 0U> ;
  using Enabled = FieldValue<AAR_INTENSET_END_Values, BaseType, 1U> ;
  using Set = FieldValue<AAR_INTENSET_END_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_INTENSET_RESOLVED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<AAR_INTENSET_RESOLVED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<AAR_INTENSET_RESOLVED_Values, BaseType, 1U> ;
  using Set = FieldValue<AAR_INTENSET_RESOLVED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_INTENSET_NOTRESOLVED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<AAR_INTENSET_NOTRESOLVED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<AAR_INTENSET_NOTRESOLVED_Values, BaseType, 1U> ;
  using Set = FieldValue<AAR_INTENSET_NOTRESOLVED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_INTENCLR_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<AAR_INTENCLR_END_Values, BaseType, 0U> ;
  using Enabled = FieldValue<AAR_INTENCLR_END_Values, BaseType, 1U> ;
  using Clear = FieldValue<AAR_INTENCLR_END_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_INTENCLR_RESOLVED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<AAR_INTENCLR_RESOLVED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<AAR_INTENCLR_RESOLVED_Values, BaseType, 1U> ;
  using Clear = FieldValue<AAR_INTENCLR_RESOLVED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_INTENCLR_NOTRESOLVED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<AAR_INTENCLR_NOTRESOLVED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<AAR_INTENCLR_NOTRESOLVED_Values, BaseType, 1U> ;
  using Clear = FieldValue<AAR_INTENCLR_NOTRESOLVED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_STATUS_STATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AAR_STATUS_STATUS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<AAR_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<AAR_ENABLE_ENABLE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_NIRK_NIRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 15U> ;
  using Value16 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 16U> ;
  using Value17 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 17U> ;
  using Value18 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 18U> ;
  using Value19 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 19U> ;
  using Value20 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 20U> ;
  using Value21 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 21U> ;
  using Value22 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 22U> ;
  using Value23 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 23U> ;
  using Value24 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 24U> ;
  using Value25 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 25U> ;
  using Value26 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 26U> ;
  using Value27 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 27U> ;
  using Value28 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 28U> ;
  using Value29 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 29U> ;
  using Value30 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 30U> ;
  using Value31 = FieldValue<AAR_NIRK_NIRK_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AAR_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<AAR_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<AAR_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(AARENUMS_HPP)
