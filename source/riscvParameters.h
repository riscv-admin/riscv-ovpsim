/*
 * Copyright (c) 2005-2020 Imperas Software Ltd., www.imperas.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied.
 *
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

// VMI header files
#include "vmi/vmiAttrs.h"
#include "vmi/vmiParameters.h"

// model header files
#include "riscvTypeRefs.h"


//
// Define model parameters
//
typedef struct riscvParamValuesS {

    // simulation controls
    VMI_ENUM_PARAM(variant);
    VMI_ENUM_PARAM(user_version);
    VMI_ENUM_PARAM(priv_version);
    VMI_ENUM_PARAM(vector_version);
    VMI_ENUM_PARAM(bitmanip_version);
    VMI_ENUM_PARAM(fp16_version);
    VMI_ENUM_PARAM(mstatus_fs_mode);
    VMI_BOOL_PARAM(verbose);
    VMI_UNS32_PARAM(numHarts);
    VMI_BOOL_PARAM(debug_mode);
    VMI_UNS64_PARAM(debug_address);
    VMI_UNS64_PARAM(dexc_address);
    VMI_BOOL_PARAM(updatePTEA);
    VMI_BOOL_PARAM(updatePTED);
    VMI_BOOL_PARAM(unaligned);
    VMI_BOOL_PARAM(unalignedAMO);
    VMI_BOOL_PARAM(wfi_is_nop);
    VMI_BOOL_PARAM(mtvec_is_ro);
    VMI_UNS32_PARAM(counteren_mask);
    VMI_UNS32_PARAM(tvec_align);
    VMI_UNS64_PARAM(mtvec_mask);
    VMI_UNS64_PARAM(stvec_mask);
    VMI_UNS64_PARAM(utvec_mask);
    VMI_UNS64_PARAM(mtvt_mask);
    VMI_UNS64_PARAM(stvt_mask);
    VMI_UNS64_PARAM(utvt_mask);
    VMI_UNS64_PARAM(ecode_mask);
    VMI_UNS64_PARAM(ecode_nmi);
    VMI_BOOL_PARAM(tval_zero);
    VMI_BOOL_PARAM(tval_ii_code);
    VMI_BOOL_PARAM(time_undefined);
    VMI_BOOL_PARAM(cycle_undefined);
    VMI_BOOL_PARAM(instret_undefined);
    VMI_BOOL_PARAM(enable_CSR_bus);
    VMI_BOOL_PARAM(d_requires_f);
    VMI_BOOL_PARAM(xret_preserves_lr);
    VMI_BOOL_PARAM(require_vstart0);
    VMI_UNS32_PARAM(ASID_bits);
    VMI_UNS32_PARAM(PMP_grain);
    VMI_UNS32_PARAM(PMP_registers);
    VMI_UNS32_PARAM(Sv_modes);
    VMI_UNS32_PARAM(lr_sc_grain);
    VMI_UNS64_PARAM(reset_address);
    VMI_UNS64_PARAM(nmi_address);
    VMI_UNS32_PARAM(local_int_num);
    VMI_UNS64_PARAM(unimp_int_mask);
    VMI_UNS64_PARAM(force_mideleg);
    VMI_UNS64_PARAM(force_sideleg);
    VMI_UNS64_PARAM(no_ideleg);
    VMI_UNS64_PARAM(no_edeleg);
    VMI_BOOL_PARAM(external_int_id);

    // fundamental configuration
    VMI_ENDIAN_PARAM(endian);

    // ISA configuration
    VMI_UNS32_PARAM(misa_MXL);
    VMI_UNS32_PARAM(misa_MXL_mask);
    VMI_UNS32_PARAM(misa_Extensions);
    VMI_STRING_PARAM(add_Extensions);
    VMI_UNS32_PARAM(misa_Extensions_mask);
    VMI_STRING_PARAM(add_Extensions_mask);
    VMI_UNS64_PARAM(mvendorid);
    VMI_UNS64_PARAM(marchid);
    VMI_UNS64_PARAM(mimpid);
    VMI_UNS64_PARAM(mhartid);
    VMI_UNS64_PARAM(mtvec);
    VMI_UNS32_PARAM(mstatus_FS);
    VMI_UNS32_PARAM(mstatus_VS);
    VMI_UNS32_PARAM(ELEN);
    VMI_UNS32_PARAM(SLEN);
    VMI_UNS32_PARAM(VLEN);
    VMI_UNS32_PARAM(SEW_min);
    VMI_BOOL_PARAM(Zvlsseg);
    VMI_BOOL_PARAM(Zvamo);
    VMI_BOOL_PARAM(Zvediv);
    VMI_BOOL_PARAM(Zvqmac);
    VMI_BOOL_PARAM(Zba);
    VMI_BOOL_PARAM(Zbb);
    VMI_BOOL_PARAM(Zbc);
    VMI_BOOL_PARAM(Zbe);
    VMI_BOOL_PARAM(Zbf);
    VMI_BOOL_PARAM(Zbm);
    VMI_BOOL_PARAM(Zbp);
    VMI_BOOL_PARAM(Zbr);
    VMI_BOOL_PARAM(Zbs);
    VMI_BOOL_PARAM(Zbt);

    // CLIC configuration
    VMI_UNS64_PARAM(mclicbase);
    VMI_UNS32_PARAM(CLICLEVELS);
    VMI_BOOL_PARAM(CLICANDBASIC);
    VMI_UNS32_PARAM(CLICVERSION);
    VMI_UNS32_PARAM(CLICINTCTLBITS);
    VMI_UNS32_PARAM(CLICCFGMBITS);
    VMI_UNS32_PARAM(CLICCFGLBITS);
    VMI_BOOL_PARAM(CLICSELHVEC);
    VMI_BOOL_PARAM(CLICXNXTI);
    VMI_BOOL_PARAM(CLICXCSW);
    VMI_BOOL_PARAM(externalCLIC);
    VMI_BOOL_PARAM(tvt_undefined);
    VMI_BOOL_PARAM(intthresh_undefined);
    VMI_BOOL_PARAM(mclicbase_undefined);

} riscvParamValues;

//
// Free parameter definitions
//
void riscvFreeParameters(riscvP riscv);

//
// Get any configuration with the given name
//
riscvConfigCP riscvGetNamedConfig(riscvConfigCP cfgList, const char *variant);

//
// Return Privileged Architecture description
//
const char *riscvGetPrivVersionDesc(riscvP riscv);

//
// Return User Architecture description
//
const char *riscvGetUserVersionDesc(riscvP riscv);

//
// Return Vector Architecture description
//
const char *riscvGetVectorVersionDesc(riscvP riscv);

//
// Return Bit Manipulation Architecture description
//
const char *riscvGetBitManipVersionDesc(riscvP riscv);

//
// Return 16-bit floating point description
//
const char *riscvGetFP16VersionDesc(riscvP riscv);

//
// Return mstatus.FS mode name
//
const char *riscvGetFSModeName(riscvP riscv);
