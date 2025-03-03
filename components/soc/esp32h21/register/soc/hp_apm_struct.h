/**
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/** Group: Region filter enable register */
/** Type of apm_region_filter_en register
 *  Region filter enable register
 */
typedef union {
    struct {
        /** apm_region_filter_en : R/W; bitpos: [15:0]; default: 1;
         *  Region filter enable
         */
        uint32_t apm_region_filter_en:16;
        uint32_t reserved_16:16;
    };
    uint32_t val;
} hp_apm_region_filter_en_reg_t;


/** Group: Region address register */
/** Type of apm_region0_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region0_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region0
         */
        uint32_t apm_region0_addr_start:32;
    };
    uint32_t val;
} hp_apm_region0_addr_start_reg_t;

/** Type of apm_region0_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region0_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region0
         */
        uint32_t apm_region0_addr_end:32;
    };
    uint32_t val;
} hp_apm_region0_addr_end_reg_t;

/** Type of apm_region1_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region1_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region1
         */
        uint32_t apm_region1_addr_start:32;
    };
    uint32_t val;
} hp_apm_region1_addr_start_reg_t;

/** Type of apm_region1_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region1_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region1
         */
        uint32_t apm_region1_addr_end:32;
    };
    uint32_t val;
} hp_apm_region1_addr_end_reg_t;

/** Type of apm_region2_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region2_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region2
         */
        uint32_t apm_region2_addr_start:32;
    };
    uint32_t val;
} hp_apm_region2_addr_start_reg_t;

/** Type of apm_region2_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region2_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region2
         */
        uint32_t apm_region2_addr_end:32;
    };
    uint32_t val;
} hp_apm_region2_addr_end_reg_t;

/** Type of apm_region3_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region3_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region3
         */
        uint32_t apm_region3_addr_start:32;
    };
    uint32_t val;
} hp_apm_region3_addr_start_reg_t;

/** Type of apm_region3_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region3_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region3
         */
        uint32_t apm_region3_addr_end:32;
    };
    uint32_t val;
} hp_apm_region3_addr_end_reg_t;

/** Type of apm_region4_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region4_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region4
         */
        uint32_t apm_region4_addr_start:32;
    };
    uint32_t val;
} hp_apm_region4_addr_start_reg_t;

/** Type of apm_region4_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region4_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region4
         */
        uint32_t apm_region4_addr_end:32;
    };
    uint32_t val;
} hp_apm_region4_addr_end_reg_t;

/** Type of apm_region5_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region5_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region5
         */
        uint32_t apm_region5_addr_start:32;
    };
    uint32_t val;
} hp_apm_region5_addr_start_reg_t;

/** Type of apm_region5_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region5_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region5
         */
        uint32_t apm_region5_addr_end:32;
    };
    uint32_t val;
} hp_apm_region5_addr_end_reg_t;

/** Type of apm_region6_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region6_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region6
         */
        uint32_t apm_region6_addr_start:32;
    };
    uint32_t val;
} hp_apm_region6_addr_start_reg_t;

/** Type of apm_region6_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region6_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region6
         */
        uint32_t apm_region6_addr_end:32;
    };
    uint32_t val;
} hp_apm_region6_addr_end_reg_t;

/** Type of apm_region7_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region7_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region7
         */
        uint32_t apm_region7_addr_start:32;
    };
    uint32_t val;
} hp_apm_region7_addr_start_reg_t;

/** Type of apm_region7_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region7_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region7
         */
        uint32_t apm_region7_addr_end:32;
    };
    uint32_t val;
} hp_apm_region7_addr_end_reg_t;

/** Type of apm_region8_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region8_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region8
         */
        uint32_t apm_region8_addr_start:32;
    };
    uint32_t val;
} hp_apm_region8_addr_start_reg_t;

/** Type of apm_region8_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region8_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region8
         */
        uint32_t apm_region8_addr_end:32;
    };
    uint32_t val;
} hp_apm_region8_addr_end_reg_t;

/** Type of apm_region9_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region9_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region9
         */
        uint32_t apm_region9_addr_start:32;
    };
    uint32_t val;
} hp_apm_region9_addr_start_reg_t;

