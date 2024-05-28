/* SPDX-License-Identifier: GPL-2.0 OR BSD-2-Clause */
/* X-SPDX-Copyright-Text: (c) Copyright 2019-2020 Xilinx, Inc. */
#ifndef	HOST_PROGMODEL_EF100_DEFS_H
#define	HOST_PROGMODEL_EF100_DEFS_H

/**************************************************************************
 *
 * This is a partially generated header file. To regenerate use:
 * [sfregistry/scripts]$ ./genheader ct_ef100
 *
 **************************************************************************
 */

/**************************************************************************
 *
 * EF100 host interface definitions
 *
 **************************************************************************
 */

/* HW_REV_ID_REG: Hardware revision info register */
#define	ER_GZ_HW_REV_ID 0x00000000

/* NIC_REV_ID: SoftNIC revision info register */
#define	ER_GZ_NIC_REV_ID 0x00000004

/* NIC_MAGIC: Signature register that should contain a well-known value */
#define	ER_GZ_NIC_MAGIC 0x00000008
#define	ERF_GZ_NIC_MAGIC_LBN 0
#define	ERF_GZ_NIC_MAGIC_WIDTH 32
#define	EFE_GZ_NIC_MAGIC_EXPECTED 0xEF100FCB

/* MC_SFT_STATUS: MC soft status */
#define	ER_GZ_MC_SFT_STATUS 0x00000010
#define	ER_GZ_MC_SFT_STATUS_STEP 4
#define	ER_GZ_MC_SFT_STATUS_ROWS 2

/* MC_DB_LWRD_REG: MC doorbell register, low word */
#define	ER_GZ_MC_DB_LWRD 0x00000020

/* MC_DB_HWRD_REG: MC doorbell register, high word */
#define	ER_GZ_MC_DB_HWRD 0x00000024

/* EVQ_INT_PRIME: Prime EVQ */
#define	ER_GZ_EVQ_INT_PRIME 0x00000040
#define	ERF_GZ_IDX_LBN 16
#define	ERF_GZ_IDX_WIDTH 16
#define	ERF_GZ_EVQ_ID_LBN 0
#define	ERF_GZ_EVQ_ID_WIDTH 16

/* INT_AGG_RING_PRIME: Prime interrupt aggregation ring. */
#define	ER_GZ_INT_AGG_RING_PRIME 0x00000048
/* defined as ERF_GZ_IDX_LBN 16; access=WO reset=0x0 */
/* defined as ERF_GZ_IDX_WIDTH 16 */
#define	ERF_GZ_RING_ID_LBN 0
#define	ERF_GZ_RING_ID_WIDTH 16

/* EVQ_TMR: EVQ timer control */
#define	ER_GZ_EVQ_TMR 0x00000104
#define	ER_GZ_EVQ_TMR_STEP 65536
#define	ER_GZ_EVQ_TMR_ROWS 1024

/* EVQ_UNSOL_CREDIT_GRANT_SEQ: Grant credits for unsolicited events. */
#define	ER_GZ_EVQ_UNSOL_CREDIT_GRANT_SEQ 0x00000108
#define	ER_GZ_EVQ_UNSOL_CREDIT_GRANT_SEQ_STEP 65536
#define	ER_GZ_EVQ_UNSOL_CREDIT_GRANT_SEQ_ROWS 1024

/* EVQ_DESC_CREDIT_GRANT_SEQ: Grant credits for descriptor proxy events. */
#define	ER_GZ_EVQ_DESC_CREDIT_GRANT_SEQ 0x00000110
#define	ER_GZ_EVQ_DESC_CREDIT_GRANT_SEQ_STEP 65536
#define	ER_GZ_EVQ_DESC_CREDIT_GRANT_SEQ_ROWS 1024

/* RX_RING_DOORBELL: Ring Rx doorbell. */
#define	ER_GZ_RX_RING_DOORBELL 0x00000180
#define	ER_GZ_RX_RING_DOORBELL_STEP 65536
#define	ER_GZ_RX_RING_DOORBELL_ROWS 1024
#define	ERF_GZ_RX_RING_PIDX_LBN 16
#define	ERF_GZ_RX_RING_PIDX_WIDTH 16

/* TX_RING_DOORBELL: Ring Tx doorbell. */
#define	ER_GZ_TX_RING_DOORBELL 0x00000200
#define	ER_GZ_TX_RING_DOORBELL_STEP 65536
#define	ER_GZ_TX_RING_DOORBELL_ROWS 1024
#define	ERF_GZ_TX_RING_PIDX_LBN 16
#define	ERF_GZ_TX_RING_PIDX_WIDTH 16

/* TX_DESC_PUSH: Tx ring descriptor push. Reserved for future use. */
#define	ER_GZ_TX_DESC_PUSH 0x00000210
#define	ER_GZ_TX_DESC_PUSH_STEP 65536
#define	ER_GZ_TX_DESC_PUSH_ROWS 1024

/* THE_TIME: NIC hardware time */
#define	ER_GZ_THE_TIME 0x00000280
#define	ER_GZ_THE_TIME_STEP 65536
#define	ER_GZ_THE_TIME_ROWS 1024
#define	ERF_GZ_THE_TIME_SECS_LBN 32
#define	ERF_GZ_THE_TIME_SECS_WIDTH 32
#define	ERF_GZ_THE_TIME_NANOS_LBN 2
#define	ERF_GZ_THE_TIME_NANOS_WIDTH 30
#define	ERF_GZ_THE_TIME_CLOCK_IN_SYNC_LBN 1
#define	ERF_GZ_THE_TIME_CLOCK_IN_SYNC_WIDTH 1
#define	ERF_GZ_THE_TIME_CLOCK_IS_SET_LBN 0
#define	ERF_GZ_THE_TIME_CLOCK_IS_SET_WIDTH 1

/* PARAMS_TLV_LEN: Size of design parameters area in bytes */
#define	ER_GZ_PARAMS_TLV_LEN 0x00000c00
#define	ER_GZ_PARAMS_TLV_LEN_STEP 65536
#define	ER_GZ_PARAMS_TLV_LEN_ROWS 1024

/* PARAMS_TLV: Design parameters */
#define	ER_GZ_PARAMS_TLV 0x00000c04
#define	ER_GZ_PARAMS_TLV_STEP 65536
#define	ER_GZ_PARAMS_TLV_ROWS 1024

/* EW_EMBEDDED_EVENT */
#define	ESF_GZ_EV_256_EVENT_LBN 0
#define	ESF_GZ_EV_256_EVENT_WIDTH 64
#define	ESE_GZ_EW_EMBEDDED_EVENT_STRUCT_SIZE 64

