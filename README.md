# Kernel Module Compiling and Linking
This is a small project from University relating hardware and software integration.

This repository has 2 files.
 - *kernelmodule.c* which has the code in C language
 - *Makefile* which has the code to compile
 
The C code is responsible to print a message when de module is incialized, and another message when the module is removed.
The Makefile file is responsable to compile and linking the module to the linux kernel.

# How to run the program
 1. You must have `gcc`, `linux-headers` and `make` installed on your machine
 2. Clone this repositoy, and make next steps on the cloned directory
 3. If your machine is a 64x you should install this `sudo apt-get install gcc-multilib g++-multilib`
 4. Run `make`
 5. This will compile and link the module to the kernel
 6. Run `sudo insmod ./kernelmodule.ko` to inicialize the module
 7. Observe in `/var/log/syslog` the message "BEM VINDO AO kernelmodule" will be printed there.
 8. Run `sudo rmmod ./kernelmodule.ko` to remove the module
 9. Observe in `/var/log/syslog` the message "kernelmodule ENCERRADO, ADEUS!" will be printed there.

# Authors
 - [Mateus Santana](https://github.com/mateussgn)
 - [Paulo Vinicius](https://github.com/pvfls)