/** Type of apm_region9_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region9_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region9
         */
        uint32_t apm_region9_addr_end:32;
    };
    uint32_t val;
} hp_apm_region9_addr_end_reg_t;

/** Type of apm_region10_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region10_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region10
         */
        uint32_t apm_region10_addr_start:32;
    };
    uint32_t val;
} hp_apm_region10_addr_start_reg_t;

/** Type of apm_region10_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region10_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region10
         */
        uint32_t apm_region10_addr_end:32;
    };
    uint32_t val;
} hp_apm_region10_addr_end_reg_t;

/** Type of apm_region11_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region11_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region11
         */
        uint32_t apm_region11_addr_start:32;
    };
    uint32_t val;
} hp_apm_region11_addr_start_reg_t;

/** Type of apm_region11_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region11_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region11
         */
        uint32_t apm_region11_addr_end:32;
    };
    uint32_t val;
} hp_apm_region11_addr_end_reg_t;

/** Type of apm_region12_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region12_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region12
         */
        uint32_t apm_region12_addr_start:32;
    };
    uint32_t val;
} hp_apm_region12_addr_start_reg_t;

/** Type of apm_region12_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region12_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region12
         */
        uint32_t apm_region12_addr_end:32;
    };
    uint32_t val;
} hp_apm_region12_addr_end_reg_t;

/** Type of apm_region13_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region13_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region13
         */
        uint32_t apm_region13_addr_start:32;
    };
    uint32_t val;
} hp_apm_region13_addr_start_reg_t;

/** Type of apm_region13_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region13_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region13
         */
        uint32_t apm_region13_addr_end:32;
    };
    uint32_t val;
} hp_apm_region13_addr_end_reg_t;

/** Type of apm_region14_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region14_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region14
         */
        uint32_t apm_region14_addr_start:32;
    };
    uint32_t val;
} hp_apm_region14_addr_start_reg_t;

/** Type of apm_region14_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region14_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region14
         */
        uint32_t apm_region14_addr_end:32;
    };
    uint32_t val;
} hp_apm_region14_addr_end_reg_t;

/** Type of apm_region15_addr_start register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region15_addr_start : R/W; bitpos: [31:0]; default: 0;
         *  Start address of region15
         */
        uint32_t apm_region15_addr_start:32;
    };
    uint32_t val;
} hp_apm_region15_addr_start_reg_t;

/** Type of apm_region15_addr_end register
 *  Region address register
 */
typedef union {
    struct {
        /** apm_region15_addr_end : R/W; bitpos: [31:0]; default: 4294967295;
         *  End address of region15
         */
        uint32_t apm_region15_addr_end:32;
    };
    uint32_t val;
} hp_apm_region15_addr_end_reg_t;