/* NMMU_PAGESZ_2M_ADDR */
#define	ESF_GZ_NMMU_2M_PAGE_SIZE_ID_LBN 59
#define	ESF_GZ_NMMU_2M_PAGE_SIZE_ID_WIDTH 5
#define	ESE_GZ_NMMU_PAGE_SIZE_2M 9
#define	ESF_GZ_NMMU_2M_PAGE_ID_LBN 21
#define	ESF_GZ_NMMU_2M_PAGE_ID_WIDTH 38
#define	ESF_GZ_NMMU_2M_PAGE_OFFSET_LBN 0
#define	ESF_GZ_NMMU_2M_PAGE_OFFSET_WIDTH 21
#define	ESE_GZ_NMMU_PAGESZ_2M_ADDR_STRUCT_SIZE 64

/* PARAM_TLV */
#define	ESF_GZ_TLV_VALUE_LBN 16
#define	ESF_GZ_TLV_VALUE_WIDTH 8
#define	ESE_GZ_TLV_VALUE_LENMIN 8
#define	ESE_GZ_TLV_VALUE_LENMAX 2040
#define	ESF_GZ_TLV_LEN_LBN 8
#define	ESF_GZ_TLV_LEN_WIDTH 8
#define	ESF_GZ_TLV_TYPE_LBN 0
#define	ESF_GZ_TLV_TYPE_WIDTH 8
#define	ESE_GZ_DP_NMMU_GROUP_SIZE 5
#define	ESE_GZ_DP_EVQ_UNSOL_CREDIT_SEQ_BITS 4
#define	ESE_GZ_DP_TX_EV_NUM_DESCS_BITS 3
#define	ESE_GZ_DP_RX_EV_NUM_PACKETS_BITS 2
#define	ESE_GZ_DP_PARTIAL_TSTAMP_SUB_NANO_BITS 1
#define	ESE_GZ_DP_PAD 0
#define	ESE_GZ_PARAM_TLV_STRUCT_SIZE 24

/* PCI_EXPRESS_XCAP_HDR */
#define	ESF_GZ_PCI_EXPRESS_XCAP_NEXT_LBN 20
#define	ESF_GZ_PCI_EXPRESS_XCAP_NEXT_WIDTH 12
#define	ESF_GZ_PCI_EXPRESS_XCAP_VER_LBN 16
#define	ESF_GZ_PCI_EXPRESS_XCAP_VER_WIDTH 4
#define	ESE_GZ_PCI_EXPRESS_XCAP_VER_VSEC 1
#define	ESF_GZ_PCI_EXPRESS_XCAP_ID_LBN 0
#define	ESF_GZ_PCI_EXPRESS_XCAP_ID_WIDTH 16
#define	ESE_GZ_PCI_EXPRESS_XCAP_ID_VNDR 0xb
#define	ESE_GZ_PCI_EXPRESS_XCAP_HDR_STRUCT_SIZE 32

/* RHEAD_BASE_EVENT */
#define	ESF_GZ_E_TYPE_LBN 60
#define	ESF_GZ_E_TYPE_WIDTH 4
#define	ESF_GZ_EV_EVQ_PHASE_LBN 59
#define	ESF_GZ_EV_EVQ_PHASE_WIDTH 1
#define	ESE_GZ_RHEAD_BASE_EVENT_STRUCT_SIZE 64

/* RHEAD_EW_EVENT */
#define	ESF_GZ_EV_256_EV32_PHASE_LBN 255
#define	ESF_GZ_EV_256_EV32_PHASE_WIDTH 1
#define	ESF_GZ_EV_256_EV32_TYPE_LBN 251
#define	ESF_GZ_EV_256_EV32_TYPE_WIDTH 4
#define	ESE_GZ_EF100_EVEW_VIRTQ_DESC 2
#define	ESE_GZ_EF100_EVEW_TXQ_DESC 1
#define	ESE_GZ_EF100_EVEW_64BIT 0
#define	ESE_GZ_RHEAD_EW_EVENT_STRUCT_SIZE 256

/* RX_DESC */
#define	ESF_GZ_RX_BUF_ADDR_LBN 0
#define	ESF_GZ_RX_BUF_ADDR_WIDTH 64
#define	ESE_GZ_RX_DESC_STRUCT_SIZE 64

/* TXQ_DESC_PROXY_EVENT */
#define	ESF_GZ_EV_TXQ_DP_VI_ID_LBN 128
#define	ESF_GZ_EV_TXQ_DP_VI_ID_WIDTH 16
#define	ESF_GZ_EV_TXQ_DP_TXQ_DESC_LBN 0
#define	ESF_GZ_EV_TXQ_DP_TXQ_DESC_WIDTH 128
#define	ESE_GZ_TXQ_DESC_PROXY_EVENT_STRUCT_SIZE 144

/* TX_DESC_TYPE */
#define	ESF_GZ_TX_DESC_TYPE_LBN 124
#define	ESF_GZ_TX_DESC_TYPE_WIDTH 4
#define	ESE_GZ_TX_DESC_TYPE_DESC2CMPT 7
#define	ESE_GZ_TX_DESC_TYPE_MEM2MEM 4
#define	ESE_GZ_TX_DESC_TYPE_SEG 3
#define	ESE_GZ_TX_DESC_TYPE_TSO 2
#define	ESE_GZ_TX_DESC_TYPE_PREFIX 1
#define	ESE_GZ_TX_DESC_TYPE_SEND 0
#define	ESE_GZ_TX_DESC_TYPE_STRUCT_SIZE 128

/* VIRTQ_DESC_PROXY_EVENT */
#define	ESF_GZ_EV_VQ_DP_AVAIL_ENTRY_LBN 144
#define	ESF_GZ_EV_VQ_DP_AVAIL_ENTRY_WIDTH 16
#define	ESF_GZ_EV_VQ_DP_VI_ID_LBN 128
#define	ESF_GZ_EV_VQ_DP_VI_ID_WIDTH 16
#define	ESF_GZ_EV_VQ_DP_VIRTQ_DESC_LBN 0
#define	ESF_GZ_EV_VQ_DP_VIRTQ_DESC_WIDTH 128
#define	ESE_GZ_VIRTQ_DESC_PROXY_EVENT_STRUCT_SIZE 160

