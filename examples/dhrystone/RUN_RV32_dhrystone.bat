@echo off

;rem move into the Example Directory
set BATCHDIR=%~dp0%
cd /d %BATCHDIR%

..\..\bin\Windows64\riscvOVPsim.exe --program dhrystone.RISCV32.elf -variant RV32I -override riscvOVPsim/cpu/add_Extensions=MAC %*

if not defined calledscript ( pause )