/** Group: Region access authority attribute register */
/** Type of apm_region0_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region0_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region0_r0_pms_x:1;
        /** apm_region0_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region0_r0_pms_w:1;
        /** apm_region0_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region0_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region0_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region0_r1_pms_x:1;
        /** apm_region0_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region0_r1_pms_w:1;
        /** apm_region0_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region0_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region0_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region0_r2_pms_x:1;
        /** apm_region0_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region0_r2_pms_w:1;
        /** apm_region0_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region0_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region0_pms_attr_reg_t;

/** Type of apm_region1_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region1_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region1_r0_pms_x:1;
        /** apm_region1_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region1_r0_pms_w:1;
        /** apm_region1_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region1_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region1_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region1_r1_pms_x:1;
        /** apm_region1_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region1_r1_pms_w:1;
        /** apm_region1_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region1_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region1_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region1_r2_pms_x:1;
        /** apm_region1_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region1_r2_pms_w:1;
        /** apm_region1_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region1_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region1_pms_attr_reg_t;

/** Type of apm_region2_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region2_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region2_r0_pms_x:1;
        /** apm_region2_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region2_r0_pms_w:1;
        /** apm_region2_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region2_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region2_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region2_r1_pms_x:1;
        /** apm_region2_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region2_r1_pms_w:1;
        /** apm_region2_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region2_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region2_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region2_r2_pms_x:1;
        /** apm_region2_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region2_r2_pms_w:1;
        /** apm_region2_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region2_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region2_pms_attr_reg_t;

/** Type of apm_region3_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region3_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region3_r0_pms_x:1;
        /** apm_region3_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region3_r0_pms_w:1;
        /** apm_region3_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region3_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region3_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region3_r1_pms_x:1;
        /** apm_region3_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region3_r1_pms_w:1;
        /** apm_region3_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region3_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region3_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region3_r2_pms_x:1;
        /** apm_region3_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region3_r2_pms_w:1;
        /** apm_region3_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region3_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region3_pms_attr_reg_t;

/** Type of apm_region4_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region4_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region4_r0_pms_x:1;
        /** apm_region4_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region4_r0_pms_w:1;
        /** apm_region4_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region4_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region4_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region4_r1_pms_x:1;
        /** apm_region4_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region4_r1_pms_w:1;
        /** apm_region4_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region4_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region4_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region4_r2_pms_x:1;
        /** apm_region4_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region4_r2_pms_w:1;
        /** apm_region4_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region4_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region4_pms_attr_reg_t;

/** Type of apm_region5_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region5_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region5_r0_pms_x:1;
        /** apm_region5_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region5_r0_pms_w:1;
        /** apm_region5_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region5_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region5_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region5_r1_pms_x:1;
        /** apm_region5_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region5_r1_pms_w:1;
        /** apm_region5_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region5_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region5_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region5_r2_pms_x:1;
        /** apm_region5_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region5_r2_pms_w:1;
        /** apm_region5_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region5_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region5_pms_attr_reg_t;

/** Type of apm_region6_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region6_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region6_r0_pms_x:1;
        /** apm_region6_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region6_r0_pms_w:1;
        /** apm_region6_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region6_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region6_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region6_r1_pms_x:1;
        /** apm_region6_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region6_r1_pms_w:1;
        /** apm_region6_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region6_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region6_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region6_r2_pms_x:1;
        /** apm_region6_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region6_r2_pms_w:1;
        /** apm_region6_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region6_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region6_pms_attr_reg_t;

/** Type of apm_region7_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region7_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region7_r0_pms_x:1;
        /** apm_region7_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region7_r0_pms_w:1;
        /** apm_region7_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region7_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region7_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region7_r1_pms_x:1;
        /** apm_region7_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region7_r1_pms_w:1;
        /** apm_region7_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region7_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region7_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region7_r2_pms_x:1;
        /** apm_region7_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region7_r2_pms_w:1;
        /** apm_region7_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region7_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region7_pms_attr_reg_t;

/** Type of apm_region8_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region8_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region8_r0_pms_x:1;
        /** apm_region8_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region8_r0_pms_w:1;
        /** apm_region8_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region8_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region8_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region8_r1_pms_x:1;
        /** apm_region8_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region8_r1_pms_w:1;
        /** apm_region8_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region8_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region8_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region8_r2_pms_x:1;
        /** apm_region8_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region8_r2_pms_w:1;
        /** apm_region8_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region8_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region8_pms_attr_reg_t;

/** Type of apm_region9_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region9_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region9_r0_pms_x:1;
        /** apm_region9_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region9_r0_pms_w:1;
        /** apm_region9_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region9_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region9_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region9_r1_pms_x:1;
        /** apm_region9_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region9_r1_pms_w:1;
        /** apm_region9_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region9_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region9_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region9_r2_pms_x:1;
        /** apm_region9_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region9_r2_pms_w:1;
        /** apm_region9_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region9_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region9_pms_attr_reg_t;

/** Type of apm_region10_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region10_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region10_r0_pms_x:1;
        /** apm_region10_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region10_r0_pms_w:1;
        /** apm_region10_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region10_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region10_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region10_r1_pms_x:1;
        /** apm_region10_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region10_r1_pms_w:1;
        /** apm_region10_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region10_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region10_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region10_r2_pms_x:1;
        /** apm_region10_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region10_r2_pms_w:1;
        /** apm_region10_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region10_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region10_pms_attr_reg_t;

/** Type of apm_region11_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region11_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region11_r0_pms_x:1;
        /** apm_region11_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region11_r0_pms_w:1;
        /** apm_region11_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region11_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region11_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region11_r1_pms_x:1;
        /** apm_region11_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region11_r1_pms_w:1;
        /** apm_region11_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region11_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region11_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region11_r2_pms_x:1;
        /** apm_region11_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region11_r2_pms_w:1;
        /** apm_region11_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region11_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region11_pms_attr_reg_t;

/** Type of apm_region12_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region12_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region12_r0_pms_x:1;
        /** apm_region12_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region12_r0_pms_w:1;
        /** apm_region12_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region12_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region12_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region12_r1_pms_x:1;
        /** apm_region12_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region12_r1_pms_w:1;
        /** apm_region12_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region12_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region12_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region12_r2_pms_x:1;
        /** apm_region12_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region12_r2_pms_w:1;
        /** apm_region12_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region12_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region12_pms_attr_reg_t;

/** Type of apm_region13_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region13_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region13_r0_pms_x:1;
        /** apm_region13_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region13_r0_pms_w:1;
        /** apm_region13_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region13_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region13_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region13_r1_pms_x:1;
        /** apm_region13_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region13_r1_pms_w:1;
        /** apm_region13_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region13_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region13_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region13_r2_pms_x:1;
        /** apm_region13_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region13_r2_pms_w:1;
        /** apm_region13_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region13_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region13_pms_attr_reg_t;

/** Type of apm_region14_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region14_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region14_r0_pms_x:1;
        /** apm_region14_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region14_r0_pms_w:1;
        /** apm_region14_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region14_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region14_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region14_r1_pms_x:1;
        /** apm_region14_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region14_r1_pms_w:1;
        /** apm_region14_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region14_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region14_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region14_r2_pms_x:1;
        /** apm_region14_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region14_r2_pms_w:1;
        /** apm_region14_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region14_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region14_pms_attr_reg_t;

/** Type of apm_region15_pms_attr register
 *  Region access authority attribute register
 */