/* XIL_CFGBAR_TBL_ENTRY */
#define	ESF_GZ_CFGBAR_CONT_CAP_OFF_HI_LBN 96
#define	ESF_GZ_CFGBAR_CONT_CAP_OFF_HI_WIDTH 32
#define	ESF_GZ_CFGBAR_CONT_CAP_OFFSET_LBN 68
#define	ESF_GZ_CFGBAR_CONT_CAP_OFFSET_WIDTH 60
#define	ESE_GZ_CONT_CAP_OFFSET_BYTES_SHIFT 4
#define	ESF_GZ_CFGBAR_EF100_FUNC_CTL_WIN_OFF_LBN 67
#define	ESF_GZ_CFGBAR_EF100_FUNC_CTL_WIN_OFF_WIDTH 29
#define	ESE_GZ_EF100_FUNC_CTL_WIN_OFF_SHIFT 4
#define	ESF_GZ_CFGBAR_CONT_CAP_OFF_LO_LBN 68
#define	ESF_GZ_CFGBAR_CONT_CAP_OFF_LO_WIDTH 28
#define	ESF_GZ_CFGBAR_CONT_CAP_RSV_LBN 67
#define	ESF_GZ_CFGBAR_CONT_CAP_RSV_WIDTH 1
#define	ESF_GZ_CFGBAR_EF100_BAR_LBN 64
#define	ESF_GZ_CFGBAR_EF100_BAR_WIDTH 3
#define	ESE_GZ_CFGBAR_EF100_BAR_NUM_INVALID 7
#define	ESE_GZ_CFGBAR_EF100_BAR_NUM_EXPANSION_ROM 6
#define	ESF_GZ_CFGBAR_CONT_CAP_BAR_LBN 64
#define	ESF_GZ_CFGBAR_CONT_CAP_BAR_WIDTH 3
#define	ESE_GZ_CFGBAR_CONT_CAP_BAR_NUM_INVALID 7
#define	ESE_GZ_CFGBAR_CONT_CAP_BAR_NUM_EXPANSION_ROM 6
#define	ESF_GZ_CFGBAR_ENTRY_SIZE_LBN 32
#define	ESF_GZ_CFGBAR_ENTRY_SIZE_WIDTH 32
#define	ESE_GZ_CFGBAR_ENTRY_SIZE_EF100 12
#define	ESE_GZ_CFGBAR_ENTRY_HEADER_SIZE 8
#define	ESF_GZ_CFGBAR_ENTRY_LAST_LBN 28
#define	ESF_GZ_CFGBAR_ENTRY_LAST_WIDTH 1
#define	ESF_GZ_CFGBAR_ENTRY_REV_LBN 20
#define	ESF_GZ_CFGBAR_ENTRY_REV_WIDTH 8
#define	ESE_GZ_CFGBAR_ENTRY_REV_EF100 0
#define	ESF_GZ_CFGBAR_ENTRY_FORMAT_LBN 0
#define	ESF_GZ_CFGBAR_ENTRY_FORMAT_WIDTH 20
#define	ESE_GZ_CFGBAR_ENTRY_LAST 0xfffff
#define	ESE_GZ_CFGBAR_ENTRY_CONT_CAP_ADDR 0xffffe
#define	ESE_GZ_CFGBAR_ENTRY_EF100 0xef100
#define	ESE_GZ_XIL_CFGBAR_TBL_ENTRY_STRUCT_SIZE 128

/* XIL_CFGBAR_VSEC */
#define	ESF_GZ_VSEC_TBL_OFF_HI_LBN 64
#define	ESF_GZ_VSEC_TBL_OFF_HI_WIDTH 32
#define	ESE_GZ_VSEC_TBL_OFF_HI_BYTES_SHIFT 32
#define	ESF_GZ_VSEC_TBL_OFF_LO_LBN 36
#define	ESF_GZ_VSEC_TBL_OFF_LO_WIDTH 28
#define	ESE_GZ_VSEC_TBL_OFF_LO_BYTES_SHIFT 4
#define	ESF_GZ_VSEC_TBL_BAR_LBN 32
#define	ESF_GZ_VSEC_TBL_BAR_WIDTH 4
#define	ESE_GZ_VSEC_BAR_NUM_INVALID 7
#define	ESE_GZ_VSEC_BAR_NUM_EXPANSION_ROM 6
#define	ESF_GZ_VSEC_LEN_LBN 20
#define	ESF_GZ_VSEC_LEN_WIDTH 12
#define	ESE_GZ_VSEC_LEN_HIGH_OFFT 16
#define	ESE_GZ_VSEC_LEN_MIN 12
#define	ESF_GZ_VSEC_VER_LBN 16
#define	ESF_GZ_VSEC_VER_WIDTH 4
#define	ESE_GZ_VSEC_VER_XIL_CFGBAR 0
#define	ESF_GZ_VSEC_ID_LBN 0
#define	ESF_GZ_VSEC_ID_WIDTH 16
#define	ESE_GZ_XILINX_VSEC_ID 0x20
#define	ESE_GZ_XIL_CFGBAR_VSEC_STRUCT_SIZE 96

/* rh_egres_hclass */
#define	ESF_GZ_RX_PREFIX_HCLASS_TUN_OUTER_L4_CSUM_LBN 15
#define	ESF_GZ_RX_PREFIX_HCLASS_TUN_OUTER_L4_CSUM_WIDTH 1
#define	ESF_GZ_RX_PREFIX_HCLASS_TUN_OUTER_L3_CLASS_LBN 13
#define	ESF_GZ_RX_PREFIX_HCLASS_TUN_OUTER_L3_CLASS_WIDTH 2
#define	ESF_GZ_RX_PREFIX_HCLASS_NT_OR_INNER_L4_CSUM_LBN 12
#define	ESF_GZ_RX_PREFIX_HCLASS_NT_OR_INNER_L4_CSUM_WIDTH 1
#define	ESF_GZ_RX_PREFIX_HCLASS_NT_OR_INNER_L4_CLASS_LBN 10
#define	ESF_GZ_RX_PREFIX_HCLASS_NT_OR_INNER_L4_CLASS_WIDTH 2
#define	ESF_GZ_RX_PREFIX_HCLASS_NT_OR_INNER_L3_CLASS_LBN 8
#define	ESF_GZ_RX_PREFIX_HCLASS_NT_OR_INNER_L3_CLASS_WIDTH 2
#define	ESF_GZ_RX_PREFIX_HCLASS_TUNNEL_CLASS_LBN 5
#define	ESF_GZ_RX_PREFIX_HCLASS_TUNNEL_CLASS_WIDTH 3
#define	ESF_GZ_RX_PREFIX_HCLASS_L2_N_VLAN_LBN 3
#define	ESF_GZ_RX_PREFIX_HCLASS_L2_N_VLAN_WIDTH 2
#define	ESF_GZ_RX_PREFIX_HCLASS_L2_CLASS_LBN 2
#define	ESF_GZ_RX_PREFIX_HCLASS_L2_CLASS_WIDTH 1
#define	ESF_GZ_RX_PREFIX_HCLASS_L2_STATUS_LBN 0
#define	ESF_GZ_RX_PREFIX_HCLASS_L2_STATUS_WIDTH 2
#define	ESE_GZ_RH_EGRES_HCLASS_STRUCT_SIZE 16

