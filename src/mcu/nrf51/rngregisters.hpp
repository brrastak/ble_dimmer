/*******************************************************************************
* Filename      : rngregisters.hpp
*
* Details       : Random Number Generator. This header file is auto-generated
*                 for nrf51 device.
*
*
*******************************************************************************/

#if !defined(RNGREGISTERS_HPP)
#define RNGREGISTERS_HPP

#include "rngfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RNG
{
  struct RNGTASKS_STARTBase {} ;

  struct TASKS_START : public RegisterBase<0x4000D000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STARTPack  = Register<0x4000D000, 32, WriteMode, RNGTASKS_STARTBase, T...> ;

  struct RNGTASKS_STOPBase {} ;

  struct TASKS_STOP : public RegisterBase<0x4000D004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_STOPPack  = Register<0x4000D004, 32, WriteMode, RNGTASKS_STOPBase, T...> ;

  struct RNGEVENTS_VALRDYBase {} ;

  struct EVENTS_VALRDY : public RegisterBase<0x4000D100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_VALRDYPack  = Register<0x4000D100, 32, ReadWriteMode, RNGEVENTS_VALRDYBase, T...> ;

  struct RNGSHORTSBase {} ;

  struct SHORTS : public RegisterBase<0x4000D200, 32, ReadWriteMode>
  {
    using VALRDY_STOP = RNG_SHORTS_VALRDY_STOP_Values<RNG::SHORTS, 0, 1, ReadWriteMode, RNGSHORTSBase> ;
    using FieldValues = RNG_SHORTS_VALRDY_STOP_Values<RNG::SHORTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHORTSPack  = Register<0x4000D200, 32, ReadWriteMode, RNGSHORTSBase, T...> ;

  struct RNGINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x4000D304, 32, ReadWriteMode>
  {
    using VALRDY = RNG_INTENSET_VALRDY_Values<RNG::INTENSET, 0, 1, ReadWriteMode, RNGINTENSETBase> ;
    using FieldValues = RNG_INTENSET_VALRDY_Values<RNG::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x4000D304, 32, ReadWriteMode, RNGINTENSETBase, T...> ;

  struct RNGINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x4000D308, 32, ReadWriteMode>
  {
    using VALRDY = RNG_INTENCLR_VALRDY_Values<RNG::INTENCLR, 0, 1, ReadWriteMode, RNGINTENCLRBase> ;
    using FieldValues = RNG_INTENCLR_VALRDY_Values<RNG::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x4000D308, 32, ReadWriteMode, RNGINTENCLRBase, T...> ;

  struct RNGCONFIGBase {} ;

  struct CONFIG : public RegisterBase<0x4000D504, 32, ReadWriteMode>
  {
    using DERCEN = RNG_CONFIG_DERCEN_Values<RNG::CONFIG, 0, 1, ReadWriteMode, RNGCONFIGBase> ;
    using FieldValues = RNG_CONFIG_DERCEN_Values<RNG::CONFIG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIGPack  = Register<0x4000D504, 32, ReadWriteMode, RNGCONFIGBase, T...> ;

  struct RNGVALUEBase {} ;

  struct VALUE : public RegisterBase<0x4000D508, 32, ReadMode>
  {
    using VALUEField = RNG_VALUE_VALUE_Values<RNG::VALUE, 0, 8, ReadMode, RNGVALUEBase> ;
    using FieldValues = RNG_VALUE_VALUE_Values<RNG::VALUE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VALUEPack  = Register<0x4000D508, 32, ReadMode, RNGVALUEBase, T...> ;

  struct RNGPOWERBase {} ;

  struct POWER : public RegisterBase<0x4000DFFC, 32, ReadWriteMode>
  {
    using POWERField = RNG_POWER_POWER_Values<RNG::POWER, 0, 1, ReadWriteMode, RNGPOWERBase> ;
    using FieldValues = RNG_POWER_POWER_Values<RNG::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x4000DFFC, 32, ReadWriteMode, RNGPOWERBase, T...> ;

} ;

#endif //#if !defined(RNGREGISTERS_HPP)
