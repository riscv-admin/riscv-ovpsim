#!/bin/sh

cd $(dirname $0)
bindir=$(dirname $(dirname $(pwd)))/bin/Linux64

${bindir}/riscvOVPsim.exe --program fibonacci.RISCV32.elf -variant RV32I -override riscvOVPsim/cpu/add_Extensions=MAC "$@"