/* sf_driver */
#define	ESF_GZ_DRIVER_E_TYPE_LBN 60
#define	ESF_GZ_DRIVER_E_TYPE_WIDTH 4
#define	ESF_GZ_DRIVER_PHASE_LBN 59
#define	ESF_GZ_DRIVER_PHASE_WIDTH 1
#define	ESF_GZ_DRIVER_DATA_LBN 0
#define	ESF_GZ_DRIVER_DATA_WIDTH 59
#define	ESE_GZ_SF_DRIVER_STRUCT_SIZE 64

/* sf_ev_rsvd */
#define	ESF_GZ_EV_RSVD_TBD_NEXT_LBN 34
#define	ESF_GZ_EV_RSVD_TBD_NEXT_WIDTH 3
#define	ESF_GZ_EV_RSVD_EVENT_GEN_FLAGS_LBN 30
#define	ESF_GZ_EV_RSVD_EVENT_GEN_FLAGS_WIDTH 4
#define	ESF_GZ_EV_RSVD_SRC_QID_LBN 18
#define	ESF_GZ_EV_RSVD_SRC_QID_WIDTH 12
#define	ESF_GZ_EV_RSVD_SEQ_NUM_LBN 2
#define	ESF_GZ_EV_RSVD_SEQ_NUM_WIDTH 16
#define	ESF_GZ_EV_RSVD_TBD_LBN 0
#define	ESF_GZ_EV_RSVD_TBD_WIDTH 2
#define	ESE_GZ_SF_EV_RSVD_STRUCT_SIZE 37

/* sf_flush_evnt */
#define	ESF_GZ_EV_FLSH_E_TYPE_LBN 60
#define	ESF_GZ_EV_FLSH_E_TYPE_WIDTH 4
#define	ESF_GZ_EV_FLSH_PHASE_LBN 59
#define	ESF_GZ_EV_FLSH_PHASE_WIDTH 1
#define	ESF_GZ_EV_FLSH_SUB_TYPE_LBN 53
#define	ESF_GZ_EV_FLSH_SUB_TYPE_WIDTH 6
#define	ESF_GZ_EV_FLSH_RSVD_LBN 10
#define	ESF_GZ_EV_FLSH_RSVD_WIDTH 43
#define	ESF_GZ_EV_FLSH_LABEL_LBN 4
#define	ESF_GZ_EV_FLSH_LABEL_WIDTH 6
#define	ESF_GZ_EV_FLSH_FLUSH_TYPE_LBN 0
#define	ESF_GZ_EV_FLSH_FLUSH_TYPE_WIDTH 4
#define	ESE_GZ_SF_FLUSH_EVNT_STRUCT_SIZE 64

/* sf_rx_pkts */
#define	ESF_GZ_EV_RXPKTS_E_TYPE_LBN 60
#define	ESF_GZ_EV_RXPKTS_E_TYPE_WIDTH 4
#define	ESF_GZ_EV_RXPKTS_PHASE_LBN 59
#define	ESF_GZ_EV_RXPKTS_PHASE_WIDTH 1
#define	ESF_GZ_EV_RXPKTS_RSVD_LBN 22
#define	ESF_GZ_EV_RXPKTS_RSVD_WIDTH 37
#define	ESF_GZ_EV_RXPKTS_Q_LABEL_LBN 16
#define	ESF_GZ_EV_RXPKTS_Q_LABEL_WIDTH 6
#define	ESF_GZ_EV_RXPKTS_NUM_PKT_LBN 0
#define	ESF_GZ_EV_RXPKTS_NUM_PKT_WIDTH 16
#define	ESE_GZ_SF_RX_PKTS_STRUCT_SIZE 64

/* sf_rx_prefix */
#define	ESF_GZ_RX_PREFIX_VLAN_STRIP_TCI_LBN 160
#define	ESF_GZ_RX_PREFIX_VLAN_STRIP_TCI_WIDTH 16
#define	ESF_GZ_RX_PREFIX_CSUM_FRAME_LBN 144
#define	ESF_GZ_RX_PREFIX_CSUM_FRAME_WIDTH 16
#define	ESF_GZ_RX_PREFIX_INGRESS_MPORT_LBN 128
#define	ESF_GZ_RX_PREFIX_INGRESS_MPORT_WIDTH 16
#define	ESF_GZ_RX_PREFIX_USER_MARK_LBN 96
#define	ESF_GZ_RX_PREFIX_USER_MARK_WIDTH 32
#define	ESF_GZ_RX_PREFIX_RSS_HASH_LBN 64
#define	ESF_GZ_RX_PREFIX_RSS_HASH_WIDTH 32
#define	ESF_GZ_RX_PREFIX_PARTIAL_TSTAMP_LBN 34
#define	ESF_GZ_RX_PREFIX_PARTIAL_TSTAMP_WIDTH 30
#define	ESF_GZ_RX_PREFIX_VSWITCH_STATUS_LBN 33
#define	ESF_GZ_RX_PREFIX_VSWITCH_STATUS_WIDTH 1
#define	ESF_GZ_RX_PREFIX_VLAN_STRIPPED_LBN 32
#define	ESF_GZ_RX_PREFIX_VLAN_STRIPPED_WIDTH 1
#define	ESF_GZ_RX_PREFIX_CLASS_LBN 16
#define	ESF_GZ_RX_PREFIX_CLASS_WIDTH 16
#define	ESF_GZ_RX_PREFIX_USER_FLAG_LBN 15
#define	ESF_GZ_RX_PREFIX_USER_FLAG_WIDTH 1
#define	ESF_GZ_RX_PREFIX_RSS_HASH_VALID_LBN 14
#define	ESF_GZ_RX_PREFIX_RSS_HASH_VALID_WIDTH 1
#define	ESF_GZ_RX_PREFIX_LENGTH_LBN 0
#define	ESF_GZ_RX_PREFIX_LENGTH_WIDTH 14
#define	ESE_GZ_SF_RX_PREFIX_STRUCT_SIZE 176

