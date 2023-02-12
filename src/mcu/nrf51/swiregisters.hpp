/*******************************************************************************
* Filename      : swiregisters.hpp
*
* Details       : SW Interrupts. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(SWIREGISTERS_HPP)
#define SWIREGISTERS_HPP

#include "swifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SWI
{
  struct SWIUNUSEDBase {} ;

  struct UNUSED : public RegisterBase<0x40014000, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using UNUSEDPack  = Register<0x40014000, 32, ReadMode, SWIUNUSEDBase, T...> ;

} ;

#endif //#if !defined(SWIREGISTERS_HPP)