typedef union {
    struct {
        /** apm_region15_r0_pms_x : R/W; bitpos: [0]; default: 0;
         *  Region execute authority in REE_MODE0
         */
        uint32_t apm_region15_r0_pms_x:1;
        /** apm_region15_r0_pms_w : R/W; bitpos: [1]; default: 0;
         *  Region write authority in REE_MODE0
         */
        uint32_t apm_region15_r0_pms_w:1;
        /** apm_region15_r0_pms_r : R/W; bitpos: [2]; default: 0;
         *  Region read authority in REE_MODE0
         */
        uint32_t apm_region15_r0_pms_r:1;
        uint32_t reserved_3:1;
        /** apm_region15_r1_pms_x : R/W; bitpos: [4]; default: 0;
         *  Region execute authority in REE_MODE1
         */
        uint32_t apm_region15_r1_pms_x:1;
        /** apm_region15_r1_pms_w : R/W; bitpos: [5]; default: 0;
         *  Region write authority in REE_MODE1
         */
        uint32_t apm_region15_r1_pms_w:1;
        /** apm_region15_r1_pms_r : R/W; bitpos: [6]; default: 0;
         *  Region read authority in REE_MODE1
         */
        uint32_t apm_region15_r1_pms_r:1;
        uint32_t reserved_7:1;
        /** apm_region15_r2_pms_x : R/W; bitpos: [8]; default: 0;
         *  Region execute authority in REE_MODE2
         */
        uint32_t apm_region15_r2_pms_x:1;
        /** apm_region15_r2_pms_w : R/W; bitpos: [9]; default: 0;
         *  Region write authority in REE_MODE2
         */
        uint32_t apm_region15_r2_pms_w:1;
        /** apm_region15_r2_pms_r : R/W; bitpos: [10]; default: 0;
         *  Region read authority in REE_MODE2
         */
        uint32_t apm_region15_r2_pms_r:1;
        uint32_t reserved_11:21;
    };
    uint32_t val;
} hp_apm_region15_pms_attr_reg_t;


/** Group: PMS function control register */
/** Type of apm_func_ctrl register
 *  PMS function control register
 */
