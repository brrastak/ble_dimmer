/*******************************************************************************
* Filename      : uicrfieldvalues.hpp
*
* Details       : Enumerations related with UICR peripheral. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(UICRENUMS_HPP)
#define UICRENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UICR_RBPCONF_PR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UICR_RBPCONF_PALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UICR_XTALFREQ_XTALFREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UICR_FWID_FWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(UICRENUMS_HPP)
