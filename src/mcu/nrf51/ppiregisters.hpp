/*******************************************************************************
* Filename      : ppiregisters.hpp
*
* Details       : PPI controller. This header file is auto-generated for nrf51
*                 device.
*
*
*******************************************************************************/

#if !defined(PPIREGISTERS_HPP)
#define PPIREGISTERS_HPP

#include "ppifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PPI
{
  struct PPICHENBase {} ;

  struct CHEN : public RegisterBase<0x4001F500, 32, ReadWriteMode>
  {
    using CH0 = PPI_CHEN_CH0_Values<PPI::CHEN, 0, 1, ReadWriteMode, PPICHENBase> ;
    using CH1 = PPI_CHEN_CH1_Values<PPI::CHEN, 1, 1, ReadWriteMode, PPICHENBase> ;
    using CH2 = PPI_CHEN_CH2_Values<PPI::CHEN, 2, 1, ReadWriteMode, PPICHENBase> ;
    using CH3 = PPI_CHEN_CH3_Values<PPI::CHEN, 3, 1, ReadWriteMode, PPICHENBase> ;
    using CH4 = PPI_CHEN_CH4_Values<PPI::CHEN, 4, 1, ReadWriteMode, PPICHENBase> ;
    using CH5 = PPI_CHEN_CH5_Values<PPI::CHEN, 5, 1, ReadWriteMode, PPICHENBase> ;
    using CH6 = PPI_CHEN_CH6_Values<PPI::CHEN, 6, 1, ReadWriteMode, PPICHENBase> ;
    using CH7 = PPI_CHEN_CH7_Values<PPI::CHEN, 7, 1, ReadWriteMode, PPICHENBase> ;
    using CH8 = PPI_CHEN_CH8_Values<PPI::CHEN, 8, 1, ReadWriteMode, PPICHENBase> ;
    using CH9 = PPI_CHEN_CH9_Values<PPI::CHEN, 9, 1, ReadWriteMode, PPICHENBase> ;
    using CH10 = PPI_CHEN_CH10_Values<PPI::CHEN, 10, 1, ReadWriteMode, PPICHENBase> ;
    using CH11 = PPI_CHEN_CH11_Values<PPI::CHEN, 11, 1, ReadWriteMode, PPICHENBase> ;
    using CH12 = PPI_CHEN_CH12_Values<PPI::CHEN, 12, 1, ReadWriteMode, PPICHENBase> ;
    using CH13 = PPI_CHEN_CH13_Values<PPI::CHEN, 13, 1, ReadWriteMode, PPICHENBase> ;
    using CH14 = PPI_CHEN_CH14_Values<PPI::CHEN, 14, 1, ReadWriteMode, PPICHENBase> ;
    using CH15 = PPI_CHEN_CH15_Values<PPI::CHEN, 15, 1, ReadWriteMode, PPICHENBase> ;
    using CH20 = PPI_CHEN_CH20_Values<PPI::CHEN, 20, 1, ReadWriteMode, PPICHENBase> ;
    using CH21 = PPI_CHEN_CH21_Values<PPI::CHEN, 21, 1, ReadWriteMode, PPICHENBase> ;
    using CH22 = PPI_CHEN_CH22_Values<PPI::CHEN, 22, 1, ReadWriteMode, PPICHENBase> ;
    using CH23 = PPI_CHEN_CH23_Values<PPI::CHEN, 23, 1, ReadWriteMode, PPICHENBase> ;
    using CH24 = PPI_CHEN_CH24_Values<PPI::CHEN, 24, 1, ReadWriteMode, PPICHENBase> ;
    using CH25 = PPI_CHEN_CH25_Values<PPI::CHEN, 25, 1, ReadWriteMode, PPICHENBase> ;
    using CH26 = PPI_CHEN_CH26_Values<PPI::CHEN, 26, 1, ReadWriteMode, PPICHENBase> ;
    using CH27 = PPI_CHEN_CH27_Values<PPI::CHEN, 27, 1, ReadWriteMode, PPICHENBase> ;
    using CH28 = PPI_CHEN_CH28_Values<PPI::CHEN, 28, 1, ReadWriteMode, PPICHENBase> ;
    using CH29 = PPI_CHEN_CH29_Values<PPI::CHEN, 29, 1, ReadWriteMode, PPICHENBase> ;
    using CH30 = PPI_CHEN_CH30_Values<PPI::CHEN, 30, 1, ReadWriteMode, PPICHENBase> ;
    using CH31 = PPI_CHEN_CH31_Values<PPI::CHEN, 31, 1, ReadWriteMode, PPICHENBase> ;
    using FieldValues = PPI_CHEN_CH31_Values<PPI::CHEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHENPack  = Register<0x4001F500, 32, ReadWriteMode, PPICHENBase, T...> ;

  struct PPICHENSETBase {} ;

  struct CHENSET : public RegisterBase<0x4001F504, 32, ReadWriteMode>
  {
    using CH0 = PPI_CHENSET_CH0_Values<PPI::CHENSET, 0, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH1 = PPI_CHENSET_CH1_Values<PPI::CHENSET, 1, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH2 = PPI_CHENSET_CH2_Values<PPI::CHENSET, 2, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH3 = PPI_CHENSET_CH3_Values<PPI::CHENSET, 3, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH4 = PPI_CHENSET_CH4_Values<PPI::CHENSET, 4, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH5 = PPI_CHENSET_CH5_Values<PPI::CHENSET, 5, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH6 = PPI_CHENSET_CH6_Values<PPI::CHENSET, 6, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH7 = PPI_CHENSET_CH7_Values<PPI::CHENSET, 7, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH8 = PPI_CHENSET_CH8_Values<PPI::CHENSET, 8, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH9 = PPI_CHENSET_CH9_Values<PPI::CHENSET, 9, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH10 = PPI_CHENSET_CH10_Values<PPI::CHENSET, 10, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH11 = PPI_CHENSET_CH11_Values<PPI::CHENSET, 11, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH12 = PPI_CHENSET_CH12_Values<PPI::CHENSET, 12, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH13 = PPI_CHENSET_CH13_Values<PPI::CHENSET, 13, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH14 = PPI_CHENSET_CH14_Values<PPI::CHENSET, 14, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH15 = PPI_CHENSET_CH15_Values<PPI::CHENSET, 15, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH20 = PPI_CHENSET_CH20_Values<PPI::CHENSET, 20, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH21 = PPI_CHENSET_CH21_Values<PPI::CHENSET, 21, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH22 = PPI_CHENSET_CH22_Values<PPI::CHENSET, 22, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH23 = PPI_CHENSET_CH23_Values<PPI::CHENSET, 23, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH24 = PPI_CHENSET_CH24_Values<PPI::CHENSET, 24, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH25 = PPI_CHENSET_CH25_Values<PPI::CHENSET, 25, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH26 = PPI_CHENSET_CH26_Values<PPI::CHENSET, 26, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH27 = PPI_CHENSET_CH27_Values<PPI::CHENSET, 27, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH28 = PPI_CHENSET_CH28_Values<PPI::CHENSET, 28, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH29 = PPI_CHENSET_CH29_Values<PPI::CHENSET, 29, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH30 = PPI_CHENSET_CH30_Values<PPI::CHENSET, 30, 1, ReadWriteMode, PPICHENSETBase> ;
    using CH31 = PPI_CHENSET_CH31_Values<PPI::CHENSET, 31, 1, ReadWriteMode, PPICHENSETBase> ;
    using FieldValues = PPI_CHENSET_CH31_Values<PPI::CHENSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHENSETPack  = Register<0x4001F504, 32, ReadWriteMode, PPICHENSETBase, T...> ;

  struct PPICHENCLRBase {} ;

  struct CHENCLR : public RegisterBase<0x4001F508, 32, ReadWriteMode>
  {
    using CH0 = PPI_CHENCLR_CH0_Values<PPI::CHENCLR, 0, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH1 = PPI_CHENCLR_CH1_Values<PPI::CHENCLR, 1, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH2 = PPI_CHENCLR_CH2_Values<PPI::CHENCLR, 2, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH3 = PPI_CHENCLR_CH3_Values<PPI::CHENCLR, 3, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH4 = PPI_CHENCLR_CH4_Values<PPI::CHENCLR, 4, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH5 = PPI_CHENCLR_CH5_Values<PPI::CHENCLR, 5, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH6 = PPI_CHENCLR_CH6_Values<PPI::CHENCLR, 6, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH7 = PPI_CHENCLR_CH7_Values<PPI::CHENCLR, 7, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH8 = PPI_CHENCLR_CH8_Values<PPI::CHENCLR, 8, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH9 = PPI_CHENCLR_CH9_Values<PPI::CHENCLR, 9, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH10 = PPI_CHENCLR_CH10_Values<PPI::CHENCLR, 10, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH11 = PPI_CHENCLR_CH11_Values<PPI::CHENCLR, 11, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH12 = PPI_CHENCLR_CH12_Values<PPI::CHENCLR, 12, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH13 = PPI_CHENCLR_CH13_Values<PPI::CHENCLR, 13, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH14 = PPI_CHENCLR_CH14_Values<PPI::CHENCLR, 14, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH15 = PPI_CHENCLR_CH15_Values<PPI::CHENCLR, 15, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH20 = PPI_CHENCLR_CH20_Values<PPI::CHENCLR, 20, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH21 = PPI_CHENCLR_CH21_Values<PPI::CHENCLR, 21, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH22 = PPI_CHENCLR_CH22_Values<PPI::CHENCLR, 22, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH23 = PPI_CHENCLR_CH23_Values<PPI::CHENCLR, 23, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH24 = PPI_CHENCLR_CH24_Values<PPI::CHENCLR, 24, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH25 = PPI_CHENCLR_CH25_Values<PPI::CHENCLR, 25, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH26 = PPI_CHENCLR_CH26_Values<PPI::CHENCLR, 26, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH27 = PPI_CHENCLR_CH27_Values<PPI::CHENCLR, 27, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH28 = PPI_CHENCLR_CH28_Values<PPI::CHENCLR, 28, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH29 = PPI_CHENCLR_CH29_Values<PPI::CHENCLR, 29, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH30 = PPI_CHENCLR_CH30_Values<PPI::CHENCLR, 30, 1, ReadWriteMode, PPICHENCLRBase> ;
    using CH31 = PPI_CHENCLR_CH31_Values<PPI::CHENCLR, 31, 1, ReadWriteMode, PPICHENCLRBase> ;
    using FieldValues = PPI_CHENCLR_CH31_Values<PPI::CHENCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHENCLRPack  = Register<0x4001F508, 32, ReadWriteMode, PPICHENCLRBase, T...> ;

  struct PPICHG0Base {} ;

  struct CHG0 : public RegisterBase<0x4001F800, 32, ReadWriteMode>
  {
    using CH0 = PPI_CHG0_CH0_Values<PPI::CHG0, 0, 1, ReadWriteMode, PPICHG0Base> ;
    using CH1 = PPI_CHG0_CH1_Values<PPI::CHG0, 1, 1, ReadWriteMode, PPICHG0Base> ;
    using CH2 = PPI_CHG0_CH2_Values<PPI::CHG0, 2, 1, ReadWriteMode, PPICHG0Base> ;
    using CH3 = PPI_CHG0_CH3_Values<PPI::CHG0, 3, 1, ReadWriteMode, PPICHG0Base> ;
    using CH4 = PPI_CHG0_CH4_Values<PPI::CHG0, 4, 1, ReadWriteMode, PPICHG0Base> ;
    using CH5 = PPI_CHG0_CH5_Values<PPI::CHG0, 5, 1, ReadWriteMode, PPICHG0Base> ;
    using CH6 = PPI_CHG0_CH6_Values<PPI::CHG0, 6, 1, ReadWriteMode, PPICHG0Base> ;
    using CH7 = PPI_CHG0_CH7_Values<PPI::CHG0, 7, 1, ReadWriteMode, PPICHG0Base> ;
    using CH8 = PPI_CHG0_CH8_Values<PPI::CHG0, 8, 1, ReadWriteMode, PPICHG0Base> ;
    using CH9 = PPI_CHG0_CH9_Values<PPI::CHG0, 9, 1, ReadWriteMode, PPICHG0Base> ;
    using CH10 = PPI_CHG0_CH10_Values<PPI::CHG0, 10, 1, ReadWriteMode, PPICHG0Base> ;
    using CH11 = PPI_CHG0_CH11_Values<PPI::CHG0, 11, 1, ReadWriteMode, PPICHG0Base> ;
    using CH12 = PPI_CHG0_CH12_Values<PPI::CHG0, 12, 1, ReadWriteMode, PPICHG0Base> ;
    using CH13 = PPI_CHG0_CH13_Values<PPI::CHG0, 13, 1, ReadWriteMode, PPICHG0Base> ;
    using CH14 = PPI_CHG0_CH14_Values<PPI::CHG0, 14, 1, ReadWriteMode, PPICHG0Base> ;
    using CH15 = PPI_CHG0_CH15_Values<PPI::CHG0, 15, 1, ReadWriteMode, PPICHG0Base> ;
    using CH20 = PPI_CHG0_CH20_Values<PPI::CHG0, 20, 1, ReadWriteMode, PPICHG0Base> ;
    using CH21 = PPI_CHG0_CH21_Values<PPI::CHG0, 21, 1, ReadWriteMode, PPICHG0Base> ;
    using CH22 = PPI_CHG0_CH22_Values<PPI::CHG0, 22, 1, ReadWriteMode, PPICHG0Base> ;
    using CH23 = PPI_CHG0_CH23_Values<PPI::CHG0, 23, 1, ReadWriteMode, PPICHG0Base> ;
    using CH24 = PPI_CHG0_CH24_Values<PPI::CHG0, 24, 1, ReadWriteMode, PPICHG0Base> ;
    using CH25 = PPI_CHG0_CH25_Values<PPI::CHG0, 25, 1, ReadWriteMode, PPICHG0Base> ;
    using CH26 = PPI_CHG0_CH26_Values<PPI::CHG0, 26, 1, ReadWriteMode, PPICHG0Base> ;
    using CH27 = PPI_CHG0_CH27_Values<PPI::CHG0, 27, 1, ReadWriteMode, PPICHG0Base> ;
    using CH28 = PPI_CHG0_CH28_Values<PPI::CHG0, 28, 1, ReadWriteMode, PPICHG0Base> ;
    using CH29 = PPI_CHG0_CH29_Values<PPI::CHG0, 29, 1, ReadWriteMode, PPICHG0Base> ;
    using CH30 = PPI_CHG0_CH30_Values<PPI::CHG0, 30, 1, ReadWriteMode, PPICHG0Base> ;
    using CH31 = PPI_CHG0_CH31_Values<PPI::CHG0, 31, 1, ReadWriteMode, PPICHG0Base> ;
    using FieldValues = PPI_CHG0_CH31_Values<PPI::CHG0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHG0Pack  = Register<0x4001F800, 32, ReadWriteMode, PPICHG0Base, T...> ;

  struct PPICHG1Base {} ;

  struct CHG1 : public RegisterBase<0x4001F804, 32, ReadWriteMode>
  {
    using CH0 = PPI_CHG1_CH0_Values<PPI::CHG1, 0, 1, ReadWriteMode, PPICHG1Base> ;
    using CH1 = PPI_CHG1_CH1_Values<PPI::CHG1, 1, 1, ReadWriteMode, PPICHG1Base> ;
    using CH2 = PPI_CHG1_CH2_Values<PPI::CHG1, 2, 1, ReadWriteMode, PPICHG1Base> ;
    using CH3 = PPI_CHG1_CH3_Values<PPI::CHG1, 3, 1, ReadWriteMode, PPICHG1Base> ;
    using CH4 = PPI_CHG1_CH4_Values<PPI::CHG1, 4, 1, ReadWriteMode, PPICHG1Base> ;
    using CH5 = PPI_CHG1_CH5_Values<PPI::CHG1, 5, 1, ReadWriteMode, PPICHG1Base> ;
    using CH6 = PPI_CHG1_CH6_Values<PPI::CHG1, 6, 1, ReadWriteMode, PPICHG1Base> ;
    using CH7 = PPI_CHG1_CH7_Values<PPI::CHG1, 7, 1, ReadWriteMode, PPICHG1Base> ;
    using CH8 = PPI_CHG1_CH8_Values<PPI::CHG1, 8, 1, ReadWriteMode, PPICHG1Base> ;
    using CH9 = PPI_CHG1_CH9_Values<PPI::CHG1, 9, 1, ReadWriteMode, PPICHG1Base> ;
    using CH10 = PPI_CHG1_CH10_Values<PPI::CHG1, 10, 1, ReadWriteMode, PPICHG1Base> ;
    using CH11 = PPI_CHG1_CH11_Values<PPI::CHG1, 11, 1, ReadWriteMode, PPICHG1Base> ;
    using CH12 = PPI_CHG1_CH12_Values<PPI::CHG1, 12, 1, ReadWriteMode, PPICHG1Base> ;
    using CH13 = PPI_CHG1_CH13_Values<PPI::CHG1, 13, 1, ReadWriteMode, PPICHG1Base> ;
    using CH14 = PPI_CHG1_CH14_Values<PPI::CHG1, 14, 1, ReadWriteMode, PPICHG1Base> ;
    using CH15 = PPI_CHG1_CH15_Values<PPI::CHG1, 15, 1, ReadWriteMode, PPICHG1Base> ;
    using CH20 = PPI_CHG1_CH20_Values<PPI::CHG1, 20, 1, ReadWriteMode, PPICHG1Base> ;
    using CH21 = PPI_CHG1_CH21_Values<PPI::CHG1, 21, 1, ReadWriteMode, PPICHG1Base> ;
    using CH22 = PPI_CHG1_CH22_Values<PPI::CHG1, 22, 1, ReadWriteMode, PPICHG1Base> ;
    using CH23 = PPI_CHG1_CH23_Values<PPI::CHG1, 23, 1, ReadWriteMode, PPICHG1Base> ;
    using CH24 = PPI_CHG1_CH24_Values<PPI::CHG1, 24, 1, ReadWriteMode, PPICHG1Base> ;
    using CH25 = PPI_CHG1_CH25_Values<PPI::CHG1, 25, 1, ReadWriteMode, PPICHG1Base> ;
    using CH26 = PPI_CHG1_CH26_Values<PPI::CHG1, 26, 1, ReadWriteMode, PPICHG1Base> ;
    using CH27 = PPI_CHG1_CH27_Values<PPI::CHG1, 27, 1, ReadWriteMode, PPICHG1Base> ;
    using CH28 = PPI_CHG1_CH28_Values<PPI::CHG1, 28, 1, ReadWriteMode, PPICHG1Base> ;
    using CH29 = PPI_CHG1_CH29_Values<PPI::CHG1, 29, 1, ReadWriteMode, PPICHG1Base> ;
    using CH30 = PPI_CHG1_CH30_Values<PPI::CHG1, 30, 1, ReadWriteMode, PPICHG1Base> ;
    using CH31 = PPI_CHG1_CH31_Values<PPI::CHG1, 31, 1, ReadWriteMode, PPICHG1Base> ;
    using FieldValues = PPI_CHG1_CH31_Values<PPI::CHG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHG1Pack  = Register<0x4001F804, 32, ReadWriteMode, PPICHG1Base, T...> ;

  struct PPICHG2Base {} ;

  struct CHG2 : public RegisterBase<0x4001F808, 32, ReadWriteMode>
  {
    using CH0 = PPI_CHG2_CH0_Values<PPI::CHG2, 0, 1, ReadWriteMode, PPICHG2Base> ;
    using CH1 = PPI_CHG2_CH1_Values<PPI::CHG2, 1, 1, ReadWriteMode, PPICHG2Base> ;
    using CH2 = PPI_CHG2_CH2_Values<PPI::CHG2, 2, 1, ReadWriteMode, PPICHG2Base> ;
    using CH3 = PPI_CHG2_CH3_Values<PPI::CHG2, 3, 1, ReadWriteMode, PPICHG2Base> ;
    using CH4 = PPI_CHG2_CH4_Values<PPI::CHG2, 4, 1, ReadWriteMode, PPICHG2Base> ;
    using CH5 = PPI_CHG2_CH5_Values<PPI::CHG2, 5, 1, ReadWriteMode, PPICHG2Base> ;
    using CH6 = PPI_CHG2_CH6_Values<PPI::CHG2, 6, 1, ReadWriteMode, PPICHG2Base> ;
    using CH7 = PPI_CHG2_CH7_Values<PPI::CHG2, 7, 1, ReadWriteMode, PPICHG2Base> ;
    using CH8 = PPI_CHG2_CH8_Values<PPI::CHG2, 8, 1, ReadWriteMode, PPICHG2Base> ;
    using CH9 = PPI_CHG2_CH9_Values<PPI::CHG2, 9, 1, ReadWriteMode, PPICHG2Base> ;
    using CH10 = PPI_CHG2_CH10_Values<PPI::CHG2, 10, 1, ReadWriteMode, PPICHG2Base> ;
    using CH11 = PPI_CHG2_CH11_Values<PPI::CHG2, 11, 1, ReadWriteMode, PPICHG2Base> ;
    using CH12 = PPI_CHG2_CH12_Values<PPI::CHG2, 12, 1, ReadWriteMode, PPICHG2Base> ;
    using CH13 = PPI_CHG2_CH13_Values<PPI::CHG2, 13, 1, ReadWriteMode, PPICHG2Base> ;
    using CH14 = PPI_CHG2_CH14_Values<PPI::CHG2, 14, 1, ReadWriteMode, PPICHG2Base> ;
    using CH15 = PPI_CHG2_CH15_Values<PPI::CHG2, 15, 1, ReadWriteMode, PPICHG2Base> ;
    using CH20 = PPI_CHG2_CH20_Values<PPI::CHG2, 20, 1, ReadWriteMode, PPICHG2Base> ;
    using CH21 = PPI_CHG2_CH21_Values<PPI::CHG2, 21, 1, ReadWriteMode, PPICHG2Base> ;
    using CH22 = PPI_CHG2_CH22_Values<PPI::CHG2, 22, 1, ReadWriteMode, PPICHG2Base> ;
    using CH23 = PPI_CHG2_CH23_Values<PPI::CHG2, 23, 1, ReadWriteMode, PPICHG2Base> ;
    using CH24 = PPI_CHG2_CH24_Values<PPI::CHG2, 24, 1, ReadWriteMode, PPICHG2Base> ;
    using CH25 = PPI_CHG2_CH25_Values<PPI::CHG2, 25, 1, ReadWriteMode, PPICHG2Base> ;
    using CH26 = PPI_CHG2_CH26_Values<PPI::CHG2, 26, 1, ReadWriteMode, PPICHG2Base> ;
    using CH27 = PPI_CHG2_CH27_Values<PPI::CHG2, 27, 1, ReadWriteMode, PPICHG2Base> ;
    using CH28 = PPI_CHG2_CH28_Values<PPI::CHG2, 28, 1, ReadWriteMode, PPICHG2Base> ;
    using CH29 = PPI_CHG2_CH29_Values<PPI::CHG2, 29, 1, ReadWriteMode, PPICHG2Base> ;
    using CH30 = PPI_CHG2_CH30_Values<PPI::CHG2, 30, 1, ReadWriteMode, PPICHG2Base> ;
    using CH31 = PPI_CHG2_CH31_Values<PPI::CHG2, 31, 1, ReadWriteMode, PPICHG2Base> ;
    using FieldValues = PPI_CHG2_CH31_Values<PPI::CHG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHG2Pack  = Register<0x4001F808, 32, ReadWriteMode, PPICHG2Base, T...> ;

  struct PPICHG3Base {} ;

  struct CHG3 : public RegisterBase<0x4001F80C, 32, ReadWriteMode>
  {
    using CH0 = PPI_CHG3_CH0_Values<PPI::CHG3, 0, 1, ReadWriteMode, PPICHG3Base> ;
    using CH1 = PPI_CHG3_CH1_Values<PPI::CHG3, 1, 1, ReadWriteMode, PPICHG3Base> ;
    using CH2 = PPI_CHG3_CH2_Values<PPI::CHG3, 2, 1, ReadWriteMode, PPICHG3Base> ;
    using CH3 = PPI_CHG3_CH3_Values<PPI::CHG3, 3, 1, ReadWriteMode, PPICHG3Base> ;
    using CH4 = PPI_CHG3_CH4_Values<PPI::CHG3, 4, 1, ReadWriteMode, PPICHG3Base> ;
    using CH5 = PPI_CHG3_CH5_Values<PPI::CHG3, 5, 1, ReadWriteMode, PPICHG3Base> ;
    using CH6 = PPI_CHG3_CH6_Values<PPI::CHG3, 6, 1, ReadWriteMode, PPICHG3Base> ;
    using CH7 = PPI_CHG3_CH7_Values<PPI::CHG3, 7, 1, ReadWriteMode, PPICHG3Base> ;
    using CH8 = PPI_CHG3_CH8_Values<PPI::CHG3, 8, 1, ReadWriteMode, PPICHG3Base> ;
    using CH9 = PPI_CHG3_CH9_Values<PPI::CHG3, 9, 1, ReadWriteMode, PPICHG3Base> ;
    using CH10 = PPI_CHG3_CH10_Values<PPI::CHG3, 10, 1, ReadWriteMode, PPICHG3Base> ;
    using CH11 = PPI_CHG3_CH11_Values<PPI::CHG3, 11, 1, ReadWriteMode, PPICHG3Base> ;
    using CH12 = PPI_CHG3_CH12_Values<PPI::CHG3, 12, 1, ReadWriteMode, PPICHG3Base> ;
    using CH13 = PPI_CHG3_CH13_Values<PPI::CHG3, 13, 1, ReadWriteMode, PPICHG3Base> ;
    using CH14 = PPI_CHG3_CH14_Values<PPI::CHG3, 14, 1, ReadWriteMode, PPICHG3Base> ;
    using CH15 = PPI_CHG3_CH15_Values<PPI::CHG3, 15, 1, ReadWriteMode, PPICHG3Base> ;
    using CH20 = PPI_CHG3_CH20_Values<PPI::CHG3, 20, 1, ReadWriteMode, PPICHG3Base> ;
    using CH21 = PPI_CHG3_CH21_Values<PPI::CHG3, 21, 1, ReadWriteMode, PPICHG3Base> ;
    using CH22 = PPI_CHG3_CH22_Values<PPI::CHG3, 22, 1, ReadWriteMode, PPICHG3Base> ;
    using CH23 = PPI_CHG3_CH23_Values<PPI::CHG3, 23, 1, ReadWriteMode, PPICHG3Base> ;
    using CH24 = PPI_CHG3_CH24_Values<PPI::CHG3, 24, 1, ReadWriteMode, PPICHG3Base> ;
    using CH25 = PPI_CHG3_CH25_Values<PPI::CHG3, 25, 1, ReadWriteMode, PPICHG3Base> ;
    using CH26 = PPI_CHG3_CH26_Values<PPI::CHG3, 26, 1, ReadWriteMode, PPICHG3Base> ;
    using CH27 = PPI_CHG3_CH27_Values<PPI::CHG3, 27, 1, ReadWriteMode, PPICHG3Base> ;
    using CH28 = PPI_CHG3_CH28_Values<PPI::CHG3, 28, 1, ReadWriteMode, PPICHG3Base> ;
    using CH29 = PPI_CHG3_CH29_Values<PPI::CHG3, 29, 1, ReadWriteMode, PPICHG3Base> ;
    using CH30 = PPI_CHG3_CH30_Values<PPI::CHG3, 30, 1, ReadWriteMode, PPICHG3Base> ;
    using CH31 = PPI_CHG3_CH31_Values<PPI::CHG3, 31, 1, ReadWriteMode, PPICHG3Base> ;
    using FieldValues = PPI_CHG3_CH31_Values<PPI::CHG3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHG3Pack  = Register<0x4001F80C, 32, ReadWriteMode, PPICHG3Base, T...> ;

} ;

#endif //#if !defined(PPIREGISTERS_HPP)
