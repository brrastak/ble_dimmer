/*******************************************************************************
* Filename      : radiofieldvalues.hpp
*
* Details       : Enumerations related with RADIO peripheral. This header file
*                 is auto-generated for nrf51 device.
*
*
*******************************************************************************/

#if !defined(RADIOENUMS_HPP)
#define RADIOENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_SHORTS_READY_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_SHORTS_READY_START_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_SHORTS_READY_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_SHORTS_END_DISABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_SHORTS_END_DISABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_SHORTS_END_DISABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_SHORTS_DISABLED_TXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_SHORTS_DISABLED_TXEN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_SHORTS_DISABLED_TXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_SHORTS_DISABLED_RXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_SHORTS_DISABLED_RXEN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_SHORTS_DISABLED_RXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_SHORTS_ADDRESS_RSSISTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_SHORTS_ADDRESS_RSSISTART_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_SHORTS_ADDRESS_RSSISTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_SHORTS_END_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_SHORTS_END_START_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_SHORTS_END_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_SHORTS_ADDRESS_BCSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_SHORTS_ADDRESS_BCSTART_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_SHORTS_ADDRESS_BCSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_SHORTS_DISABLED_RSSISTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_SHORTS_DISABLED_RSSISTOP_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_SHORTS_DISABLED_RSSISTOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENSET_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENSET_READY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENSET_READY_Values, BaseType, 1U> ;
  using Set = FieldValue<RADIO_INTENSET_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENSET_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENSET_ADDRESS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENSET_ADDRESS_Values, BaseType, 1U> ;
  using Set = FieldValue<RADIO_INTENSET_ADDRESS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENSET_PAYLOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENSET_PAYLOAD_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENSET_PAYLOAD_Values, BaseType, 1U> ;
  using Set = FieldValue<RADIO_INTENSET_PAYLOAD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENSET_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENSET_END_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENSET_END_Values, BaseType, 1U> ;
  using Set = FieldValue<RADIO_INTENSET_END_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENSET_DISABLED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENSET_DISABLED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENSET_DISABLED_Values, BaseType, 1U> ;
  using Set = FieldValue<RADIO_INTENSET_DISABLED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENSET_DEVMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENSET_DEVMATCH_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENSET_DEVMATCH_Values, BaseType, 1U> ;
  using Set = FieldValue<RADIO_INTENSET_DEVMATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENSET_DEVMISS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENSET_DEVMISS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENSET_DEVMISS_Values, BaseType, 1U> ;
  using Set = FieldValue<RADIO_INTENSET_DEVMISS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENSET_RSSIEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENSET_RSSIEND_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENSET_RSSIEND_Values, BaseType, 1U> ;
  using Set = FieldValue<RADIO_INTENSET_RSSIEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENSET_BCMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENSET_BCMATCH_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENSET_BCMATCH_Values, BaseType, 1U> ;
  using Set = FieldValue<RADIO_INTENSET_BCMATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENCLR_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENCLR_READY_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENCLR_READY_Values, BaseType, 1U> ;
  using Clear = FieldValue<RADIO_INTENCLR_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENCLR_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENCLR_ADDRESS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENCLR_ADDRESS_Values, BaseType, 1U> ;
  using Clear = FieldValue<RADIO_INTENCLR_ADDRESS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENCLR_PAYLOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENCLR_PAYLOAD_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENCLR_PAYLOAD_Values, BaseType, 1U> ;
  using Clear = FieldValue<RADIO_INTENCLR_PAYLOAD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENCLR_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENCLR_END_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENCLR_END_Values, BaseType, 1U> ;
  using Clear = FieldValue<RADIO_INTENCLR_END_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENCLR_DISABLED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENCLR_DISABLED_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENCLR_DISABLED_Values, BaseType, 1U> ;
  using Clear = FieldValue<RADIO_INTENCLR_DISABLED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENCLR_DEVMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENCLR_DEVMATCH_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENCLR_DEVMATCH_Values, BaseType, 1U> ;
  using Clear = FieldValue<RADIO_INTENCLR_DEVMATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENCLR_DEVMISS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENCLR_DEVMISS_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENCLR_DEVMISS_Values, BaseType, 1U> ;
  using Clear = FieldValue<RADIO_INTENCLR_DEVMISS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENCLR_RSSIEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENCLR_RSSIEND_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENCLR_RSSIEND_Values, BaseType, 1U> ;
  using Clear = FieldValue<RADIO_INTENCLR_RSSIEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_INTENCLR_BCMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_INTENCLR_BCMATCH_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_INTENCLR_BCMATCH_Values, BaseType, 1U> ;
  using Clear = FieldValue<RADIO_INTENCLR_BCMATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_CRCSTATUS_CRCSTATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CRCError = FieldValue<RADIO_CRCSTATUS_CRCSTATUS_Values, BaseType, 0U> ;
  using CRCOk = FieldValue<RADIO_CRCSTATUS_CRCSTATUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXMATCH_RXMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_RXMATCH_RXMATCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_RXMATCH_RXMATCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RADIO_RXMATCH_RXMATCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RADIO_RXMATCH_RXMATCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RADIO_RXMATCH_RXMATCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RADIO_RXMATCH_RXMATCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RADIO_RXMATCH_RXMATCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RADIO_RXMATCH_RXMATCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXCRC_RXCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DAI_DAI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_DAI_DAI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_DAI_DAI_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RADIO_DAI_DAI_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RADIO_DAI_DAI_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RADIO_DAI_DAI_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RADIO_DAI_DAI_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RADIO_DAI_DAI_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RADIO_DAI_DAI_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_FREQUENCY_FREQUENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_TXPOWER_TXPOWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_MODE_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Nrf_1Mbit = FieldValue<RADIO_MODE_MODE_Values, BaseType, 0U> ;
  using Nrf_2Mbit = FieldValue<RADIO_MODE_MODE_Values, BaseType, 1U> ;
  using Nrf_250Kbit = FieldValue<RADIO_MODE_MODE_Values, BaseType, 2U> ;
  using Ble_1Mbit = FieldValue<RADIO_MODE_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PCNF0_LFLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RADIO_PCNF0_LFLEN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PCNF0_S0LEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_PCNF0_S0LEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_PCNF0_S0LEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PCNF0_S1LEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RADIO_PCNF0_S1LEN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PCNF1_MAXLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PCNF1_STATLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PCNF1_BALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_PCNF1_BALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_PCNF1_BALEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RADIO_PCNF1_BALEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RADIO_PCNF1_BALEN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RADIO_PCNF1_BALEN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RADIO_PCNF1_BALEN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RADIO_PCNF1_BALEN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RADIO_PCNF1_BALEN_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PCNF1_ENDIAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Little = FieldValue<RADIO_PCNF1_ENDIAN_Values, BaseType, 0U> ;
  using Big = FieldValue<RADIO_PCNF1_ENDIAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PCNF1_WHITEEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_PCNF1_WHITEEN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_PCNF1_WHITEEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PREFIX0_AP0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PREFIX0_AP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PREFIX0_AP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PREFIX0_AP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PREFIX1_AP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PREFIX1_AP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PREFIX1_AP6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_PREFIX1_AP7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_TXADDRESS_TXADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_TXADDRESS_TXADDRESS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_TXADDRESS_TXADDRESS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RADIO_TXADDRESS_TXADDRESS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RADIO_TXADDRESS_TXADDRESS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RADIO_TXADDRESS_TXADDRESS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RADIO_TXADDRESS_TXADDRESS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RADIO_TXADDRESS_TXADDRESS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RADIO_TXADDRESS_TXADDRESS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXADDRESSES_ADDR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_RXADDRESSES_ADDR0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_RXADDRESSES_ADDR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXADDRESSES_ADDR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_RXADDRESSES_ADDR1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_RXADDRESSES_ADDR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXADDRESSES_ADDR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_RXADDRESSES_ADDR2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_RXADDRESSES_ADDR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXADDRESSES_ADDR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_RXADDRESSES_ADDR3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_RXADDRESSES_ADDR3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXADDRESSES_ADDR4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_RXADDRESSES_ADDR4_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_RXADDRESSES_ADDR4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXADDRESSES_ADDR5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_RXADDRESSES_ADDR5_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_RXADDRESSES_ADDR5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXADDRESSES_ADDR6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_RXADDRESSES_ADDR6_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_RXADDRESSES_ADDR6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RXADDRESSES_ADDR7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_RXADDRESSES_ADDR7_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_RXADDRESSES_ADDR7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_CRCCNF_LEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_CRCCNF_LEN_Values, BaseType, 0U> ;
  using One = FieldValue<RADIO_CRCCNF_LEN_Values, BaseType, 1U> ;
  using Two = FieldValue<RADIO_CRCCNF_LEN_Values, BaseType, 2U> ;
  using Three = FieldValue<RADIO_CRCCNF_LEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_CRCCNF_SKIPADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Include = FieldValue<RADIO_CRCCNF_SKIPADDR_Values, BaseType, 0U> ;
  using Skip = FieldValue<RADIO_CRCCNF_SKIPADDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_CRCPOLY_CRCPOLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_CRCINIT_CRCINIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_TEST_CONSTCARRIER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_TEST_CONSTCARRIER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_TEST_CONSTCARRIER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_TEST_PLLLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_TEST_PLLLOCK_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_TEST_PLLLOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_TIFS_TIFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_RSSISAMPLE_RSSISAMPLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_STATE_STATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_STATE_STATE_Values, BaseType, 0U> ;
  using RxRu = FieldValue<RADIO_STATE_STATE_Values, BaseType, 1U> ;
  using RxIdle = FieldValue<RADIO_STATE_STATE_Values, BaseType, 2U> ;
  using Rx = FieldValue<RADIO_STATE_STATE_Values, BaseType, 3U> ;
  using RxDisable = FieldValue<RADIO_STATE_STATE_Values, BaseType, 4U> ;
  using TxRu = FieldValue<RADIO_STATE_STATE_Values, BaseType, 9U> ;
  using TxIdle = FieldValue<RADIO_STATE_STATE_Values, BaseType, 10U> ;
  using Tx = FieldValue<RADIO_STATE_STATE_Values, BaseType, 11U> ;
  using TxDisable = FieldValue<RADIO_STATE_STATE_Values, BaseType, 12U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DATAWHITEIV_DATAWHITEIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_ENA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_DACNF_ENA0_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_DACNF_ENA0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_ENA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_DACNF_ENA1_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_DACNF_ENA1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_ENA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_DACNF_ENA2_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_DACNF_ENA2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_ENA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_DACNF_ENA3_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_DACNF_ENA3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_ENA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_DACNF_ENA4_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_DACNF_ENA4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_ENA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_DACNF_ENA5_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_DACNF_ENA5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_ENA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_DACNF_ENA6_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_DACNF_ENA6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_ENA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_DACNF_ENA7_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_DACNF_ENA7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_TXADD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_DACNF_TXADD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_DACNF_TXADD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_TXADD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_DACNF_TXADD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_DACNF_TXADD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_TXADD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_DACNF_TXADD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_DACNF_TXADD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_TXADD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_DACNF_TXADD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_DACNF_TXADD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_TXADD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_DACNF_TXADD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_DACNF_TXADD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_TXADD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_DACNF_TXADD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_DACNF_TXADD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_TXADD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_DACNF_TXADD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_DACNF_TXADD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DACNF_TXADD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RADIO_DACNF_TXADD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RADIO_DACNF_TXADD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_OVERRIDE0_OVERRIDE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_OVERRIDE1_OVERRIDE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_OVERRIDE2_OVERRIDE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_OVERRIDE3_OVERRIDE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_OVERRIDE4_OVERRIDE4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_OVERRIDE4_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_OVERRIDE4_ENABLE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_OVERRIDE4_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_POWER_POWER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<RADIO_POWER_POWER_Values, BaseType, 0U> ;
  using Enabled = FieldValue<RADIO_POWER_POWER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DAP0_DAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DAP1_DAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DAP2_DAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DAP3_DAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DAP4_DAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DAP5_DAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DAP6_DAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RADIO_DAP7_DAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RADIOENUMS_HPP)