typedef union {
    struct {
        /** apm_m0_pms_func_en : R/W; bitpos: [0]; default: 1;
         *  PMS M0 function enable
         */
        uint32_t apm_m0_pms_func_en:1;
        /** apm_m1_pms_func_en : R/W; bitpos: [1]; default: 1;
         *  PMS M1 function enable
         */
        uint32_t apm_m1_pms_func_en:1;
        /** apm_m2_pms_func_en : R/W; bitpos: [2]; default: 1;
         *  PMS M2 function enable
         */
        uint32_t apm_m2_pms_func_en:1;
        /** apm_m3_pms_func_en : R/W; bitpos: [3]; default: 1;
         *  PMS M3 function enable
         */
        uint32_t apm_m3_pms_func_en:1;
        uint32_t reserved_4:28;
    };
    uint32_t val;
} hp_apm_func_ctrl_reg_t;


/** Group: M0 status register */
/** Type of apm_m0_status register
 *  M0 status register
 */
typedef union {
    struct {
        /** apm_m0_exception_status : RO; bitpos: [1:0]; default: 0;
         *  Exception status
         */
        uint32_t apm_m0_exception_status:2;
        uint32_t reserved_2:30;
    };
    uint32_t val;
} hp_apm_m0_status_reg_t;


/** Group: M0 status clear register */
/** Type of apm_m0_status_clr register
 *  M0 status clear register
 */
typedef union {
    struct {
        /** apm_m0_region_status_clr : WT; bitpos: [0]; default: 0;
         *  Clear exception status
         */
        uint32_t apm_m0_region_status_clr:1;
        uint32_t reserved_1:31;
    };
    uint32_t val;
} hp_apm_m0_status_clr_reg_t;


/** Group: M0 exception_info0 register */
/** Type of apm_m0_exception_info0 register
 *  M0 exception_info0 register
 */
typedef union {
    struct {
        /** apm_m0_exception_region : RO; bitpos: [15:0]; default: 0;
         *  Exception region
         */
        uint32_t apm_m0_exception_region:16;
        /** apm_m0_exception_mode : RO; bitpos: [17:16]; default: 0;
         *  Exception mode
         */
        uint32_t apm_m0_exception_mode:2;
        /** apm_m0_exception_id : RO; bitpos: [22:18]; default: 0;
         *  Exception id information
         */
        uint32_t apm_m0_exception_id:5;
        uint32_t reserved_23:9;
    };
    uint32_t val;
} hp_apm_m0_exception_info0_reg_t;


/** Group: M0 exception_info1 register */
/** Type of apm_m0_exception_info1 register
 *  M0 exception_info1 register
 */
typedef union {
    struct {
        /** apm_m0_exception_addr : RO; bitpos: [31:0]; default: 0;
         *  Exception addr
         */
        uint32_t apm_m0_exception_addr:32;
    };
    uint32_t val;
} hp_apm_m0_exception_info1_reg_t;


/** Group: M1 status register */
/** Type of apm_m1_status register
 *  M1 status register
 */
typedef union {
    struct {
        /** apm_m1_exception_status : RO; bitpos: [1:0]; default: 0;
         *  Exception status
         */
        uint32_t apm_m1_exception_status:2;
        uint32_t reserved_2:30;
    };
    uint32_t val;
} hp_apm_m1_status_reg_t;


/** Group: M1 status clear register */
/** Type of apm_m1_status_clr register
 *  M1 status clear register
 */
typedef union {
    struct {
        /** apm_m1_region_status_clr : WT; bitpos: [0]; default: 0;
         *  Clear exception status
         */
        uint32_t apm_m1_region_status_clr:1;
        uint32_t reserved_1:31;
    };
    uint32_t val;
} hp_apm_m1_status_clr_reg_t;


/** Group: M1 exception_info0 register */
/** Type of apm_m1_exception_info0 register
 *  M1 exception_info0 register
 */
typedef union {
    struct {
        /** apm_m1_exception_region : RO; bitpos: [15:0]; default: 0;
         *  Exception region
         */
        uint32_t apm_m1_exception_region:16;
        /** apm_m1_exception_mode : RO; bitpos: [17:16]; default: 0;
         *  Exception mode
         */
        uint32_t apm_m1_exception_mode:2;
        /** apm_m1_exception_id : RO; bitpos: [22:18]; default: 0;
         *  Exception id information
         */
        uint32_t apm_m1_exception_id:5;
        uint32_t reserved_23:9;
    };
    uint32_t val;
} hp_apm_m1_exception_info0_reg_t;


