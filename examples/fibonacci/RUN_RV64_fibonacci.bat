@echo off

;rem move into the Example Directory
set BATCHDIR=%~dp0%
cd /d %BATCHDIR%

..\..\bin\Windows64\riscvOVPsim.exe --program fibonacci.RISCV64.elf -variant RV64I -override riscvOVPsim/cpu/add_Extensions_mask=MAC %*

if not defined calledscript ( pause )
