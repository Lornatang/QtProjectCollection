@echo off

cmake -S . ^
      -B cmake-build-debug-windows-x86 ^
      -A Win32

cmake --build cmake-build-debug-windows-x86