/** Group: M1 exception_info1 register */
/** Type of apm_m1_exception_info1 register
 *  M1 exception_info1 register
 */
typedef union {
    struct {
        /** apm_m1_exception_addr : RO; bitpos: [31:0]; default: 0;
         *  Exception addr
         */
        uint32_t apm_m1_exception_addr:32;
    };
    uint32_t val;
} hp_apm_m1_exception_info1_reg_t;


/** Group: M2 status register */
/** Type of apm_m2_status register
 *  M2 status register
 */
typedef union {
    struct {
        /** apm_m2_exception_status : RO; bitpos: [1:0]; default: 0;
         *  Exception status
         */
        uint32_t apm_m2_exception_status:2;
        uint32_t reserved_2:30;
    };
    uint32_t val;
} hp_apm_m2_status_reg_t;


/** Group: M2 status clear register */
/** Type of apm_m2_status_clr register
 *  M2 status clear register
 */
typedef union {
    struct {
        /** apm_m2_region_status_clr : WT; bitpos: [0]; default: 0;
         *  Clear exception status
         */
        uint32_t apm_m2_region_status_clr:1;
        uint32_t reserved_1:31;
    };
    uint32_t val;
} hp_apm_m2_status_clr_reg_t;


/** Group: M2 exception_info0 register */
/** Type of apm_m2_exception_info0 register
 *  M2 exception_info0 register
 */
typedef union {
    struct {
        /** apm_m2_exception_region : RO; bitpos: [15:0]; default: 0;
         *  Exception region
         */
        uint32_t apm_m2_exception_region:16;
        /** apm_m2_exception_mode : RO; bitpos: [17:16]; default: 0;
         *  Exception mode
         */
        uint32_t apm_m2_exception_mode:2;
        /** apm_m2_exception_id : RO; bitpos: [22:18]; default: 0;
         *  Exception id information
         */
        uint32_t apm_m2_exception_id:5;
        uint32_t reserved_23:9;
    };
    uint32_t val;
} hp_apm_m2_exception_info0_reg_t;


/** Group: M2 exception_info1 register */
/** Type of apm_m2_exception_info1 register
 *  M2 exception_info1 register
 */
typedef union {
    struct {
        /** apm_m2_exception_addr : RO; bitpos: [31:0]; default: 0;
         *  Exception addr
         */
        uint32_t apm_m2_exception_addr:32;
    };
    uint32_t val;
} hp_apm_m2_exception_info1_reg_t;


/** Group: M3 status register */
/** Type of apm_m3_status register
 *  M3 status register
 */
typedef union {
    struct {
        /** apm_m3_exception_status : RO; bitpos: [1:0]; default: 0;
         *  Exception status
         */
        uint32_t apm_m3_exception_status:2;
        uint32_t reserved_2:30;
    };
    uint32_t val;
} hp_apm_m3_status_reg_t;


/** Group: M3 status clear register */
/** Type of apm_m3_status_clr register
 *  M3 status clear register
 */
typedef union {
    struct {
        /** apm_m3_region_status_clr : WT; bitpos: [0]; default: 0;
         *  Clear exception status
         */
        uint32_t apm_m3_region_status_clr:1;
        uint32_t reserved_1:31;
    };
    uint32_t val;
} hp_apm_m3_status_clr_reg_t;


/** Group: M3 exception_info0 register */
/** Type of apm_m3_exception_info0 register
 *  M3 exception_info0 register
 */
typedef union {
    struct {
        /** apm_m3_exception_region : RO; bitpos: [15:0]; default: 0;
         *  Exception region
         */
        uint32_t apm_m3_exception_region:16;
        /** apm_m3_exception_mode : RO; bitpos: [17:16]; default: 0;
         *  Exception mode
         */
        uint32_t apm_m3_exception_mode:2;
        /** apm_m3_exception_id : RO; bitpos: [22:18]; default: 0;
         *  Exception id information
         */
        uint32_t apm_m3_exception_id:5;
        uint32_t reserved_23:9;
    };
    uint32_t val;
} hp_apm_m3_exception_info0_reg_t;