/* sf_rxtx_generic */
#define	ESF_GZ_EV_BARRIER_LBN 167
#define	ESF_GZ_EV_BARRIER_WIDTH 1
#define	ESF_GZ_EV_RSVD_LBN 130
#define	ESF_GZ_EV_RSVD_WIDTH 37
#define	ESF_GZ_EV_DPRXY_LBN 129
#define	ESF_GZ_EV_DPRXY_WIDTH 1
#define	ESF_GZ_EV_VIRTIO_LBN 128
#define	ESF_GZ_EV_VIRTIO_WIDTH 1
#define	ESF_GZ_EV_COUNT_LBN 0
#define	ESF_GZ_EV_COUNT_WIDTH 128
#define	ESE_GZ_SF_RXTX_GENERIC_STRUCT_SIZE 168

/* sf_ts_stamp */
#define	ESF_GZ_EV_TS_E_TYPE_LBN 60
#define	ESF_GZ_EV_TS_E_TYPE_WIDTH 4
#define	ESF_GZ_EV_TS_PHASE_LBN 59
#define	ESF_GZ_EV_TS_PHASE_WIDTH 1
#define	ESF_GZ_EV_TS_RSVD_LBN 56
#define	ESF_GZ_EV_TS_RSVD_WIDTH 3
#define	ESF_GZ_EV_TS_STATUS_LBN 54
#define	ESF_GZ_EV_TS_STATUS_WIDTH 2
#define	ESF_GZ_EV_TS_Q_LABEL_LBN 48
#define	ESF_GZ_EV_TS_Q_LABEL_WIDTH 6
#define	ESF_GZ_EV_TS_DESC_ID_LBN 32
#define	ESF_GZ_EV_TS_DESC_ID_WIDTH 16
#define	ESF_GZ_EV_TS_PARTIAL_STAMP_LBN 0
#define	ESF_GZ_EV_TS_PARTIAL_STAMP_WIDTH 32
#define	ESE_GZ_SF_TS_STAMP_STRUCT_SIZE 64

/* sf_tx_cmplt */
#define	ESF_GZ_EV_TXCMPL_E_TYPE_LBN 60
#define	ESF_GZ_EV_TXCMPL_E_TYPE_WIDTH 4
#define	ESF_GZ_EV_TXCMPL_PHASE_LBN 59
#define	ESF_GZ_EV_TXCMPL_PHASE_WIDTH 1
#define	ESF_GZ_EV_TXCMPL_RSVD_LBN 22
#define	ESF_GZ_EV_TXCMPL_RSVD_WIDTH 37
#define	ESF_GZ_EV_TXCMPL_Q_LABEL_LBN 16
#define	ESF_GZ_EV_TXCMPL_Q_LABEL_WIDTH 6
#define	ESF_GZ_EV_TXCMPL_NUM_DESC_LBN 0
#define	ESF_GZ_EV_TXCMPL_NUM_DESC_WIDTH 16
#define	ESE_GZ_SF_TX_CMPLT_STRUCT_SIZE 64

/* sf_tx_desc2cmpt_dsc_fmt */
#define	ESF_GZ_D2C_TGT_VI_ID_LBN 108
#define	ESF_GZ_D2C_TGT_VI_ID_WIDTH 16
#define	ESF_GZ_D2C_CMPT2_LBN 107
#define	ESF_GZ_D2C_CMPT2_WIDTH 1
#define	ESF_GZ_D2C_ABS_VI_ID_LBN 106
#define	ESF_GZ_D2C_ABS_VI_ID_WIDTH 1
#define	ESF_GZ_D2C_ORDERED_LBN 105
#define	ESF_GZ_D2C_ORDERED_WIDTH 1
#define	ESF_GZ_D2C_SKIP_N_LBN 97
#define	ESF_GZ_D2C_SKIP_N_WIDTH 8
#define	ESF_GZ_D2C_RSVD_LBN 64
#define	ESF_GZ_D2C_RSVD_WIDTH 33
#define	ESF_GZ_D2C_COMPLETION_LBN 0
#define	ESF_GZ_D2C_COMPLETION_WIDTH 64
#define	ESE_GZ_SF_TX_DESC2CMPT_DSC_FMT_STRUCT_SIZE 124

/* sf_tx_mem2mem_dsc_fmt */
#define	ESF_GZ_M2M_ADDR_SPC_EN_LBN 123
#define	ESF_GZ_M2M_ADDR_SPC_EN_WIDTH 1
#define	ESF_GZ_M2M_TRANSLATE_ADDR_LBN 122
#define	ESF_GZ_M2M_TRANSLATE_ADDR_WIDTH 1
#define	ESF_GZ_M2M_RSVD_LBN 120
#define	ESF_GZ_M2M_RSVD_WIDTH 2
#define	ESF_GZ_M2M_ADDR_SPC_ID_LBN 84
#define	ESF_GZ_M2M_ADDR_SPC_ID_WIDTH 36
#define	ESF_GZ_M2M_LEN_MINUS_1_LBN 64
#define	ESF_GZ_M2M_LEN_MINUS_1_WIDTH 20
#define	ESF_GZ_M2M_ADDR_LBN 0
#define	ESF_GZ_M2M_ADDR_WIDTH 64
#define	ESE_GZ_SF_TX_MEM2MEM_DSC_FMT_STRUCT_SIZE 124

/* sf_tx_ovr_dsc_fmt */
#define	ESF_GZ_TX_PREFIX_MARK_EN_LBN 123
#define	ESF_GZ_TX_PREFIX_MARK_EN_WIDTH 1
#define	ESF_GZ_TX_PREFIX_INGRESS_MPORT_EN_LBN 122
#define	ESF_GZ_TX_PREFIX_INGRESS_MPORT_EN_WIDTH 1
#define	ESF_GZ_TX_PREFIX_INLINE_CAPSULE_META_LBN 121
#define	ESF_GZ_TX_PREFIX_INLINE_CAPSULE_META_WIDTH 1
#define	ESF_GZ_TX_PREFIX_EGRESS_MPORT_EN_LBN 120
#define	ESF_GZ_TX_PREFIX_EGRESS_MPORT_EN_WIDTH 1
#define	ESF_GZ_TX_PREFIX_RSRVD_LBN 64
#define	ESF_GZ_TX_PREFIX_RSRVD_WIDTH 56
#define	ESF_GZ_TX_PREFIX_EGRESS_MPORT_LBN 48
#define	ESF_GZ_TX_PREFIX_EGRESS_MPORT_WIDTH 16
#define	ESF_GZ_TX_PREFIX_INGRESS_MPORT_LBN 32
#define	ESF_GZ_TX_PREFIX_INGRESS_MPORT_WIDTH 16
#define	ESF_GZ_TX_PREFIX_MARK_LBN 0
#define	ESF_GZ_TX_PREFIX_MARK_WIDTH 32
#define	ESE_GZ_SF_TX_OVR_DSC_FMT_STRUCT_SIZE 124

