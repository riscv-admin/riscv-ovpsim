#!/bin/sh

cd $(dirname $0)
bindir=$(dirname $(dirname $(pwd)))/bin/Linux64

${bindir}/riscvOVPsim.exe --program dhrystone.RISCV64.elf -variant RV64I -override riscvOVPsim/cpu/add_Extensions=MAC "$@"