/** Group: M3 exception_info1 register */
/** Type of apm_m3_exception_info1 register
 *  M3 exception_info1 register
 */
typedef union {
    struct {
        /** apm_m3_exception_addr : RO; bitpos: [31:0]; default: 0;
         *  Exception addr
         */
        uint32_t apm_m3_exception_addr:32;
    };
    uint32_t val;
} hp_apm_m3_exception_info1_reg_t;


/** Group: APM interrupt enable register */
/** Type of apm_int_en register
 *  APM interrupt enable register
 */
typedef union {
    struct {
        /** apm_m0_apm_int_en : R/W; bitpos: [0]; default: 0;
         *  APM M0 interrupt enable
         */
        uint32_t apm_m0_apm_int_en:1;
        /** apm_m1_apm_int_en : R/W; bitpos: [1]; default: 0;
         *  APM M1 interrupt enable
         */
        uint32_t apm_m1_apm_int_en:1;
        /** apm_m2_apm_int_en : R/W; bitpos: [2]; default: 0;
         *  APM M2 interrupt enable
         */
        uint32_t apm_m2_apm_int_en:1;
        /** apm_m3_apm_int_en : R/W; bitpos: [3]; default: 0;
         *  APM M3 interrupt enable
         */
        uint32_t apm_m3_apm_int_en:1;
        uint32_t reserved_4:28;
    };
    uint32_t val;
} hp_apm_int_en_reg_t;


/** Group: clock gating register */
/** Type of apm_clock_gate register
 *  clock gating register
 */
typedef union {
    struct {
        /** apm_clk_en : R/W; bitpos: [0]; default: 1;
         *  reg_clk_en
         */
        uint32_t apm_clk_en:1;
        uint32_t reserved_1:31;
    };
    uint32_t val;
} hp_apm_clock_gate_reg_t;


/** Group: Version register */
/** Type of apm_date register
 *  Version register
 */
typedef union {
    struct {
        /** apm_date : R/W; bitpos: [27:0]; default: 35672640;
         *  reg_date
         */
        uint32_t apm_date:28;
        uint32_t reserved_28:4;
    };
    uint32_t val;
} hp_apm_date_reg_t;


