/*******************************************************************************
* Filename      : gpioteregisters.hpp
*
* Details       : GPIO tasks and events. This header file is auto-generated for
*                 nrf51 device.
*
*
*******************************************************************************/

#if !defined(GPIOTEREGISTERS_HPP)
#define GPIOTEREGISTERS_HPP

#include "gpiotefieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOTE
{
  struct GPIOTEEVENTS_PORTBase {} ;

  struct EVENTS_PORT : public RegisterBase<0x4000617C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_PORTPack  = Register<0x4000617C, 32, ReadWriteMode, GPIOTEEVENTS_PORTBase, T...> ;

  struct GPIOTEINTENSETBase {} ;

  struct INTENSET : public RegisterBase<0x40006304, 32, ReadWriteMode>
  {
    using IN0 = GPIOTE_INTENSET_IN0_Values<GPIOTE::INTENSET, 0, 1, ReadWriteMode, GPIOTEINTENSETBase> ;
    using IN1 = GPIOTE_INTENSET_IN1_Values<GPIOTE::INTENSET, 1, 1, ReadWriteMode, GPIOTEINTENSETBase> ;
    using IN2 = GPIOTE_INTENSET_IN2_Values<GPIOTE::INTENSET, 2, 1, ReadWriteMode, GPIOTEINTENSETBase> ;
    using IN3 = GPIOTE_INTENSET_IN3_Values<GPIOTE::INTENSET, 3, 1, ReadWriteMode, GPIOTEINTENSETBase> ;
    using PORT = GPIOTE_INTENSET_PORT_Values<GPIOTE::INTENSET, 31, 1, ReadWriteMode, GPIOTEINTENSETBase> ;
    using FieldValues = GPIOTE_INTENSET_PORT_Values<GPIOTE::INTENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENSETPack  = Register<0x40006304, 32, ReadWriteMode, GPIOTEINTENSETBase, T...> ;

  struct GPIOTEINTENCLRBase {} ;

  struct INTENCLR : public RegisterBase<0x40006308, 32, ReadWriteMode>
  {
    using IN0 = GPIOTE_INTENCLR_IN0_Values<GPIOTE::INTENCLR, 0, 1, ReadWriteMode, GPIOTEINTENCLRBase> ;
    using IN1 = GPIOTE_INTENCLR_IN1_Values<GPIOTE::INTENCLR, 1, 1, ReadWriteMode, GPIOTEINTENCLRBase> ;
    using IN2 = GPIOTE_INTENCLR_IN2_Values<GPIOTE::INTENCLR, 2, 1, ReadWriteMode, GPIOTEINTENCLRBase> ;
    using IN3 = GPIOTE_INTENCLR_IN3_Values<GPIOTE::INTENCLR, 3, 1, ReadWriteMode, GPIOTEINTENCLRBase> ;
    using PORT = GPIOTE_INTENCLR_PORT_Values<GPIOTE::INTENCLR, 31, 1, ReadWriteMode, GPIOTEINTENCLRBase> ;
    using FieldValues = GPIOTE_INTENCLR_PORT_Values<GPIOTE::INTENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENCLRPack  = Register<0x40006308, 32, ReadWriteMode, GPIOTEINTENCLRBase, T...> ;

  struct GPIOTEPOWERBase {} ;

  struct POWER : public RegisterBase<0x40006FFC, 32, ReadWriteMode>
  {
    using POWERField = GPIOTE_POWER_POWER_Values<GPIOTE::POWER, 0, 1, ReadWriteMode, GPIOTEPOWERBase> ;
    using FieldValues = GPIOTE_POWER_POWER_Values<GPIOTE::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40006FFC, 32, ReadWriteMode, GPIOTEPOWERBase, T...> ;

  struct GPIOTETASKS_OUT0Base {} ;

  struct TASKS_OUT0 : public RegisterBase<0x40006000, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_OUT0Pack  = Register<0x40006000, 32, WriteMode, GPIOTETASKS_OUT0Base, T...> ;

  struct GPIOTETASKS_OUT1Base {} ;

  struct TASKS_OUT1 : public RegisterBase<0x40006004, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_OUT1Pack  = Register<0x40006004, 32, WriteMode, GPIOTETASKS_OUT1Base, T...> ;

  struct GPIOTETASKS_OUT2Base {} ;

  struct TASKS_OUT2 : public RegisterBase<0x40006008, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_OUT2Pack  = Register<0x40006008, 32, WriteMode, GPIOTETASKS_OUT2Base, T...> ;

  struct GPIOTETASKS_OUT3Base {} ;

  struct TASKS_OUT3 : public RegisterBase<0x4000600C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using TASKS_OUT3Pack  = Register<0x4000600C, 32, WriteMode, GPIOTETASKS_OUT3Base, T...> ;

  struct GPIOTEEVENTS_IN0Base {} ;

  struct EVENTS_IN0 : public RegisterBase<0x40006100, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_IN0Pack  = Register<0x40006100, 32, ReadWriteMode, GPIOTEEVENTS_IN0Base, T...> ;

  struct GPIOTEEVENTS_IN1Base {} ;

  struct EVENTS_IN1 : public RegisterBase<0x40006104, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_IN1Pack  = Register<0x40006104, 32, ReadWriteMode, GPIOTEEVENTS_IN1Base, T...> ;

  struct GPIOTEEVENTS_IN2Base {} ;

  struct EVENTS_IN2 : public RegisterBase<0x40006108, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_IN2Pack  = Register<0x40006108, 32, ReadWriteMode, GPIOTEEVENTS_IN2Base, T...> ;

  struct GPIOTEEVENTS_IN3Base {} ;

  struct EVENTS_IN3 : public RegisterBase<0x4000610C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using EVENTS_IN3Pack  = Register<0x4000610C, 32, ReadWriteMode, GPIOTEEVENTS_IN3Base, T...> ;

  struct GPIOTECONFIG0Base {} ;

  struct CONFIG0 : public RegisterBase<0x40006510, 32, ReadWriteMode>
  {
    using MODE = GPIOTE_CONFIG0_MODE_Values<GPIOTE::CONFIG0, 0, 2, ReadWriteMode, GPIOTECONFIG0Base> ;
    using PSEL = GPIOTE_CONFIG0_PSEL_Values<GPIOTE::CONFIG0, 8, 5, ReadWriteMode, GPIOTECONFIG0Base> ;
    using POLARITY = GPIOTE_CONFIG0_POLARITY_Values<GPIOTE::CONFIG0, 16, 2, ReadWriteMode, GPIOTECONFIG0Base> ;
    using OUTINIT = GPIOTE_CONFIG0_OUTINIT_Values<GPIOTE::CONFIG0, 20, 1, ReadWriteMode, GPIOTECONFIG0Base> ;
    using FieldValues = GPIOTE_CONFIG0_OUTINIT_Values<GPIOTE::CONFIG0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIG0Pack  = Register<0x40006510, 32, ReadWriteMode, GPIOTECONFIG0Base, T...> ;

  struct GPIOTECONFIG1Base {} ;

  struct CONFIG1 : public RegisterBase<0x40006514, 32, ReadWriteMode>
  {
    using MODE = GPIOTE_CONFIG1_MODE_Values<GPIOTE::CONFIG1, 0, 2, ReadWriteMode, GPIOTECONFIG1Base> ;
    using PSEL = GPIOTE_CONFIG1_PSEL_Values<GPIOTE::CONFIG1, 8, 5, ReadWriteMode, GPIOTECONFIG1Base> ;
    using POLARITY = GPIOTE_CONFIG1_POLARITY_Values<GPIOTE::CONFIG1, 16, 2, ReadWriteMode, GPIOTECONFIG1Base> ;
    using OUTINIT = GPIOTE_CONFIG1_OUTINIT_Values<GPIOTE::CONFIG1, 20, 1, ReadWriteMode, GPIOTECONFIG1Base> ;
    using FieldValues = GPIOTE_CONFIG1_OUTINIT_Values<GPIOTE::CONFIG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIG1Pack  = Register<0x40006514, 32, ReadWriteMode, GPIOTECONFIG1Base, T...> ;

  struct GPIOTECONFIG2Base {} ;

  struct CONFIG2 : public RegisterBase<0x40006518, 32, ReadWriteMode>
  {
    using MODE = GPIOTE_CONFIG2_MODE_Values<GPIOTE::CONFIG2, 0, 2, ReadWriteMode, GPIOTECONFIG2Base> ;
    using PSEL = GPIOTE_CONFIG2_PSEL_Values<GPIOTE::CONFIG2, 8, 5, ReadWriteMode, GPIOTECONFIG2Base> ;
    using POLARITY = GPIOTE_CONFIG2_POLARITY_Values<GPIOTE::CONFIG2, 16, 2, ReadWriteMode, GPIOTECONFIG2Base> ;
    using OUTINIT = GPIOTE_CONFIG2_OUTINIT_Values<GPIOTE::CONFIG2, 20, 1, ReadWriteMode, GPIOTECONFIG2Base> ;
    using FieldValues = GPIOTE_CONFIG2_OUTINIT_Values<GPIOTE::CONFIG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIG2Pack  = Register<0x40006518, 32, ReadWriteMode, GPIOTECONFIG2Base, T...> ;

  struct GPIOTECONFIG3Base {} ;

  struct CONFIG3 : public RegisterBase<0x4000651C, 32, ReadWriteMode>
  {
    using MODE = GPIOTE_CONFIG3_MODE_Values<GPIOTE::CONFIG3, 0, 2, ReadWriteMode, GPIOTECONFIG3Base> ;
    using PSEL = GPIOTE_CONFIG3_PSEL_Values<GPIOTE::CONFIG3, 8, 5, ReadWriteMode, GPIOTECONFIG3Base> ;
    using POLARITY = GPIOTE_CONFIG3_POLARITY_Values<GPIOTE::CONFIG3, 16, 2, ReadWriteMode, GPIOTECONFIG3Base> ;
    using OUTINIT = GPIOTE_CONFIG3_OUTINIT_Values<GPIOTE::CONFIG3, 20, 1, ReadWriteMode, GPIOTECONFIG3Base> ;
    using FieldValues = GPIOTE_CONFIG3_OUTINIT_Values<GPIOTE::CONFIG3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFIG3Pack  = Register<0x4000651C, 32, ReadWriteMode, GPIOTECONFIG3Base, T...> ;

} ;

#endif //#if !defined(GPIOTEREGISTERS_HPP)