/* sf_tx_seg_dsc_fmt */
#define	ESF_GZ_TX_SEG_ADDR_SPC_EN_LBN 123
#define	ESF_GZ_TX_SEG_ADDR_SPC_EN_WIDTH 1
#define	ESF_GZ_TX_SEG_TRANSLATE_ADDR_LBN 122
#define	ESF_GZ_TX_SEG_TRANSLATE_ADDR_WIDTH 1
#define	ESF_GZ_TX_SEG_RSVD2_LBN 120
#define	ESF_GZ_TX_SEG_RSVD2_WIDTH 2
#define	ESF_GZ_TX_SEG_ADDR_SPC_ID_LBN 84
#define	ESF_GZ_TX_SEG_ADDR_SPC_ID_WIDTH 36
#define	ESF_GZ_TX_SEG_RSVD_LBN 80
#define	ESF_GZ_TX_SEG_RSVD_WIDTH 4
#define	ESF_GZ_TX_SEG_LEN_LBN 64
#define	ESF_GZ_TX_SEG_LEN_WIDTH 16
#define	ESF_GZ_TX_SEG_ADDR_LBN 0
#define	ESF_GZ_TX_SEG_ADDR_WIDTH 64
#define	ESE_GZ_SF_TX_SEG_DSC_FMT_STRUCT_SIZE 124

/* sf_tx_std_dsc_fmt */
#define	ESF_GZ_TX_SEND_VLAN_INSERT_TCI_LBN 108
#define	ESF_GZ_TX_SEND_VLAN_INSERT_TCI_WIDTH 16
#define	ESF_GZ_TX_SEND_VLAN_INSERT_EN_LBN 107
#define	ESF_GZ_TX_SEND_VLAN_INSERT_EN_WIDTH 1
#define	ESF_GZ_TX_SEND_TSTAMP_REQ_LBN 106
#define	ESF_GZ_TX_SEND_TSTAMP_REQ_WIDTH 1
#define	ESF_GZ_TX_SEND_CSO_OUTER_L4_LBN 105
#define	ESF_GZ_TX_SEND_CSO_OUTER_L4_WIDTH 1
#define	ESF_GZ_TX_SEND_CSO_OUTER_L3_LBN 104
#define	ESF_GZ_TX_SEND_CSO_OUTER_L3_WIDTH 1
#define	ESF_GZ_TX_SEND_CSO_INNER_L3_LBN 101
#define	ESF_GZ_TX_SEND_CSO_INNER_L3_WIDTH 3
#define	ESF_GZ_TX_SEND_RSVD_LBN 99
#define	ESF_GZ_TX_SEND_RSVD_WIDTH 2
#define	ESF_GZ_TX_SEND_CSO_PARTIAL_EN_LBN 97
#define	ESF_GZ_TX_SEND_CSO_PARTIAL_EN_WIDTH 2
#define	ESF_GZ_TX_SEND_CSO_PARTIAL_CSUM_W_LBN 92
#define	ESF_GZ_TX_SEND_CSO_PARTIAL_CSUM_W_WIDTH 5
#define	ESF_GZ_TX_SEND_CSO_PARTIAL_START_W_LBN 83
#define	ESF_GZ_TX_SEND_CSO_PARTIAL_START_W_WIDTH 9
#define	ESF_GZ_TX_SEND_NUM_SEGS_LBN 78
#define	ESF_GZ_TX_SEND_NUM_SEGS_WIDTH 5
#define	ESF_GZ_TX_SEND_LEN_LBN 64
#define	ESF_GZ_TX_SEND_LEN_WIDTH 14
#define	ESF_GZ_TX_SEND_ADDR_LBN 0
#define	ESF_GZ_TX_SEND_ADDR_WIDTH 64
#define	ESE_GZ_SF_TX_STD_DSC_FMT_STRUCT_SIZE 124

/* sf_tx_tso_dsc_fmt */
#define	ESF_GZ_TX_TSO_VLAN_INSERT_TCI_LBN 108
#define	ESF_GZ_TX_TSO_VLAN_INSERT_TCI_WIDTH 16
#define	ESF_GZ_TX_TSO_VLAN_INSERT_EN_LBN 107
#define	ESF_GZ_TX_TSO_VLAN_INSERT_EN_WIDTH 1
#define	ESF_GZ_TX_TSO_TSTAMP_REQ_LBN 106
#define	ESF_GZ_TX_TSO_TSTAMP_REQ_WIDTH 1
#define	ESF_GZ_TX_TSO_CSO_OUTER_L4_LBN 105
#define	ESF_GZ_TX_TSO_CSO_OUTER_L4_WIDTH 1
#define	ESF_GZ_TX_TSO_CSO_OUTER_L3_LBN 104
#define	ESF_GZ_TX_TSO_CSO_OUTER_L3_WIDTH 1
#define	ESF_GZ_TX_TSO_CSO_INNER_L3_LBN 101
#define	ESF_GZ_TX_TSO_CSO_INNER_L3_WIDTH 3
#define	ESF_GZ_TX_TSO_RSVD_LBN 94
#define	ESF_GZ_TX_TSO_RSVD_WIDTH 7
#define	ESF_GZ_TX_TSO_CSO_INNER_L4_LBN 93
#define	ESF_GZ_TX_TSO_CSO_INNER_L4_WIDTH 1
#define	ESF_GZ_TX_TSO_INNER_L4_OFF_W_LBN 85
#define	ESF_GZ_TX_TSO_INNER_L4_OFF_W_WIDTH 8
#define	ESF_GZ_TX_TSO_INNER_L3_OFF_W_LBN 77
#define	ESF_GZ_TX_TSO_INNER_L3_OFF_W_WIDTH 8
#define	ESF_GZ_TX_TSO_OUTER_L4_OFF_W_LBN 69
#define	ESF_GZ_TX_TSO_OUTER_L4_OFF_W_WIDTH 8
#define	ESF_GZ_TX_TSO_OUTER_L3_OFF_W_LBN 64
#define	ESF_GZ_TX_TSO_OUTER_L3_OFF_W_WIDTH 5
#define	ESF_GZ_TX_TSO_PAYLOAD_LEN_LBN 42
#define	ESF_GZ_TX_TSO_PAYLOAD_LEN_WIDTH 22
#define	ESF_GZ_TX_TSO_HDR_LEN_W_LBN 34
#define	ESF_GZ_TX_TSO_HDR_LEN_W_WIDTH 8
#define	ESF_GZ_TX_TSO_ED_OUTER_UDP_LEN_LBN 33
#define	ESF_GZ_TX_TSO_ED_OUTER_UDP_LEN_WIDTH 1
#define	ESF_GZ_TX_TSO_ED_INNER_IP_LEN_LBN 32
#define	ESF_GZ_TX_TSO_ED_INNER_IP_LEN_WIDTH 1
#define	ESF_GZ_TX_TSO_ED_OUTER_IP_LEN_LBN 31
#define	ESF_GZ_TX_TSO_ED_OUTER_IP_LEN_WIDTH 1
#define	ESF_GZ_TX_TSO_ED_INNER_IP4_ID_LBN 29
#define	ESF_GZ_TX_TSO_ED_INNER_IP4_ID_WIDTH 2
#define	ESF_GZ_TX_TSO_ED_OUTER_IP4_ID_LBN 27
#define	ESF_GZ_TX_TSO_ED_OUTER_IP4_ID_WIDTH 2
#define	ESF_GZ_TX_TSO_PAYLOAD_NUM_SEGS_LBN 17
#define	ESF_GZ_TX_TSO_PAYLOAD_NUM_SEGS_WIDTH 10
#define	ESF_GZ_TX_TSO_HDR_NUM_SEGS_LBN 14
#define	ESF_GZ_TX_TSO_HDR_NUM_SEGS_WIDTH 3
#define	ESF_GZ_TX_TSO_MSS_LBN 0
#define	ESF_GZ_TX_TSO_MSS_WIDTH 14
#define	ESE_GZ_SF_TX_TSO_DSC_FMT_STRUCT_SIZE 124