typedef struct {
    volatile hp_apm_region_filter_en_reg_t apm_region_filter_en;
    volatile hp_apm_region0_addr_start_reg_t apm_region0_addr_start;
    volatile hp_apm_region0_addr_end_reg_t apm_region0_addr_end;
    volatile hp_apm_region0_pms_attr_reg_t apm_region0_pms_attr;
    volatile hp_apm_region1_addr_start_reg_t apm_region1_addr_start;
    volatile hp_apm_region1_addr_end_reg_t apm_region1_addr_end;
    volatile hp_apm_region1_pms_attr_reg_t apm_region1_pms_attr;
    volatile hp_apm_region2_addr_start_reg_t apm_region2_addr_start;
    volatile hp_apm_region2_addr_end_reg_t apm_region2_addr_end;
    volatile hp_apm_region2_pms_attr_reg_t apm_region2_pms_attr;
    volatile hp_apm_region3_addr_start_reg_t apm_region3_addr_start;
    volatile hp_apm_region3_addr_end_reg_t apm_region3_addr_end;
    volatile hp_apm_region3_pms_attr_reg_t apm_region3_pms_attr;
    volatile hp_apm_region4_addr_start_reg_t apm_region4_addr_start;
    volatile hp_apm_region4_addr_end_reg_t apm_region4_addr_end;
    volatile hp_apm_region4_pms_attr_reg_t apm_region4_pms_attr;
    volatile hp_apm_region5_addr_start_reg_t apm_region5_addr_start;
    volatile hp_apm_region5_addr_end_reg_t apm_region5_addr_end;
    volatile hp_apm_region5_pms_attr_reg_t apm_region5_pms_attr;
    volatile hp_apm_region6_addr_start_reg_t apm_region6_addr_start;
    volatile hp_apm_region6_addr_end_reg_t apm_region6_addr_end;
    volatile hp_apm_region6_pms_attr_reg_t apm_region6_pms_attr;
    volatile hp_apm_region7_addr_start_reg_t apm_region7_addr_start;
    volatile hp_apm_region7_addr_end_reg_t apm_region7_addr_end;
    volatile hp_apm_region7_pms_attr_reg_t apm_region7_pms_attr;
    volatile hp_apm_region8_addr_start_reg_t apm_region8_addr_start;
    volatile hp_apm_region8_addr_end_reg_t apm_region8_addr_end;
    volatile hp_apm_region8_pms_attr_reg_t apm_region8_pms_attr;
    volatile hp_apm_region9_addr_start_reg_t apm_region9_addr_start;
    volatile hp_apm_region9_addr_end_reg_t apm_region9_addr_end;
    volatile hp_apm_region9_pms_attr_reg_t apm_region9_pms_attr;
    volatile hp_apm_region10_addr_start_reg_t apm_region10_addr_start;
    volatile hp_apm_region10_addr_end_reg_t apm_region10_addr_end;
    volatile hp_apm_region10_pms_attr_reg_t apm_region10_pms_attr;
    volatile hp_apm_region11_addr_start_reg_t apm_region11_addr_start;
    volatile hp_apm_region11_addr_end_reg_t apm_region11_addr_end;
    volatile hp_apm_region11_pms_attr_reg_t apm_region11_pms_attr;
    volatile hp_apm_region12_addr_start_reg_t apm_region12_addr_start;
    volatile hp_apm_region12_addr_end_reg_t apm_region12_addr_end;
    volatile hp_apm_region12_pms_attr_reg_t apm_region12_pms_attr;
    volatile hp_apm_region13_addr_start_reg_t apm_region13_addr_start;
    volatile hp_apm_region13_addr_end_reg_t apm_region13_addr_end;
    volatile hp_apm_region13_pms_attr_reg_t apm_region13_pms_attr;
    volatile hp_apm_region14_addr_start_reg_t apm_region14_addr_start;
    volatile hp_apm_region14_addr_end_reg_t apm_region14_addr_end;
    volatile hp_apm_region14_pms_attr_reg_t apm_region14_pms_attr;
    volatile hp_apm_region15_addr_start_reg_t apm_region15_addr_start;
    volatile hp_apm_region15_addr_end_reg_t apm_region15_addr_end;
    volatile hp_apm_region15_pms_attr_reg_t apm_region15_pms_attr;
    volatile hp_apm_func_ctrl_reg_t apm_func_ctrl;
    volatile hp_apm_m0_status_reg_t apm_m0_status;
    volatile hp_apm_m0_status_clr_reg_t apm_m0_status_clr;
    volatile hp_apm_m0_exception_info0_reg_t apm_m0_exception_info0;
    volatile hp_apm_m0_exception_info1_reg_t apm_m0_exception_info1;
    volatile hp_apm_m1_status_reg_t apm_m1_status;
    volatile hp_apm_m1_status_clr_reg_t apm_m1_status_clr;
    volatile hp_apm_m1_exception_info0_reg_t apm_m1_exception_info0;
    volatile hp_apm_m1_exception_info1_reg_t apm_m1_exception_info1;
    volatile hp_apm_m2_status_reg_t apm_m2_status;
    volatile hp_apm_m2_status_clr_reg_t apm_m2_status_clr;
    volatile hp_apm_m2_exception_info0_reg_t apm_m2_exception_info0;
    volatile hp_apm_m2_exception_info1_reg_t apm_m2_exception_info1;
    volatile hp_apm_m3_status_reg_t apm_m3_status;
    volatile hp_apm_m3_status_clr_reg_t apm_m3_status_clr;
    volatile hp_apm_m3_exception_info0_reg_t apm_m3_exception_info0;
    volatile hp_apm_m3_exception_info1_reg_t apm_m3_exception_info1;
    volatile hp_apm_int_en_reg_t apm_int_en;
    volatile hp_apm_clock_gate_reg_t apm_clock_gate;
    uint32_t reserved_110[443];
    volatile hp_apm_date_reg_t apm_date;
} hp_apm_dev_t;

extern hp_apm_dev_t HP_APM;

#ifndef __cplusplus
_Static_assert(sizeof(hp_apm_dev_t) == 0x800, "Invalid size of hp_apm_dev_t structure");
#endif

#ifdef __cplusplus
}
#endif
