# musashidll

This repository is a dynamic library based on musashi m68k emulator by Karl Stenerud
The original emulator can be found here: https://github.com/kstenerud/Musashi

## Changes 

  * All opcode tables were prerendered with m68kmake and included into repo as the library may be tricky to build for a beginner not familiar with code generation.
  * Some changes in macros and definitions to export the main functionality of Musashi as library functions
  * Visual Studio and Xcode projects added
  * All write-it-yourself functions like memory access without which the original Musashi couldn't be built were made in callback style which might cause performance to be slightly reduced but who cares in 2018?
  