/* Enum D2VIO_MSG_OP */
#define	ESE_GZ_QUE_JBDNE 3
#define	ESE_GZ_QUE_EVICT 2
#define	ESE_GZ_QUE_EMPTY 1
#define	ESE_GZ_NOP 0

/* Enum DESIGN_PARAMS */
#define	ESE_EF100_DP_GZ_RX_MAX_RUNT 17
#define	ESE_EF100_DP_GZ_VI_STRIDES 16
#define	ESE_EF100_DP_GZ_NMMU_PAGE_SIZES 15
#define	ESE_EF100_DP_GZ_EVQ_TIMER_TICK_NANOS 14
#define	ESE_EF100_DP_GZ_MEM2MEM_MAX_LEN 13
#define	ESE_EF100_DP_GZ_COMPAT 12
#define	ESE_EF100_DP_GZ_TSO_MAX_NUM_FRAMES 11
#define	ESE_EF100_DP_GZ_TSO_MAX_PAYLOAD_NUM_SEGS 10
#define	ESE_EF100_DP_GZ_TSO_MAX_PAYLOAD_LEN 9
#define	ESE_EF100_DP_GZ_TXQ_SIZE_GRANULARITY 8
#define	ESE_EF100_DP_GZ_RXQ_SIZE_GRANULARITY 7
#define	ESE_EF100_DP_GZ_TSO_MAX_HDR_NUM_SEGS 6
#define	ESE_EF100_DP_GZ_TSO_MAX_HDR_LEN 5
#define	ESE_EF100_DP_GZ_RX_L4_CSUM_PROTOCOLS 4
#define	ESE_EF100_DP_GZ_NMMU_GROUP_SIZE 3
#define	ESE_EF100_DP_GZ_EVQ_UNSOL_CREDIT_SEQ_BITS 2
#define	ESE_EF100_DP_GZ_PARTIAL_TSTAMP_SUB_NANO_BITS 1
#define	ESE_EF100_DP_GZ_PAD 0

/* Enum DESIGN_PARAM_DEFAULTS */
#define	ESE_EF100_DP_GZ_TSO_MAX_PAYLOAD_LEN_DEFAULT 0x3fffff
#define	ESE_EF100_DP_GZ_TSO_MAX_NUM_FRAMES_DEFAULT 8192
#define	ESE_EF100_DP_GZ_MEM2MEM_MAX_LEN_DEFAULT 8192
#define	ESE_EF100_DP_GZ_RX_L4_CSUM_PROTOCOLS_DEFAULT 0x1106
#define	ESE_EF100_DP_GZ_TSO_MAX_PAYLOAD_NUM_SEGS_DEFAULT 0x3ff
#define	ESE_EF100_DP_GZ_RX_MAX_RUNT_DEFAULT 640
#define	ESE_EF100_DP_GZ_EVQ_TIMER_TICK_NANOS_DEFAULT 512
#define	ESE_EF100_DP_GZ_NMMU_PAGE_SIZES_DEFAULT 512
#define	ESE_EF100_DP_GZ_TSO_MAX_HDR_LEN_DEFAULT 192
#define	ESE_EF100_DP_GZ_RXQ_SIZE_GRANULARITY_DEFAULT 64
#define	ESE_EF100_DP_GZ_TXQ_SIZE_GRANULARITY_DEFAULT 64
#define	ESE_EF100_DP_GZ_NMMU_GROUP_SIZE_DEFAULT 32
#define	ESE_EF100_DP_GZ_VI_STRIDES_DEFAULT 16
#define	ESE_EF100_DP_GZ_EVQ_UNSOL_CREDIT_SEQ_BITS_DEFAULT 7
#define	ESE_EF100_DP_GZ_TSO_MAX_HDR_NUM_SEGS_DEFAULT 4
#define	ESE_EF100_DP_GZ_PARTIAL_TSTAMP_SUB_NANO_BITS_DEFAULT 2
#define	ESE_EF100_DP_GZ_COMPAT_DEFAULT 0

/* Enum HOST_IF_CONSTANTS */
#define	ESE_GZ_FCW_LEN 0x4C
#define	ESE_GZ_RX_PKT_PREFIX_LEN 22

/* Enum PCI_CONSTANTS */
#define	ESE_GZ_PCI_BASE_CONFIG_SPACE_SIZE 256
#define	ESE_GZ_PCI_EXPRESS_XCAP_HDR_SIZE 4

