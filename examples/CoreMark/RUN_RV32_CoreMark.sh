#!/bin/sh

cd $(dirname $0)
bindir=$(dirname $(dirname $(pwd)))/bin/Linux64

${bindir}/riscvOVPsim.exe -program coremark.RISCV32.elf -variant RV32I -override riscvOVPsim/cpu/add_Extensions=MAC "$@" -argv 0 0 0x66

# validate with args
# 0 0 0x66
# and
# 0x3415 0x3415 0x66
# next argument is iterations, default 1000
