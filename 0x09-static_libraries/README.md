# 0x09. C - Static libraries
## About
An introductory project on:

- static libraries, how they work, how to create one, and how to use them
- Basic usage of `ar`, `ranlib`, `nm`
## Requirements
- Ubuntu 14.04
- gcc 4.8.4
## File Descriptions
### Mandatory
[libmy.a](./libmy.a) - archive library containing various functions from previous projects.

[main.h](./main.h) - header file with all of the function prototypes for `libmy.a`.

[create_static_lib.sh](./create_static_lib.sh) - script that creates a static library, `liball.a` with all of the functions that are in the current directory.
