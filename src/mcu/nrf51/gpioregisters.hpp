/*******************************************************************************
* Filename      : gpioregisters.hpp
*
* Details       : General purpose input and output. This header file is
*                 auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(GPIOREGISTERS_HPP)
#define GPIOREGISTERS_HPP

#include "gpiofieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIO
{
  struct GPIOOUTBase {} ;

  struct OUT : public RegisterBase<0x50000504, 32, ReadWriteMode>
  {
    using PIN0 = GPIO_OUT_PIN0_Values<GPIO::OUT, 0, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN1 = GPIO_OUT_PIN1_Values<GPIO::OUT, 1, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN2 = GPIO_OUT_PIN2_Values<GPIO::OUT, 2, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN3 = GPIO_OUT_PIN3_Values<GPIO::OUT, 3, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN4 = GPIO_OUT_PIN4_Values<GPIO::OUT, 4, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN5 = GPIO_OUT_PIN5_Values<GPIO::OUT, 5, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN6 = GPIO_OUT_PIN6_Values<GPIO::OUT, 6, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN7 = GPIO_OUT_PIN7_Values<GPIO::OUT, 7, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN8 = GPIO_OUT_PIN8_Values<GPIO::OUT, 8, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN9 = GPIO_OUT_PIN9_Values<GPIO::OUT, 9, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN10 = GPIO_OUT_PIN10_Values<GPIO::OUT, 10, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN11 = GPIO_OUT_PIN11_Values<GPIO::OUT, 11, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN12 = GPIO_OUT_PIN12_Values<GPIO::OUT, 12, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN13 = GPIO_OUT_PIN13_Values<GPIO::OUT, 13, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN14 = GPIO_OUT_PIN14_Values<GPIO::OUT, 14, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN15 = GPIO_OUT_PIN15_Values<GPIO::OUT, 15, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN16 = GPIO_OUT_PIN16_Values<GPIO::OUT, 16, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN17 = GPIO_OUT_PIN17_Values<GPIO::OUT, 17, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN18 = GPIO_OUT_PIN18_Values<GPIO::OUT, 18, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN19 = GPIO_OUT_PIN19_Values<GPIO::OUT, 19, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN20 = GPIO_OUT_PIN20_Values<GPIO::OUT, 20, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN21 = GPIO_OUT_PIN21_Values<GPIO::OUT, 21, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN22 = GPIO_OUT_PIN22_Values<GPIO::OUT, 22, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN23 = GPIO_OUT_PIN23_Values<GPIO::OUT, 23, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN24 = GPIO_OUT_PIN24_Values<GPIO::OUT, 24, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN25 = GPIO_OUT_PIN25_Values<GPIO::OUT, 25, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN26 = GPIO_OUT_PIN26_Values<GPIO::OUT, 26, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN27 = GPIO_OUT_PIN27_Values<GPIO::OUT, 27, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN28 = GPIO_OUT_PIN28_Values<GPIO::OUT, 28, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN29 = GPIO_OUT_PIN29_Values<GPIO::OUT, 29, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN30 = GPIO_OUT_PIN30_Values<GPIO::OUT, 30, 1, ReadWriteMode, GPIOOUTBase> ;
    using PIN31 = GPIO_OUT_PIN31_Values<GPIO::OUT, 31, 1, ReadWriteMode, GPIOOUTBase> ;
    using FieldValues = GPIO_OUT_PIN31_Values<GPIO::OUT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OUTPack  = Register<0x50000504, 32, ReadWriteMode, GPIOOUTBase, T...> ;

  struct GPIOOUTSETBase {} ;

  struct OUTSET : public RegisterBase<0x50000508, 32, ReadWriteMode>
  {
    using PIN0 = GPIO_OUTSET_PIN0_Values<GPIO::OUTSET, 0, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN1 = GPIO_OUTSET_PIN1_Values<GPIO::OUTSET, 1, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN2 = GPIO_OUTSET_PIN2_Values<GPIO::OUTSET, 2, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN3 = GPIO_OUTSET_PIN3_Values<GPIO::OUTSET, 3, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN4 = GPIO_OUTSET_PIN4_Values<GPIO::OUTSET, 4, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN5 = GPIO_OUTSET_PIN5_Values<GPIO::OUTSET, 5, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN6 = GPIO_OUTSET_PIN6_Values<GPIO::OUTSET, 6, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN7 = GPIO_OUTSET_PIN7_Values<GPIO::OUTSET, 7, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN8 = GPIO_OUTSET_PIN8_Values<GPIO::OUTSET, 8, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN9 = GPIO_OUTSET_PIN9_Values<GPIO::OUTSET, 9, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN10 = GPIO_OUTSET_PIN10_Values<GPIO::OUTSET, 10, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN11 = GPIO_OUTSET_PIN11_Values<GPIO::OUTSET, 11, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN12 = GPIO_OUTSET_PIN12_Values<GPIO::OUTSET, 12, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN13 = GPIO_OUTSET_PIN13_Values<GPIO::OUTSET, 13, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN14 = GPIO_OUTSET_PIN14_Values<GPIO::OUTSET, 14, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN15 = GPIO_OUTSET_PIN15_Values<GPIO::OUTSET, 15, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN16 = GPIO_OUTSET_PIN16_Values<GPIO::OUTSET, 16, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN17 = GPIO_OUTSET_PIN17_Values<GPIO::OUTSET, 17, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN18 = GPIO_OUTSET_PIN18_Values<GPIO::OUTSET, 18, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN19 = GPIO_OUTSET_PIN19_Values<GPIO::OUTSET, 19, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN20 = GPIO_OUTSET_PIN20_Values<GPIO::OUTSET, 20, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN21 = GPIO_OUTSET_PIN21_Values<GPIO::OUTSET, 21, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN22 = GPIO_OUTSET_PIN22_Values<GPIO::OUTSET, 22, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN23 = GPIO_OUTSET_PIN23_Values<GPIO::OUTSET, 23, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN24 = GPIO_OUTSET_PIN24_Values<GPIO::OUTSET, 24, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN25 = GPIO_OUTSET_PIN25_Values<GPIO::OUTSET, 25, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN26 = GPIO_OUTSET_PIN26_Values<GPIO::OUTSET, 26, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN27 = GPIO_OUTSET_PIN27_Values<GPIO::OUTSET, 27, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN28 = GPIO_OUTSET_PIN28_Values<GPIO::OUTSET, 28, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN29 = GPIO_OUTSET_PIN29_Values<GPIO::OUTSET, 29, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN30 = GPIO_OUTSET_PIN30_Values<GPIO::OUTSET, 30, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using PIN31 = GPIO_OUTSET_PIN31_Values<GPIO::OUTSET, 31, 1, ReadWriteMode, GPIOOUTSETBase> ;
    using FieldValues = GPIO_OUTSET_PIN31_Values<GPIO::OUTSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OUTSETPack  = Register<0x50000508, 32, ReadWriteMode, GPIOOUTSETBase, T...> ;

  struct GPIOOUTCLRBase {} ;

  struct OUTCLR : public RegisterBase<0x5000050C, 32, ReadWriteMode>
  {
    using PIN0 = GPIO_OUTCLR_PIN0_Values<GPIO::OUTCLR, 0, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN1 = GPIO_OUTCLR_PIN1_Values<GPIO::OUTCLR, 1, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN2 = GPIO_OUTCLR_PIN2_Values<GPIO::OUTCLR, 2, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN3 = GPIO_OUTCLR_PIN3_Values<GPIO::OUTCLR, 3, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN4 = GPIO_OUTCLR_PIN4_Values<GPIO::OUTCLR, 4, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN5 = GPIO_OUTCLR_PIN5_Values<GPIO::OUTCLR, 5, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN6 = GPIO_OUTCLR_PIN6_Values<GPIO::OUTCLR, 6, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN7 = GPIO_OUTCLR_PIN7_Values<GPIO::OUTCLR, 7, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN8 = GPIO_OUTCLR_PIN8_Values<GPIO::OUTCLR, 8, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN9 = GPIO_OUTCLR_PIN9_Values<GPIO::OUTCLR, 9, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN10 = GPIO_OUTCLR_PIN10_Values<GPIO::OUTCLR, 10, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN11 = GPIO_OUTCLR_PIN11_Values<GPIO::OUTCLR, 11, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN12 = GPIO_OUTCLR_PIN12_Values<GPIO::OUTCLR, 12, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN13 = GPIO_OUTCLR_PIN13_Values<GPIO::OUTCLR, 13, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN14 = GPIO_OUTCLR_PIN14_Values<GPIO::OUTCLR, 14, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN15 = GPIO_OUTCLR_PIN15_Values<GPIO::OUTCLR, 15, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN16 = GPIO_OUTCLR_PIN16_Values<GPIO::OUTCLR, 16, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN17 = GPIO_OUTCLR_PIN17_Values<GPIO::OUTCLR, 17, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN18 = GPIO_OUTCLR_PIN18_Values<GPIO::OUTCLR, 18, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN19 = GPIO_OUTCLR_PIN19_Values<GPIO::OUTCLR, 19, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN20 = GPIO_OUTCLR_PIN20_Values<GPIO::OUTCLR, 20, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN21 = GPIO_OUTCLR_PIN21_Values<GPIO::OUTCLR, 21, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN22 = GPIO_OUTCLR_PIN22_Values<GPIO::OUTCLR, 22, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN23 = GPIO_OUTCLR_PIN23_Values<GPIO::OUTCLR, 23, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN24 = GPIO_OUTCLR_PIN24_Values<GPIO::OUTCLR, 24, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN25 = GPIO_OUTCLR_PIN25_Values<GPIO::OUTCLR, 25, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN26 = GPIO_OUTCLR_PIN26_Values<GPIO::OUTCLR, 26, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN27 = GPIO_OUTCLR_PIN27_Values<GPIO::OUTCLR, 27, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN28 = GPIO_OUTCLR_PIN28_Values<GPIO::OUTCLR, 28, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN29 = GPIO_OUTCLR_PIN29_Values<GPIO::OUTCLR, 29, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN30 = GPIO_OUTCLR_PIN30_Values<GPIO::OUTCLR, 30, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using PIN31 = GPIO_OUTCLR_PIN31_Values<GPIO::OUTCLR, 31, 1, ReadWriteMode, GPIOOUTCLRBase> ;
    using FieldValues = GPIO_OUTCLR_PIN31_Values<GPIO::OUTCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OUTCLRPack  = Register<0x5000050C, 32, ReadWriteMode, GPIOOUTCLRBase, T...> ;

  struct GPIOINBase {} ;

  struct IN : public RegisterBase<0x50000510, 32, ReadMode>
  {
    using PIN0 = GPIO_IN_PIN0_Values<GPIO::IN, 0, 1, ReadMode, GPIOINBase> ;
    using PIN1 = GPIO_IN_PIN1_Values<GPIO::IN, 1, 1, ReadMode, GPIOINBase> ;
    using PIN2 = GPIO_IN_PIN2_Values<GPIO::IN, 2, 1, ReadMode, GPIOINBase> ;
    using PIN3 = GPIO_IN_PIN3_Values<GPIO::IN, 3, 1, ReadMode, GPIOINBase> ;
    using PIN4 = GPIO_IN_PIN4_Values<GPIO::IN, 4, 1, ReadMode, GPIOINBase> ;
    using PIN5 = GPIO_IN_PIN5_Values<GPIO::IN, 5, 1, ReadMode, GPIOINBase> ;
    using PIN6 = GPIO_IN_PIN6_Values<GPIO::IN, 6, 1, ReadMode, GPIOINBase> ;
    using PIN7 = GPIO_IN_PIN7_Values<GPIO::IN, 7, 1, ReadMode, GPIOINBase> ;
    using PIN8 = GPIO_IN_PIN8_Values<GPIO::IN, 8, 1, ReadMode, GPIOINBase> ;
    using PIN9 = GPIO_IN_PIN9_Values<GPIO::IN, 9, 1, ReadMode, GPIOINBase> ;
    using PIN10 = GPIO_IN_PIN10_Values<GPIO::IN, 10, 1, ReadMode, GPIOINBase> ;
    using PIN11 = GPIO_IN_PIN11_Values<GPIO::IN, 11, 1, ReadMode, GPIOINBase> ;
    using PIN12 = GPIO_IN_PIN12_Values<GPIO::IN, 12, 1, ReadMode, GPIOINBase> ;
    using PIN13 = GPIO_IN_PIN13_Values<GPIO::IN, 13, 1, ReadMode, GPIOINBase> ;
    using PIN14 = GPIO_IN_PIN14_Values<GPIO::IN, 14, 1, ReadMode, GPIOINBase> ;
    using PIN15 = GPIO_IN_PIN15_Values<GPIO::IN, 15, 1, ReadMode, GPIOINBase> ;
    using PIN16 = GPIO_IN_PIN16_Values<GPIO::IN, 16, 1, ReadMode, GPIOINBase> ;
    using PIN17 = GPIO_IN_PIN17_Values<GPIO::IN, 17, 1, ReadMode, GPIOINBase> ;
    using PIN18 = GPIO_IN_PIN18_Values<GPIO::IN, 18, 1, ReadMode, GPIOINBase> ;
    using PIN19 = GPIO_IN_PIN19_Values<GPIO::IN, 19, 1, ReadMode, GPIOINBase> ;
    using PIN20 = GPIO_IN_PIN20_Values<GPIO::IN, 20, 1, ReadMode, GPIOINBase> ;
    using PIN21 = GPIO_IN_PIN21_Values<GPIO::IN, 21, 1, ReadMode, GPIOINBase> ;
    using PIN22 = GPIO_IN_PIN22_Values<GPIO::IN, 22, 1, ReadMode, GPIOINBase> ;
    using PIN23 = GPIO_IN_PIN23_Values<GPIO::IN, 23, 1, ReadMode, GPIOINBase> ;
    using PIN24 = GPIO_IN_PIN24_Values<GPIO::IN, 24, 1, ReadMode, GPIOINBase> ;
    using PIN25 = GPIO_IN_PIN25_Values<GPIO::IN, 25, 1, ReadMode, GPIOINBase> ;
    using PIN26 = GPIO_IN_PIN26_Values<GPIO::IN, 26, 1, ReadMode, GPIOINBase> ;
    using PIN27 = GPIO_IN_PIN27_Values<GPIO::IN, 27, 1, ReadMode, GPIOINBase> ;
    using PIN28 = GPIO_IN_PIN28_Values<GPIO::IN, 28, 1, ReadMode, GPIOINBase> ;
    using PIN29 = GPIO_IN_PIN29_Values<GPIO::IN, 29, 1, ReadMode, GPIOINBase> ;
    using PIN30 = GPIO_IN_PIN30_Values<GPIO::IN, 30, 1, ReadMode, GPIOINBase> ;
    using PIN31 = GPIO_IN_PIN31_Values<GPIO::IN, 31, 1, ReadMode, GPIOINBase> ;
    using FieldValues = GPIO_IN_PIN31_Values<GPIO::IN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INPack  = Register<0x50000510, 32, ReadMode, GPIOINBase, T...> ;

  struct GPIODIRBase {} ;

  struct DIR : public RegisterBase<0x50000514, 32, ReadWriteMode>
  {
    using PIN0 = GPIO_DIR_PIN0_Values<GPIO::DIR, 0, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN1 = GPIO_DIR_PIN1_Values<GPIO::DIR, 1, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN2 = GPIO_DIR_PIN2_Values<GPIO::DIR, 2, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN3 = GPIO_DIR_PIN3_Values<GPIO::DIR, 3, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN4 = GPIO_DIR_PIN4_Values<GPIO::DIR, 4, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN5 = GPIO_DIR_PIN5_Values<GPIO::DIR, 5, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN6 = GPIO_DIR_PIN6_Values<GPIO::DIR, 6, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN7 = GPIO_DIR_PIN7_Values<GPIO::DIR, 7, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN8 = GPIO_DIR_PIN8_Values<GPIO::DIR, 8, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN9 = GPIO_DIR_PIN9_Values<GPIO::DIR, 9, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN10 = GPIO_DIR_PIN10_Values<GPIO::DIR, 10, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN11 = GPIO_DIR_PIN11_Values<GPIO::DIR, 11, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN12 = GPIO_DIR_PIN12_Values<GPIO::DIR, 12, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN13 = GPIO_DIR_PIN13_Values<GPIO::DIR, 13, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN14 = GPIO_DIR_PIN14_Values<GPIO::DIR, 14, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN15 = GPIO_DIR_PIN15_Values<GPIO::DIR, 15, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN16 = GPIO_DIR_PIN16_Values<GPIO::DIR, 16, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN17 = GPIO_DIR_PIN17_Values<GPIO::DIR, 17, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN18 = GPIO_DIR_PIN18_Values<GPIO::DIR, 18, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN19 = GPIO_DIR_PIN19_Values<GPIO::DIR, 19, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN20 = GPIO_DIR_PIN20_Values<GPIO::DIR, 20, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN21 = GPIO_DIR_PIN21_Values<GPIO::DIR, 21, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN22 = GPIO_DIR_PIN22_Values<GPIO::DIR, 22, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN23 = GPIO_DIR_PIN23_Values<GPIO::DIR, 23, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN24 = GPIO_DIR_PIN24_Values<GPIO::DIR, 24, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN25 = GPIO_DIR_PIN25_Values<GPIO::DIR, 25, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN26 = GPIO_DIR_PIN26_Values<GPIO::DIR, 26, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN27 = GPIO_DIR_PIN27_Values<GPIO::DIR, 27, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN28 = GPIO_DIR_PIN28_Values<GPIO::DIR, 28, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN29 = GPIO_DIR_PIN29_Values<GPIO::DIR, 29, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN30 = GPIO_DIR_PIN30_Values<GPIO::DIR, 30, 1, ReadWriteMode, GPIODIRBase> ;
    using PIN31 = GPIO_DIR_PIN31_Values<GPIO::DIR, 31, 1, ReadWriteMode, GPIODIRBase> ;
    using FieldValues = GPIO_DIR_PIN31_Values<GPIO::DIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIRPack  = Register<0x50000514, 32, ReadWriteMode, GPIODIRBase, T...> ;

  struct GPIODIRSETBase {} ;

  struct DIRSET : public RegisterBase<0x50000518, 32, ReadWriteMode>
  {
    using PIN0 = GPIO_DIRSET_PIN0_Values<GPIO::DIRSET, 0, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN1 = GPIO_DIRSET_PIN1_Values<GPIO::DIRSET, 1, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN2 = GPIO_DIRSET_PIN2_Values<GPIO::DIRSET, 2, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN3 = GPIO_DIRSET_PIN3_Values<GPIO::DIRSET, 3, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN4 = GPIO_DIRSET_PIN4_Values<GPIO::DIRSET, 4, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN5 = GPIO_DIRSET_PIN5_Values<GPIO::DIRSET, 5, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN6 = GPIO_DIRSET_PIN6_Values<GPIO::DIRSET, 6, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN7 = GPIO_DIRSET_PIN7_Values<GPIO::DIRSET, 7, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN8 = GPIO_DIRSET_PIN8_Values<GPIO::DIRSET, 8, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN9 = GPIO_DIRSET_PIN9_Values<GPIO::DIRSET, 9, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN10 = GPIO_DIRSET_PIN10_Values<GPIO::DIRSET, 10, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN11 = GPIO_DIRSET_PIN11_Values<GPIO::DIRSET, 11, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN12 = GPIO_DIRSET_PIN12_Values<GPIO::DIRSET, 12, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN13 = GPIO_DIRSET_PIN13_Values<GPIO::DIRSET, 13, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN14 = GPIO_DIRSET_PIN14_Values<GPIO::DIRSET, 14, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN15 = GPIO_DIRSET_PIN15_Values<GPIO::DIRSET, 15, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN16 = GPIO_DIRSET_PIN16_Values<GPIO::DIRSET, 16, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN17 = GPIO_DIRSET_PIN17_Values<GPIO::DIRSET, 17, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN18 = GPIO_DIRSET_PIN18_Values<GPIO::DIRSET, 18, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN19 = GPIO_DIRSET_PIN19_Values<GPIO::DIRSET, 19, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN20 = GPIO_DIRSET_PIN20_Values<GPIO::DIRSET, 20, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN21 = GPIO_DIRSET_PIN21_Values<GPIO::DIRSET, 21, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN22 = GPIO_DIRSET_PIN22_Values<GPIO::DIRSET, 22, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN23 = GPIO_DIRSET_PIN23_Values<GPIO::DIRSET, 23, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN24 = GPIO_DIRSET_PIN24_Values<GPIO::DIRSET, 24, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN25 = GPIO_DIRSET_PIN25_Values<GPIO::DIRSET, 25, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN26 = GPIO_DIRSET_PIN26_Values<GPIO::DIRSET, 26, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN27 = GPIO_DIRSET_PIN27_Values<GPIO::DIRSET, 27, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN28 = GPIO_DIRSET_PIN28_Values<GPIO::DIRSET, 28, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN29 = GPIO_DIRSET_PIN29_Values<GPIO::DIRSET, 29, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN30 = GPIO_DIRSET_PIN30_Values<GPIO::DIRSET, 30, 1, ReadWriteMode, GPIODIRSETBase> ;
    using PIN31 = GPIO_DIRSET_PIN31_Values<GPIO::DIRSET, 31, 1, ReadWriteMode, GPIODIRSETBase> ;
    using FieldValues = GPIO_DIRSET_PIN31_Values<GPIO::DIRSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIRSETPack  = Register<0x50000518, 32, ReadWriteMode, GPIODIRSETBase, T...> ;

  struct GPIODIRCLRBase {} ;

  struct DIRCLR : public RegisterBase<0x5000051C, 32, ReadWriteMode>
  {
    using PIN0 = GPIO_DIRCLR_PIN0_Values<GPIO::DIRCLR, 0, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN1 = GPIO_DIRCLR_PIN1_Values<GPIO::DIRCLR, 1, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN2 = GPIO_DIRCLR_PIN2_Values<GPIO::DIRCLR, 2, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN3 = GPIO_DIRCLR_PIN3_Values<GPIO::DIRCLR, 3, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN4 = GPIO_DIRCLR_PIN4_Values<GPIO::DIRCLR, 4, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN5 = GPIO_DIRCLR_PIN5_Values<GPIO::DIRCLR, 5, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN6 = GPIO_DIRCLR_PIN6_Values<GPIO::DIRCLR, 6, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN7 = GPIO_DIRCLR_PIN7_Values<GPIO::DIRCLR, 7, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN8 = GPIO_DIRCLR_PIN8_Values<GPIO::DIRCLR, 8, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN9 = GPIO_DIRCLR_PIN9_Values<GPIO::DIRCLR, 9, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN10 = GPIO_DIRCLR_PIN10_Values<GPIO::DIRCLR, 10, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN11 = GPIO_DIRCLR_PIN11_Values<GPIO::DIRCLR, 11, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN12 = GPIO_DIRCLR_PIN12_Values<GPIO::DIRCLR, 12, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN13 = GPIO_DIRCLR_PIN13_Values<GPIO::DIRCLR, 13, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN14 = GPIO_DIRCLR_PIN14_Values<GPIO::DIRCLR, 14, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN15 = GPIO_DIRCLR_PIN15_Values<GPIO::DIRCLR, 15, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN16 = GPIO_DIRCLR_PIN16_Values<GPIO::DIRCLR, 16, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN17 = GPIO_DIRCLR_PIN17_Values<GPIO::DIRCLR, 17, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN18 = GPIO_DIRCLR_PIN18_Values<GPIO::DIRCLR, 18, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN19 = GPIO_DIRCLR_PIN19_Values<GPIO::DIRCLR, 19, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN20 = GPIO_DIRCLR_PIN20_Values<GPIO::DIRCLR, 20, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN21 = GPIO_DIRCLR_PIN21_Values<GPIO::DIRCLR, 21, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN22 = GPIO_DIRCLR_PIN22_Values<GPIO::DIRCLR, 22, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN23 = GPIO_DIRCLR_PIN23_Values<GPIO::DIRCLR, 23, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN24 = GPIO_DIRCLR_PIN24_Values<GPIO::DIRCLR, 24, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN25 = GPIO_DIRCLR_PIN25_Values<GPIO::DIRCLR, 25, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN26 = GPIO_DIRCLR_PIN26_Values<GPIO::DIRCLR, 26, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN27 = GPIO_DIRCLR_PIN27_Values<GPIO::DIRCLR, 27, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN28 = GPIO_DIRCLR_PIN28_Values<GPIO::DIRCLR, 28, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN29 = GPIO_DIRCLR_PIN29_Values<GPIO::DIRCLR, 29, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN30 = GPIO_DIRCLR_PIN30_Values<GPIO::DIRCLR, 30, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using PIN31 = GPIO_DIRCLR_PIN31_Values<GPIO::DIRCLR, 31, 1, ReadWriteMode, GPIODIRCLRBase> ;
    using FieldValues = GPIO_DIRCLR_PIN31_Values<GPIO::DIRCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIRCLRPack  = Register<0x5000051C, 32, ReadWriteMode, GPIODIRCLRBase, T...> ;

  struct GPIOPIN_CNF0Base {} ;

  struct PIN_CNF0 : public RegisterBase<0x50000700, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF0_DIR_Values<GPIO::PIN_CNF0, 0, 1, ReadWriteMode, GPIOPIN_CNF0Base> ;
    using INPUT = GPIO_PIN_CNF0_INPUT_Values<GPIO::PIN_CNF0, 1, 1, ReadWriteMode, GPIOPIN_CNF0Base> ;
    using PULL = GPIO_PIN_CNF0_PULL_Values<GPIO::PIN_CNF0, 2, 2, ReadWriteMode, GPIOPIN_CNF0Base> ;
    using DRIVE = GPIO_PIN_CNF0_DRIVE_Values<GPIO::PIN_CNF0, 8, 3, ReadWriteMode, GPIOPIN_CNF0Base> ;
    using SENSE = GPIO_PIN_CNF0_SENSE_Values<GPIO::PIN_CNF0, 16, 2, ReadWriteMode, GPIOPIN_CNF0Base> ;
    using FieldValues = GPIO_PIN_CNF0_SENSE_Values<GPIO::PIN_CNF0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF0Pack  = Register<0x50000700, 32, ReadWriteMode, GPIOPIN_CNF0Base, T...> ;

  struct GPIOPIN_CNF1Base {} ;

  struct PIN_CNF1 : public RegisterBase<0x50000704, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF1_DIR_Values<GPIO::PIN_CNF1, 0, 1, ReadWriteMode, GPIOPIN_CNF1Base> ;
    using INPUT = GPIO_PIN_CNF1_INPUT_Values<GPIO::PIN_CNF1, 1, 1, ReadWriteMode, GPIOPIN_CNF1Base> ;
    using PULL = GPIO_PIN_CNF1_PULL_Values<GPIO::PIN_CNF1, 2, 2, ReadWriteMode, GPIOPIN_CNF1Base> ;
    using DRIVE = GPIO_PIN_CNF1_DRIVE_Values<GPIO::PIN_CNF1, 8, 3, ReadWriteMode, GPIOPIN_CNF1Base> ;
    using SENSE = GPIO_PIN_CNF1_SENSE_Values<GPIO::PIN_CNF1, 16, 2, ReadWriteMode, GPIOPIN_CNF1Base> ;
    using FieldValues = GPIO_PIN_CNF1_SENSE_Values<GPIO::PIN_CNF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF1Pack  = Register<0x50000704, 32, ReadWriteMode, GPIOPIN_CNF1Base, T...> ;

  struct GPIOPIN_CNF2Base {} ;

  struct PIN_CNF2 : public RegisterBase<0x50000708, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF2_DIR_Values<GPIO::PIN_CNF2, 0, 1, ReadWriteMode, GPIOPIN_CNF2Base> ;
    using INPUT = GPIO_PIN_CNF2_INPUT_Values<GPIO::PIN_CNF2, 1, 1, ReadWriteMode, GPIOPIN_CNF2Base> ;
    using PULL = GPIO_PIN_CNF2_PULL_Values<GPIO::PIN_CNF2, 2, 2, ReadWriteMode, GPIOPIN_CNF2Base> ;
    using DRIVE = GPIO_PIN_CNF2_DRIVE_Values<GPIO::PIN_CNF2, 8, 3, ReadWriteMode, GPIOPIN_CNF2Base> ;
    using SENSE = GPIO_PIN_CNF2_SENSE_Values<GPIO::PIN_CNF2, 16, 2, ReadWriteMode, GPIOPIN_CNF2Base> ;
    using FieldValues = GPIO_PIN_CNF2_SENSE_Values<GPIO::PIN_CNF2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF2Pack  = Register<0x50000708, 32, ReadWriteMode, GPIOPIN_CNF2Base, T...> ;

  struct GPIOPIN_CNF3Base {} ;

  struct PIN_CNF3 : public RegisterBase<0x5000070C, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF3_DIR_Values<GPIO::PIN_CNF3, 0, 1, ReadWriteMode, GPIOPIN_CNF3Base> ;
    using INPUT = GPIO_PIN_CNF3_INPUT_Values<GPIO::PIN_CNF3, 1, 1, ReadWriteMode, GPIOPIN_CNF3Base> ;
    using PULL = GPIO_PIN_CNF3_PULL_Values<GPIO::PIN_CNF3, 2, 2, ReadWriteMode, GPIOPIN_CNF3Base> ;
    using DRIVE = GPIO_PIN_CNF3_DRIVE_Values<GPIO::PIN_CNF3, 8, 3, ReadWriteMode, GPIOPIN_CNF3Base> ;
    using SENSE = GPIO_PIN_CNF3_SENSE_Values<GPIO::PIN_CNF3, 16, 2, ReadWriteMode, GPIOPIN_CNF3Base> ;
    using FieldValues = GPIO_PIN_CNF3_SENSE_Values<GPIO::PIN_CNF3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF3Pack  = Register<0x5000070C, 32, ReadWriteMode, GPIOPIN_CNF3Base, T...> ;

  struct GPIOPIN_CNF4Base {} ;

  struct PIN_CNF4 : public RegisterBase<0x50000710, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF4_DIR_Values<GPIO::PIN_CNF4, 0, 1, ReadWriteMode, GPIOPIN_CNF4Base> ;
    using INPUT = GPIO_PIN_CNF4_INPUT_Values<GPIO::PIN_CNF4, 1, 1, ReadWriteMode, GPIOPIN_CNF4Base> ;
    using PULL = GPIO_PIN_CNF4_PULL_Values<GPIO::PIN_CNF4, 2, 2, ReadWriteMode, GPIOPIN_CNF4Base> ;
    using DRIVE = GPIO_PIN_CNF4_DRIVE_Values<GPIO::PIN_CNF4, 8, 3, ReadWriteMode, GPIOPIN_CNF4Base> ;
    using SENSE = GPIO_PIN_CNF4_SENSE_Values<GPIO::PIN_CNF4, 16, 2, ReadWriteMode, GPIOPIN_CNF4Base> ;
    using FieldValues = GPIO_PIN_CNF4_SENSE_Values<GPIO::PIN_CNF4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF4Pack  = Register<0x50000710, 32, ReadWriteMode, GPIOPIN_CNF4Base, T...> ;

  struct GPIOPIN_CNF5Base {} ;

  struct PIN_CNF5 : public RegisterBase<0x50000714, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF5_DIR_Values<GPIO::PIN_CNF5, 0, 1, ReadWriteMode, GPIOPIN_CNF5Base> ;
    using INPUT = GPIO_PIN_CNF5_INPUT_Values<GPIO::PIN_CNF5, 1, 1, ReadWriteMode, GPIOPIN_CNF5Base> ;
    using PULL = GPIO_PIN_CNF5_PULL_Values<GPIO::PIN_CNF5, 2, 2, ReadWriteMode, GPIOPIN_CNF5Base> ;
    using DRIVE = GPIO_PIN_CNF5_DRIVE_Values<GPIO::PIN_CNF5, 8, 3, ReadWriteMode, GPIOPIN_CNF5Base> ;
    using SENSE = GPIO_PIN_CNF5_SENSE_Values<GPIO::PIN_CNF5, 16, 2, ReadWriteMode, GPIOPIN_CNF5Base> ;
    using FieldValues = GPIO_PIN_CNF5_SENSE_Values<GPIO::PIN_CNF5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF5Pack  = Register<0x50000714, 32, ReadWriteMode, GPIOPIN_CNF5Base, T...> ;

  struct GPIOPIN_CNF6Base {} ;

  struct PIN_CNF6 : public RegisterBase<0x50000718, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF6_DIR_Values<GPIO::PIN_CNF6, 0, 1, ReadWriteMode, GPIOPIN_CNF6Base> ;
    using INPUT = GPIO_PIN_CNF6_INPUT_Values<GPIO::PIN_CNF6, 1, 1, ReadWriteMode, GPIOPIN_CNF6Base> ;
    using PULL = GPIO_PIN_CNF6_PULL_Values<GPIO::PIN_CNF6, 2, 2, ReadWriteMode, GPIOPIN_CNF6Base> ;
    using DRIVE = GPIO_PIN_CNF6_DRIVE_Values<GPIO::PIN_CNF6, 8, 3, ReadWriteMode, GPIOPIN_CNF6Base> ;
    using SENSE = GPIO_PIN_CNF6_SENSE_Values<GPIO::PIN_CNF6, 16, 2, ReadWriteMode, GPIOPIN_CNF6Base> ;
    using FieldValues = GPIO_PIN_CNF6_SENSE_Values<GPIO::PIN_CNF6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF6Pack  = Register<0x50000718, 32, ReadWriteMode, GPIOPIN_CNF6Base, T...> ;

  struct GPIOPIN_CNF7Base {} ;

  struct PIN_CNF7 : public RegisterBase<0x5000071C, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF7_DIR_Values<GPIO::PIN_CNF7, 0, 1, ReadWriteMode, GPIOPIN_CNF7Base> ;
    using INPUT = GPIO_PIN_CNF7_INPUT_Values<GPIO::PIN_CNF7, 1, 1, ReadWriteMode, GPIOPIN_CNF7Base> ;
    using PULL = GPIO_PIN_CNF7_PULL_Values<GPIO::PIN_CNF7, 2, 2, ReadWriteMode, GPIOPIN_CNF7Base> ;
    using DRIVE = GPIO_PIN_CNF7_DRIVE_Values<GPIO::PIN_CNF7, 8, 3, ReadWriteMode, GPIOPIN_CNF7Base> ;
    using SENSE = GPIO_PIN_CNF7_SENSE_Values<GPIO::PIN_CNF7, 16, 2, ReadWriteMode, GPIOPIN_CNF7Base> ;
    using FieldValues = GPIO_PIN_CNF7_SENSE_Values<GPIO::PIN_CNF7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF7Pack  = Register<0x5000071C, 32, ReadWriteMode, GPIOPIN_CNF7Base, T...> ;

  struct GPIOPIN_CNF8Base {} ;

  struct PIN_CNF8 : public RegisterBase<0x50000720, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF8_DIR_Values<GPIO::PIN_CNF8, 0, 1, ReadWriteMode, GPIOPIN_CNF8Base> ;
    using INPUT = GPIO_PIN_CNF8_INPUT_Values<GPIO::PIN_CNF8, 1, 1, ReadWriteMode, GPIOPIN_CNF8Base> ;
    using PULL = GPIO_PIN_CNF8_PULL_Values<GPIO::PIN_CNF8, 2, 2, ReadWriteMode, GPIOPIN_CNF8Base> ;
    using DRIVE = GPIO_PIN_CNF8_DRIVE_Values<GPIO::PIN_CNF8, 8, 3, ReadWriteMode, GPIOPIN_CNF8Base> ;
    using SENSE = GPIO_PIN_CNF8_SENSE_Values<GPIO::PIN_CNF8, 16, 2, ReadWriteMode, GPIOPIN_CNF8Base> ;
    using FieldValues = GPIO_PIN_CNF8_SENSE_Values<GPIO::PIN_CNF8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF8Pack  = Register<0x50000720, 32, ReadWriteMode, GPIOPIN_CNF8Base, T...> ;

  struct GPIOPIN_CNF9Base {} ;

  struct PIN_CNF9 : public RegisterBase<0x50000724, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF9_DIR_Values<GPIO::PIN_CNF9, 0, 1, ReadWriteMode, GPIOPIN_CNF9Base> ;
    using INPUT = GPIO_PIN_CNF9_INPUT_Values<GPIO::PIN_CNF9, 1, 1, ReadWriteMode, GPIOPIN_CNF9Base> ;
    using PULL = GPIO_PIN_CNF9_PULL_Values<GPIO::PIN_CNF9, 2, 2, ReadWriteMode, GPIOPIN_CNF9Base> ;
    using DRIVE = GPIO_PIN_CNF9_DRIVE_Values<GPIO::PIN_CNF9, 8, 3, ReadWriteMode, GPIOPIN_CNF9Base> ;
    using SENSE = GPIO_PIN_CNF9_SENSE_Values<GPIO::PIN_CNF9, 16, 2, ReadWriteMode, GPIOPIN_CNF9Base> ;
    using FieldValues = GPIO_PIN_CNF9_SENSE_Values<GPIO::PIN_CNF9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF9Pack  = Register<0x50000724, 32, ReadWriteMode, GPIOPIN_CNF9Base, T...> ;

  struct GPIOPIN_CNF10Base {} ;

  struct PIN_CNF10 : public RegisterBase<0x50000728, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF10_DIR_Values<GPIO::PIN_CNF10, 0, 1, ReadWriteMode, GPIOPIN_CNF10Base> ;
    using INPUT = GPIO_PIN_CNF10_INPUT_Values<GPIO::PIN_CNF10, 1, 1, ReadWriteMode, GPIOPIN_CNF10Base> ;
    using PULL = GPIO_PIN_CNF10_PULL_Values<GPIO::PIN_CNF10, 2, 2, ReadWriteMode, GPIOPIN_CNF10Base> ;
    using DRIVE = GPIO_PIN_CNF10_DRIVE_Values<GPIO::PIN_CNF10, 8, 3, ReadWriteMode, GPIOPIN_CNF10Base> ;
    using SENSE = GPIO_PIN_CNF10_SENSE_Values<GPIO::PIN_CNF10, 16, 2, ReadWriteMode, GPIOPIN_CNF10Base> ;
    using FieldValues = GPIO_PIN_CNF10_SENSE_Values<GPIO::PIN_CNF10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF10Pack  = Register<0x50000728, 32, ReadWriteMode, GPIOPIN_CNF10Base, T...> ;

  struct GPIOPIN_CNF11Base {} ;

  struct PIN_CNF11 : public RegisterBase<0x5000072C, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF11_DIR_Values<GPIO::PIN_CNF11, 0, 1, ReadWriteMode, GPIOPIN_CNF11Base> ;
    using INPUT = GPIO_PIN_CNF11_INPUT_Values<GPIO::PIN_CNF11, 1, 1, ReadWriteMode, GPIOPIN_CNF11Base> ;
    using PULL = GPIO_PIN_CNF11_PULL_Values<GPIO::PIN_CNF11, 2, 2, ReadWriteMode, GPIOPIN_CNF11Base> ;
    using DRIVE = GPIO_PIN_CNF11_DRIVE_Values<GPIO::PIN_CNF11, 8, 3, ReadWriteMode, GPIOPIN_CNF11Base> ;
    using SENSE = GPIO_PIN_CNF11_SENSE_Values<GPIO::PIN_CNF11, 16, 2, ReadWriteMode, GPIOPIN_CNF11Base> ;
    using FieldValues = GPIO_PIN_CNF11_SENSE_Values<GPIO::PIN_CNF11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF11Pack  = Register<0x5000072C, 32, ReadWriteMode, GPIOPIN_CNF11Base, T...> ;

  struct GPIOPIN_CNF12Base {} ;

  struct PIN_CNF12 : public RegisterBase<0x50000730, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF12_DIR_Values<GPIO::PIN_CNF12, 0, 1, ReadWriteMode, GPIOPIN_CNF12Base> ;
    using INPUT = GPIO_PIN_CNF12_INPUT_Values<GPIO::PIN_CNF12, 1, 1, ReadWriteMode, GPIOPIN_CNF12Base> ;
    using PULL = GPIO_PIN_CNF12_PULL_Values<GPIO::PIN_CNF12, 2, 2, ReadWriteMode, GPIOPIN_CNF12Base> ;
    using DRIVE = GPIO_PIN_CNF12_DRIVE_Values<GPIO::PIN_CNF12, 8, 3, ReadWriteMode, GPIOPIN_CNF12Base> ;
    using SENSE = GPIO_PIN_CNF12_SENSE_Values<GPIO::PIN_CNF12, 16, 2, ReadWriteMode, GPIOPIN_CNF12Base> ;
    using FieldValues = GPIO_PIN_CNF12_SENSE_Values<GPIO::PIN_CNF12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF12Pack  = Register<0x50000730, 32, ReadWriteMode, GPIOPIN_CNF12Base, T...> ;

  struct GPIOPIN_CNF13Base {} ;

  struct PIN_CNF13 : public RegisterBase<0x50000734, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF13_DIR_Values<GPIO::PIN_CNF13, 0, 1, ReadWriteMode, GPIOPIN_CNF13Base> ;
    using INPUT = GPIO_PIN_CNF13_INPUT_Values<GPIO::PIN_CNF13, 1, 1, ReadWriteMode, GPIOPIN_CNF13Base> ;
    using PULL = GPIO_PIN_CNF13_PULL_Values<GPIO::PIN_CNF13, 2, 2, ReadWriteMode, GPIOPIN_CNF13Base> ;
    using DRIVE = GPIO_PIN_CNF13_DRIVE_Values<GPIO::PIN_CNF13, 8, 3, ReadWriteMode, GPIOPIN_CNF13Base> ;
    using SENSE = GPIO_PIN_CNF13_SENSE_Values<GPIO::PIN_CNF13, 16, 2, ReadWriteMode, GPIOPIN_CNF13Base> ;
    using FieldValues = GPIO_PIN_CNF13_SENSE_Values<GPIO::PIN_CNF13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF13Pack  = Register<0x50000734, 32, ReadWriteMode, GPIOPIN_CNF13Base, T...> ;

  struct GPIOPIN_CNF14Base {} ;

  struct PIN_CNF14 : public RegisterBase<0x50000738, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF14_DIR_Values<GPIO::PIN_CNF14, 0, 1, ReadWriteMode, GPIOPIN_CNF14Base> ;
    using INPUT = GPIO_PIN_CNF14_INPUT_Values<GPIO::PIN_CNF14, 1, 1, ReadWriteMode, GPIOPIN_CNF14Base> ;
    using PULL = GPIO_PIN_CNF14_PULL_Values<GPIO::PIN_CNF14, 2, 2, ReadWriteMode, GPIOPIN_CNF14Base> ;
    using DRIVE = GPIO_PIN_CNF14_DRIVE_Values<GPIO::PIN_CNF14, 8, 3, ReadWriteMode, GPIOPIN_CNF14Base> ;
    using SENSE = GPIO_PIN_CNF14_SENSE_Values<GPIO::PIN_CNF14, 16, 2, ReadWriteMode, GPIOPIN_CNF14Base> ;
    using FieldValues = GPIO_PIN_CNF14_SENSE_Values<GPIO::PIN_CNF14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF14Pack  = Register<0x50000738, 32, ReadWriteMode, GPIOPIN_CNF14Base, T...> ;

  struct GPIOPIN_CNF15Base {} ;

  struct PIN_CNF15 : public RegisterBase<0x5000073C, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF15_DIR_Values<GPIO::PIN_CNF15, 0, 1, ReadWriteMode, GPIOPIN_CNF15Base> ;
    using INPUT = GPIO_PIN_CNF15_INPUT_Values<GPIO::PIN_CNF15, 1, 1, ReadWriteMode, GPIOPIN_CNF15Base> ;
    using PULL = GPIO_PIN_CNF15_PULL_Values<GPIO::PIN_CNF15, 2, 2, ReadWriteMode, GPIOPIN_CNF15Base> ;
    using DRIVE = GPIO_PIN_CNF15_DRIVE_Values<GPIO::PIN_CNF15, 8, 3, ReadWriteMode, GPIOPIN_CNF15Base> ;
    using SENSE = GPIO_PIN_CNF15_SENSE_Values<GPIO::PIN_CNF15, 16, 2, ReadWriteMode, GPIOPIN_CNF15Base> ;
    using FieldValues = GPIO_PIN_CNF15_SENSE_Values<GPIO::PIN_CNF15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF15Pack  = Register<0x5000073C, 32, ReadWriteMode, GPIOPIN_CNF15Base, T...> ;

  struct GPIOPIN_CNF16Base {} ;

  struct PIN_CNF16 : public RegisterBase<0x50000740, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF16_DIR_Values<GPIO::PIN_CNF16, 0, 1, ReadWriteMode, GPIOPIN_CNF16Base> ;
    using INPUT = GPIO_PIN_CNF16_INPUT_Values<GPIO::PIN_CNF16, 1, 1, ReadWriteMode, GPIOPIN_CNF16Base> ;
    using PULL = GPIO_PIN_CNF16_PULL_Values<GPIO::PIN_CNF16, 2, 2, ReadWriteMode, GPIOPIN_CNF16Base> ;
    using DRIVE = GPIO_PIN_CNF16_DRIVE_Values<GPIO::PIN_CNF16, 8, 3, ReadWriteMode, GPIOPIN_CNF16Base> ;
    using SENSE = GPIO_PIN_CNF16_SENSE_Values<GPIO::PIN_CNF16, 16, 2, ReadWriteMode, GPIOPIN_CNF16Base> ;
    using FieldValues = GPIO_PIN_CNF16_SENSE_Values<GPIO::PIN_CNF16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF16Pack  = Register<0x50000740, 32, ReadWriteMode, GPIOPIN_CNF16Base, T...> ;

  struct GPIOPIN_CNF17Base {} ;

  struct PIN_CNF17 : public RegisterBase<0x50000744, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF17_DIR_Values<GPIO::PIN_CNF17, 0, 1, ReadWriteMode, GPIOPIN_CNF17Base> ;
    using INPUT = GPIO_PIN_CNF17_INPUT_Values<GPIO::PIN_CNF17, 1, 1, ReadWriteMode, GPIOPIN_CNF17Base> ;
    using PULL = GPIO_PIN_CNF17_PULL_Values<GPIO::PIN_CNF17, 2, 2, ReadWriteMode, GPIOPIN_CNF17Base> ;
    using DRIVE = GPIO_PIN_CNF17_DRIVE_Values<GPIO::PIN_CNF17, 8, 3, ReadWriteMode, GPIOPIN_CNF17Base> ;
    using SENSE = GPIO_PIN_CNF17_SENSE_Values<GPIO::PIN_CNF17, 16, 2, ReadWriteMode, GPIOPIN_CNF17Base> ;
    using FieldValues = GPIO_PIN_CNF17_SENSE_Values<GPIO::PIN_CNF17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF17Pack  = Register<0x50000744, 32, ReadWriteMode, GPIOPIN_CNF17Base, T...> ;

  struct GPIOPIN_CNF18Base {} ;

  struct PIN_CNF18 : public RegisterBase<0x50000748, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF18_DIR_Values<GPIO::PIN_CNF18, 0, 1, ReadWriteMode, GPIOPIN_CNF18Base> ;
    using INPUT = GPIO_PIN_CNF18_INPUT_Values<GPIO::PIN_CNF18, 1, 1, ReadWriteMode, GPIOPIN_CNF18Base> ;
    using PULL = GPIO_PIN_CNF18_PULL_Values<GPIO::PIN_CNF18, 2, 2, ReadWriteMode, GPIOPIN_CNF18Base> ;
    using DRIVE = GPIO_PIN_CNF18_DRIVE_Values<GPIO::PIN_CNF18, 8, 3, ReadWriteMode, GPIOPIN_CNF18Base> ;
    using SENSE = GPIO_PIN_CNF18_SENSE_Values<GPIO::PIN_CNF18, 16, 2, ReadWriteMode, GPIOPIN_CNF18Base> ;
    using FieldValues = GPIO_PIN_CNF18_SENSE_Values<GPIO::PIN_CNF18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF18Pack  = Register<0x50000748, 32, ReadWriteMode, GPIOPIN_CNF18Base, T...> ;

  struct GPIOPIN_CNF19Base {} ;

  struct PIN_CNF19 : public RegisterBase<0x5000074C, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF19_DIR_Values<GPIO::PIN_CNF19, 0, 1, ReadWriteMode, GPIOPIN_CNF19Base> ;
    using INPUT = GPIO_PIN_CNF19_INPUT_Values<GPIO::PIN_CNF19, 1, 1, ReadWriteMode, GPIOPIN_CNF19Base> ;
    using PULL = GPIO_PIN_CNF19_PULL_Values<GPIO::PIN_CNF19, 2, 2, ReadWriteMode, GPIOPIN_CNF19Base> ;
    using DRIVE = GPIO_PIN_CNF19_DRIVE_Values<GPIO::PIN_CNF19, 8, 3, ReadWriteMode, GPIOPIN_CNF19Base> ;
    using SENSE = GPIO_PIN_CNF19_SENSE_Values<GPIO::PIN_CNF19, 16, 2, ReadWriteMode, GPIOPIN_CNF19Base> ;
    using FieldValues = GPIO_PIN_CNF19_SENSE_Values<GPIO::PIN_CNF19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF19Pack  = Register<0x5000074C, 32, ReadWriteMode, GPIOPIN_CNF19Base, T...> ;

  struct GPIOPIN_CNF20Base {} ;

  struct PIN_CNF20 : public RegisterBase<0x50000750, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF20_DIR_Values<GPIO::PIN_CNF20, 0, 1, ReadWriteMode, GPIOPIN_CNF20Base> ;
    using INPUT = GPIO_PIN_CNF20_INPUT_Values<GPIO::PIN_CNF20, 1, 1, ReadWriteMode, GPIOPIN_CNF20Base> ;
    using PULL = GPIO_PIN_CNF20_PULL_Values<GPIO::PIN_CNF20, 2, 2, ReadWriteMode, GPIOPIN_CNF20Base> ;
    using DRIVE = GPIO_PIN_CNF20_DRIVE_Values<GPIO::PIN_CNF20, 8, 3, ReadWriteMode, GPIOPIN_CNF20Base> ;
    using SENSE = GPIO_PIN_CNF20_SENSE_Values<GPIO::PIN_CNF20, 16, 2, ReadWriteMode, GPIOPIN_CNF20Base> ;
    using FieldValues = GPIO_PIN_CNF20_SENSE_Values<GPIO::PIN_CNF20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF20Pack  = Register<0x50000750, 32, ReadWriteMode, GPIOPIN_CNF20Base, T...> ;

  struct GPIOPIN_CNF21Base {} ;

  struct PIN_CNF21 : public RegisterBase<0x50000754, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF21_DIR_Values<GPIO::PIN_CNF21, 0, 1, ReadWriteMode, GPIOPIN_CNF21Base> ;
    using INPUT = GPIO_PIN_CNF21_INPUT_Values<GPIO::PIN_CNF21, 1, 1, ReadWriteMode, GPIOPIN_CNF21Base> ;
    using PULL = GPIO_PIN_CNF21_PULL_Values<GPIO::PIN_CNF21, 2, 2, ReadWriteMode, GPIOPIN_CNF21Base> ;
    using DRIVE = GPIO_PIN_CNF21_DRIVE_Values<GPIO::PIN_CNF21, 8, 3, ReadWriteMode, GPIOPIN_CNF21Base> ;
    using SENSE = GPIO_PIN_CNF21_SENSE_Values<GPIO::PIN_CNF21, 16, 2, ReadWriteMode, GPIOPIN_CNF21Base> ;
    using FieldValues = GPIO_PIN_CNF21_SENSE_Values<GPIO::PIN_CNF21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF21Pack  = Register<0x50000754, 32, ReadWriteMode, GPIOPIN_CNF21Base, T...> ;

  struct GPIOPIN_CNF22Base {} ;

  struct PIN_CNF22 : public RegisterBase<0x50000758, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF22_DIR_Values<GPIO::PIN_CNF22, 0, 1, ReadWriteMode, GPIOPIN_CNF22Base> ;
    using INPUT = GPIO_PIN_CNF22_INPUT_Values<GPIO::PIN_CNF22, 1, 1, ReadWriteMode, GPIOPIN_CNF22Base> ;
    using PULL = GPIO_PIN_CNF22_PULL_Values<GPIO::PIN_CNF22, 2, 2, ReadWriteMode, GPIOPIN_CNF22Base> ;
    using DRIVE = GPIO_PIN_CNF22_DRIVE_Values<GPIO::PIN_CNF22, 8, 3, ReadWriteMode, GPIOPIN_CNF22Base> ;
    using SENSE = GPIO_PIN_CNF22_SENSE_Values<GPIO::PIN_CNF22, 16, 2, ReadWriteMode, GPIOPIN_CNF22Base> ;
    using FieldValues = GPIO_PIN_CNF22_SENSE_Values<GPIO::PIN_CNF22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF22Pack  = Register<0x50000758, 32, ReadWriteMode, GPIOPIN_CNF22Base, T...> ;

  struct GPIOPIN_CNF23Base {} ;

  struct PIN_CNF23 : public RegisterBase<0x5000075C, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF23_DIR_Values<GPIO::PIN_CNF23, 0, 1, ReadWriteMode, GPIOPIN_CNF23Base> ;
    using INPUT = GPIO_PIN_CNF23_INPUT_Values<GPIO::PIN_CNF23, 1, 1, ReadWriteMode, GPIOPIN_CNF23Base> ;
    using PULL = GPIO_PIN_CNF23_PULL_Values<GPIO::PIN_CNF23, 2, 2, ReadWriteMode, GPIOPIN_CNF23Base> ;
    using DRIVE = GPIO_PIN_CNF23_DRIVE_Values<GPIO::PIN_CNF23, 8, 3, ReadWriteMode, GPIOPIN_CNF23Base> ;
    using SENSE = GPIO_PIN_CNF23_SENSE_Values<GPIO::PIN_CNF23, 16, 2, ReadWriteMode, GPIOPIN_CNF23Base> ;
    using FieldValues = GPIO_PIN_CNF23_SENSE_Values<GPIO::PIN_CNF23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF23Pack  = Register<0x5000075C, 32, ReadWriteMode, GPIOPIN_CNF23Base, T...> ;

  struct GPIOPIN_CNF24Base {} ;

  struct PIN_CNF24 : public RegisterBase<0x50000760, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF24_DIR_Values<GPIO::PIN_CNF24, 0, 1, ReadWriteMode, GPIOPIN_CNF24Base> ;
    using INPUT = GPIO_PIN_CNF24_INPUT_Values<GPIO::PIN_CNF24, 1, 1, ReadWriteMode, GPIOPIN_CNF24Base> ;
    using PULL = GPIO_PIN_CNF24_PULL_Values<GPIO::PIN_CNF24, 2, 2, ReadWriteMode, GPIOPIN_CNF24Base> ;
    using DRIVE = GPIO_PIN_CNF24_DRIVE_Values<GPIO::PIN_CNF24, 8, 3, ReadWriteMode, GPIOPIN_CNF24Base> ;
    using SENSE = GPIO_PIN_CNF24_SENSE_Values<GPIO::PIN_CNF24, 16, 2, ReadWriteMode, GPIOPIN_CNF24Base> ;
    using FieldValues = GPIO_PIN_CNF24_SENSE_Values<GPIO::PIN_CNF24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF24Pack  = Register<0x50000760, 32, ReadWriteMode, GPIOPIN_CNF24Base, T...> ;

  struct GPIOPIN_CNF25Base {} ;

  struct PIN_CNF25 : public RegisterBase<0x50000764, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF25_DIR_Values<GPIO::PIN_CNF25, 0, 1, ReadWriteMode, GPIOPIN_CNF25Base> ;
    using INPUT = GPIO_PIN_CNF25_INPUT_Values<GPIO::PIN_CNF25, 1, 1, ReadWriteMode, GPIOPIN_CNF25Base> ;
    using PULL = GPIO_PIN_CNF25_PULL_Values<GPIO::PIN_CNF25, 2, 2, ReadWriteMode, GPIOPIN_CNF25Base> ;
    using DRIVE = GPIO_PIN_CNF25_DRIVE_Values<GPIO::PIN_CNF25, 8, 3, ReadWriteMode, GPIOPIN_CNF25Base> ;
    using SENSE = GPIO_PIN_CNF25_SENSE_Values<GPIO::PIN_CNF25, 16, 2, ReadWriteMode, GPIOPIN_CNF25Base> ;
    using FieldValues = GPIO_PIN_CNF25_SENSE_Values<GPIO::PIN_CNF25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF25Pack  = Register<0x50000764, 32, ReadWriteMode, GPIOPIN_CNF25Base, T...> ;

  struct GPIOPIN_CNF26Base {} ;

  struct PIN_CNF26 : public RegisterBase<0x50000768, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF26_DIR_Values<GPIO::PIN_CNF26, 0, 1, ReadWriteMode, GPIOPIN_CNF26Base> ;
    using INPUT = GPIO_PIN_CNF26_INPUT_Values<GPIO::PIN_CNF26, 1, 1, ReadWriteMode, GPIOPIN_CNF26Base> ;
    using PULL = GPIO_PIN_CNF26_PULL_Values<GPIO::PIN_CNF26, 2, 2, ReadWriteMode, GPIOPIN_CNF26Base> ;
    using DRIVE = GPIO_PIN_CNF26_DRIVE_Values<GPIO::PIN_CNF26, 8, 3, ReadWriteMode, GPIOPIN_CNF26Base> ;
    using SENSE = GPIO_PIN_CNF26_SENSE_Values<GPIO::PIN_CNF26, 16, 2, ReadWriteMode, GPIOPIN_CNF26Base> ;
    using FieldValues = GPIO_PIN_CNF26_SENSE_Values<GPIO::PIN_CNF26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF26Pack  = Register<0x50000768, 32, ReadWriteMode, GPIOPIN_CNF26Base, T...> ;

  struct GPIOPIN_CNF27Base {} ;

  struct PIN_CNF27 : public RegisterBase<0x5000076C, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF27_DIR_Values<GPIO::PIN_CNF27, 0, 1, ReadWriteMode, GPIOPIN_CNF27Base> ;
    using INPUT = GPIO_PIN_CNF27_INPUT_Values<GPIO::PIN_CNF27, 1, 1, ReadWriteMode, GPIOPIN_CNF27Base> ;
    using PULL = GPIO_PIN_CNF27_PULL_Values<GPIO::PIN_CNF27, 2, 2, ReadWriteMode, GPIOPIN_CNF27Base> ;
    using DRIVE = GPIO_PIN_CNF27_DRIVE_Values<GPIO::PIN_CNF27, 8, 3, ReadWriteMode, GPIOPIN_CNF27Base> ;
    using SENSE = GPIO_PIN_CNF27_SENSE_Values<GPIO::PIN_CNF27, 16, 2, ReadWriteMode, GPIOPIN_CNF27Base> ;
    using FieldValues = GPIO_PIN_CNF27_SENSE_Values<GPIO::PIN_CNF27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF27Pack  = Register<0x5000076C, 32, ReadWriteMode, GPIOPIN_CNF27Base, T...> ;

  struct GPIOPIN_CNF28Base {} ;

  struct PIN_CNF28 : public RegisterBase<0x50000770, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF28_DIR_Values<GPIO::PIN_CNF28, 0, 1, ReadWriteMode, GPIOPIN_CNF28Base> ;
    using INPUT = GPIO_PIN_CNF28_INPUT_Values<GPIO::PIN_CNF28, 1, 1, ReadWriteMode, GPIOPIN_CNF28Base> ;
    using PULL = GPIO_PIN_CNF28_PULL_Values<GPIO::PIN_CNF28, 2, 2, ReadWriteMode, GPIOPIN_CNF28Base> ;
    using DRIVE = GPIO_PIN_CNF28_DRIVE_Values<GPIO::PIN_CNF28, 8, 3, ReadWriteMode, GPIOPIN_CNF28Base> ;
    using SENSE = GPIO_PIN_CNF28_SENSE_Values<GPIO::PIN_CNF28, 16, 2, ReadWriteMode, GPIOPIN_CNF28Base> ;
    using FieldValues = GPIO_PIN_CNF28_SENSE_Values<GPIO::PIN_CNF28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF28Pack  = Register<0x50000770, 32, ReadWriteMode, GPIOPIN_CNF28Base, T...> ;

  struct GPIOPIN_CNF29Base {} ;

  struct PIN_CNF29 : public RegisterBase<0x50000774, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF29_DIR_Values<GPIO::PIN_CNF29, 0, 1, ReadWriteMode, GPIOPIN_CNF29Base> ;
    using INPUT = GPIO_PIN_CNF29_INPUT_Values<GPIO::PIN_CNF29, 1, 1, ReadWriteMode, GPIOPIN_CNF29Base> ;
    using PULL = GPIO_PIN_CNF29_PULL_Values<GPIO::PIN_CNF29, 2, 2, ReadWriteMode, GPIOPIN_CNF29Base> ;
    using DRIVE = GPIO_PIN_CNF29_DRIVE_Values<GPIO::PIN_CNF29, 8, 3, ReadWriteMode, GPIOPIN_CNF29Base> ;
    using SENSE = GPIO_PIN_CNF29_SENSE_Values<GPIO::PIN_CNF29, 16, 2, ReadWriteMode, GPIOPIN_CNF29Base> ;
    using FieldValues = GPIO_PIN_CNF29_SENSE_Values<GPIO::PIN_CNF29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF29Pack  = Register<0x50000774, 32, ReadWriteMode, GPIOPIN_CNF29Base, T...> ;

  struct GPIOPIN_CNF30Base {} ;

  struct PIN_CNF30 : public RegisterBase<0x50000778, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF30_DIR_Values<GPIO::PIN_CNF30, 0, 1, ReadWriteMode, GPIOPIN_CNF30Base> ;
    using INPUT = GPIO_PIN_CNF30_INPUT_Values<GPIO::PIN_CNF30, 1, 1, ReadWriteMode, GPIOPIN_CNF30Base> ;
    using PULL = GPIO_PIN_CNF30_PULL_Values<GPIO::PIN_CNF30, 2, 2, ReadWriteMode, GPIOPIN_CNF30Base> ;
    using DRIVE = GPIO_PIN_CNF30_DRIVE_Values<GPIO::PIN_CNF30, 8, 3, ReadWriteMode, GPIOPIN_CNF30Base> ;
    using SENSE = GPIO_PIN_CNF30_SENSE_Values<GPIO::PIN_CNF30, 16, 2, ReadWriteMode, GPIOPIN_CNF30Base> ;
    using FieldValues = GPIO_PIN_CNF30_SENSE_Values<GPIO::PIN_CNF30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF30Pack  = Register<0x50000778, 32, ReadWriteMode, GPIOPIN_CNF30Base, T...> ;

  struct GPIOPIN_CNF31Base {} ;

  struct PIN_CNF31 : public RegisterBase<0x5000077C, 32, ReadWriteMode>
  {
    using DIR = GPIO_PIN_CNF31_DIR_Values<GPIO::PIN_CNF31, 0, 1, ReadWriteMode, GPIOPIN_CNF31Base> ;
    using INPUT = GPIO_PIN_CNF31_INPUT_Values<GPIO::PIN_CNF31, 1, 1, ReadWriteMode, GPIOPIN_CNF31Base> ;
    using PULL = GPIO_PIN_CNF31_PULL_Values<GPIO::PIN_CNF31, 2, 2, ReadWriteMode, GPIOPIN_CNF31Base> ;
    using DRIVE = GPIO_PIN_CNF31_DRIVE_Values<GPIO::PIN_CNF31, 8, 3, ReadWriteMode, GPIOPIN_CNF31Base> ;
    using SENSE = GPIO_PIN_CNF31_SENSE_Values<GPIO::PIN_CNF31, 16, 2, ReadWriteMode, GPIOPIN_CNF31Base> ;
    using FieldValues = GPIO_PIN_CNF31_SENSE_Values<GPIO::PIN_CNF31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIN_CNF31Pack  = Register<0x5000077C, 32, ReadWriteMode, GPIOPIN_CNF31Base, T...> ;

} ;

#endif //#if !defined(GPIOREGISTERS_HPP)