/* Enum RH_DSC_TYPE */
#define	ESE_GZ_TX_TOMB 0xF
#define	ESE_GZ_TX_VIO 0xE
#define	ESE_GZ_TX_TSO_OVRRD 0x8
#define	ESE_GZ_TX_D2CMP 0x7
#define	ESE_GZ_TX_DATA 0x6
#define	ESE_GZ_TX_D2M 0x5
#define	ESE_GZ_TX_M2M 0x4
#define	ESE_GZ_TX_SEG 0x3
#define	ESE_GZ_TX_TSO 0x2
#define	ESE_GZ_TX_OVRRD 0x1
#define	ESE_GZ_TX_SEND 0x0

/* Enum RH_HCLASS_L2_CLASS */
#define	ESE_GZ_RH_HCLASS_L2_CLASS_E2_0123VLAN 1
#define	ESE_GZ_RH_HCLASS_L2_CLASS_OTHER 0

/* Enum RH_HCLASS_L2_STATUS */
#define	ESE_GZ_RH_HCLASS_L2_STATUS_RESERVED 3
#define	ESE_GZ_RH_HCLASS_L2_STATUS_FCS_ERR 2
#define	ESE_GZ_RH_HCLASS_L2_STATUS_LEN_ERR 1
#define	ESE_GZ_RH_HCLASS_L2_STATUS_OK 0

/* Enum RH_HCLASS_L3_CLASS */
#define	ESE_GZ_RH_HCLASS_L3_CLASS_OTHER 3
#define	ESE_GZ_RH_HCLASS_L3_CLASS_IP6 2
#define	ESE_GZ_RH_HCLASS_L3_CLASS_IP4BAD 1
#define	ESE_GZ_RH_HCLASS_L3_CLASS_IP4GOOD 0

/* Enum RH_HCLASS_L4_CLASS */
#define	ESE_GZ_RH_HCLASS_L4_CLASS_OTHER 3
#define	ESE_GZ_RH_HCLASS_L4_CLASS_FRAG 2
#define	ESE_GZ_RH_HCLASS_L4_CLASS_UDP 1
#define	ESE_GZ_RH_HCLASS_L4_CLASS_TCP 0

/* Enum RH_HCLASS_L4_CSUM */
#define	ESE_GZ_RH_HCLASS_L4_CSUM_GOOD 1
#define	ESE_GZ_RH_HCLASS_L4_CSUM_BAD_OR_UNKNOWN 0

/* Enum RH_HCLASS_TUNNEL_CLASS */
#define	ESE_GZ_RH_HCLASS_TUNNEL_CLASS_RESERVED_7 7
#define	ESE_GZ_RH_HCLASS_TUNNEL_CLASS_RESERVED_6 6
#define	ESE_GZ_RH_HCLASS_TUNNEL_CLASS_RESERVED_5 5
#define	ESE_GZ_RH_HCLASS_TUNNEL_CLASS_RESERVED_4 4
#define	ESE_GZ_RH_HCLASS_TUNNEL_CLASS_GENEVE 3
#define	ESE_GZ_RH_HCLASS_TUNNEL_CLASS_NVGRE 2
#define	ESE_GZ_RH_HCLASS_TUNNEL_CLASS_VXLAN 1
#define	ESE_GZ_RH_HCLASS_TUNNEL_CLASS_NONE 0

/* Enum SF_CTL_EVENT_SUBTYPE */
#define	ESE_GZ_EF100_CTL_EV_EVQ_TIMEOUT 0x3
#define	ESE_GZ_EF100_CTL_EV_FLUSH 0x2
#define	ESE_GZ_EF100_CTL_EV_TIME_SYNC 0x1
#define	ESE_GZ_EF100_CTL_EV_UNSOL_OVERFLOW 0x0

/* Enum SF_EVENT_TYPE */
#define	ESE_GZ_EF100_EV_DRIVER 0x5
#define	ESE_GZ_EF100_EV_MCDI 0x4
#define	ESE_GZ_EF100_EV_CONTROL 0x3
#define	ESE_GZ_EF100_EV_TX_TIMESTAMP 0x2
#define	ESE_GZ_EF100_EV_TX_COMPLETION 0x1
#define	ESE_GZ_EF100_EV_RX_PKTS 0x0

/* Enum SF_EW_EVENT_TYPE */
#define	ESE_GZ_EF100_EWEV_VIRTQ_DESC 0x2
#define	ESE_GZ_EF100_EWEV_TXQ_DESC 0x1
#define	ESE_GZ_EF100_EWEV_64BIT 0x0

/* Enum TX_DESC_CSO_PARTIAL_EN */
#define	ESE_GZ_TX_DESC_CSO_PARTIAL_EN_TCP 2
#define	ESE_GZ_TX_DESC_CSO_PARTIAL_EN_UDP 1
#define	ESE_GZ_TX_DESC_CSO_PARTIAL_EN_OFF 0

/* Enum TX_DESC_CS_INNER_L3 */
#define	ESE_GZ_TX_DESC_CS_INNER_L3_GENEVE 3
#define	ESE_GZ_TX_DESC_CS_INNER_L3_NVGRE 2
#define	ESE_GZ_TX_DESC_CS_INNER_L3_VXLAN 1
#define	ESE_GZ_TX_DESC_CS_INNER_L3_OFF 0

/* Enum TX_DESC_IP4_ID */
#define	ESE_GZ_TX_DESC_IP4_ID_INC_MOD16 2
#define	ESE_GZ_TX_DESC_IP4_ID_INC_MOD15 1
#define	ESE_GZ_TX_DESC_IP4_ID_NO_OP 0

/* Enum VIRTIO_NET_HDR_F */
#define	ESE_GZ_NEEDS_CSUM 0x1

/* Enum VIRTIO_NET_HDR_GSO */
#define	ESE_GZ_TCPV6 0x4
#define	ESE_GZ_UDP 0x3
#define	ESE_GZ_TCPV4 0x1
#define	ESE_GZ_NONE 0x0
/**************************************************************************/

/* Add manual definitions here to have genheader preserve them. */

/* task84994: add Riverhead event debug fields */
#define	ESF_GZ_EV_DEBUG_EVENT_GEN_FLAGS_LBN 44
#define	ESF_GZ_EV_DEBUG_EVENT_GEN_FLAGS_WIDTH 4
#define	ESF_GZ_EV_DEBUG_SRC_QID_LBN 32
#define	ESF_GZ_EV_DEBUG_SRC_QID_WIDTH 12
#define	ESF_GZ_EV_DEBUG_SEQ_NUM_LBN 16
#define	ESF_GZ_EV_DEBUG_SEQ_NUM_WIDTH 16

/* task86137: autodocs from RTL don't include this yet. SF-119689-TC-M, p19. */
#define ESF_GZ_CSUM_FRAME_OFFSET 14

#endif /* HOST_PROGMODEL_EF100_DEFS_H */