# 0x0F. C - Function pointers
An introductory project on:

- function pointers and how to use them
- what a function pointer exactly hold
- where does a function pointer point to in the virtual memory

# Requirements
- no global variable
- files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- the only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
- allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)

# File Descriptions
## Mandatory
[0-print_name.c](https://github.com/Gbeminiyi-S/alx-low_level_programming/blob/main/0x0F-function_pointers/0-print_name.c) - function that prints a name

[1-array_iterator.c](https://github.com/Gbeminiyi-S/alx-low_level_programming/blob/main/0x0F-function_pointers/1-array_iterator.c) - function that executes a function given as a parameter on each element of an array

[2-int_index.c](https://github.com/Gbeminiyi-S/alx-low_level_programming/blob/main/0x0F-function_pointers/2-int_index.c) - function that searches for an integer

3 - program that performs simple operations

| File | Description |
| --- | --- |
| [3-calc.h](https://github.com/Gbeminiyi-S/alx-low_level_programming/blob/main/0x0F-function_pointers/3-calc.h) | file contains all the function prototypes and data structures used by this program |
| [3-op_functions.c](https://github.com/Gbeminiyi-S/alx-low_level_programming/blob/main/0x0F-function_pointers/3-op_functions.c) | contains the functions for each arithmetic operation |
| [3-get_op_func.c](https://github.com/Gbeminiyi-S/alx-low_level_programming/blob/main/0x0F-function_pointers/3-get_op_func.c) | contains the function that selects the correct function to perform the operation asked by the user |
| [3-main.c](https://github.com/Gbeminiyi-S/alx-low_level_programming/blob/main/0x0F-function_pointers/3-main.c) | contains main function only |

