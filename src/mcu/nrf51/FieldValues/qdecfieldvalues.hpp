/*******************************************************************************
* Filename      : qdecfieldvalues.hpp
*
* Details       : Enumerations related with QDEC peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(QDECENUMS_HPP)
#define QDECENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_SHORTS_REPORTRDY_READCLRACC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_SHORTS_REPORTRDY_READCLRACC_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_SHORTS_REPORTRDY_READCLRACC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_SHORTS_SAMPLERDY_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_SHORTS_SAMPLERDY_STOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_SHORTS_SAMPLERDY_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_INTENSET_SAMPLERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_INTENSET_SAMPLERDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_INTENSET_SAMPLERDY_Values, BaseType, 1U> ;
  using Set = FieldValue<QDEC_INTENSET_SAMPLERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_INTENSET_REPORTRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_INTENSET_REPORTRDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_INTENSET_REPORTRDY_Values, BaseType, 1U> ;
  using Set = FieldValue<QDEC_INTENSET_REPORTRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_INTENSET_ACCOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_INTENSET_ACCOF_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_INTENSET_ACCOF_Values, BaseType, 1U> ;
  using Set = FieldValue<QDEC_INTENSET_ACCOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_INTENCLR_SAMPLERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_INTENCLR_SAMPLERDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_INTENCLR_SAMPLERDY_Values, BaseType, 1U> ;
  using Clear = FieldValue<QDEC_INTENCLR_SAMPLERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_INTENCLR_REPORTRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_INTENCLR_REPORTRDY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_INTENCLR_REPORTRDY_Values, BaseType, 1U> ;
  using Clear = FieldValue<QDEC_INTENCLR_REPORTRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_INTENCLR_ACCOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_INTENCLR_ACCOF_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_INTENCLR_ACCOF_Values, BaseType, 1U> ;
  using Clear = FieldValue<QDEC_INTENCLR_ACCOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_ENABLE_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_ENABLE_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_ENABLE_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_LEDPOL_LEDPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ActiveLow = FieldValue<QDEC_LEDPOL_LEDPOL_Values, BaseType, 0U> ;
  using ActiveHigh = FieldValue<QDEC_LEDPOL_LEDPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_SAMPLEPER_SAMPLEPER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using _128us = FieldValue<QDEC_SAMPLEPER_SAMPLEPER_Values, BaseType, 0U> ;
  using _256us = FieldValue<QDEC_SAMPLEPER_SAMPLEPER_Values, BaseType, 1U> ;
  using _512us = FieldValue<QDEC_SAMPLEPER_SAMPLEPER_Values, BaseType, 2U> ;
  using _1024us = FieldValue<QDEC_SAMPLEPER_SAMPLEPER_Values, BaseType, 3U> ;
  using _2048us = FieldValue<QDEC_SAMPLEPER_SAMPLEPER_Values, BaseType, 4U> ;
  using _4096us = FieldValue<QDEC_SAMPLEPER_SAMPLEPER_Values, BaseType, 5U> ;
  using _8192us = FieldValue<QDEC_SAMPLEPER_SAMPLEPER_Values, BaseType, 6U> ;
  using _16384us = FieldValue<QDEC_SAMPLEPER_SAMPLEPER_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_SAMPLE_SAMPLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_REPORTPER_REPORTPER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using _10Smpl = FieldValue<QDEC_REPORTPER_REPORTPER_Values, BaseType, 0U> ;
  using _40Smpl = FieldValue<QDEC_REPORTPER_REPORTPER_Values, BaseType, 1U> ;
  using _80Smpl = FieldValue<QDEC_REPORTPER_REPORTPER_Values, BaseType, 2U> ;
  using _120Smpl = FieldValue<QDEC_REPORTPER_REPORTPER_Values, BaseType, 3U> ;
  using _160Smpl = FieldValue<QDEC_REPORTPER_REPORTPER_Values, BaseType, 4U> ;
  using _200Smpl = FieldValue<QDEC_REPORTPER_REPORTPER_Values, BaseType, 5U> ;
  using _240Smpl = FieldValue<QDEC_REPORTPER_REPORTPER_Values, BaseType, 6U> ;
  using _280Smpl = FieldValue<QDEC_REPORTPER_REPORTPER_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_DBFEN_DBFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_DBFEN_DBFEN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_DBFEN_DBFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_LEDPRE_LEDPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_ACCDBL_ACCDBL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<QDEC_ACCDBL_ACCDBL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_ACCDBLREAD_ACCDBLREAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<QDEC_ACCDBLREAD_ACCDBLREAD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QDEC_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<QDEC_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<QDEC_POWER_POWER_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(QDECENUMS_HPP)
