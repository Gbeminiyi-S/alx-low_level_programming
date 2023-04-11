# 0x06. C - More pointers, arrays and strings
An introductory project on:

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables
# Requirements
- no global variable
- Files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- no standard library functions, except otherwise stated
- allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
# File Descriptions
## Mandatory
[0-strcat.c](./0-strcat.c) - This function appends the `src` string to the `dest` string, overwriting the terminating null byte `(\0)` at the end of `dest`, and then adds a terminating null byte.

[1-strncat.c](./1-strncat.c) - This function appends the `src` string to the `dest` string, it will use at most `n` bytes from `src` and does not need to be null-terminated if it contains `n` or more bytes.

[2-strncpy.c](./2-strncpy.c) - function that copies a string, works exactly like `strncpy`.

[3-strcmp.c](./3-strcmp.c) - compares two strings, works exactly like `strcmp`.

[4-rev_array.c](./4-rev_array.c) -  reverses the content of an array of integers.

[5-string_toupper.c](./5-string_toupper.c) - changes all lowercase letters of a string to uppercase.

[6-cap_string.c](./6-cap_string.c) - capitalizes all words of a string.

[7-leet.c](./7-leet.c) - encodes a string into `1337`.

## Advanced
[100-rot13.c](./100-rot13.c) - encodes a string using `rot13`.

[101-print_number.c](./101-print_number.c) - prints an integer.

[102-magic.c](./102-magic.c) - add one line to this [code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c), so that the program prints `a[2] = 98`, followed by a new line.

[103-infinite_add.c](./103-infinite_add.c) - adds two numbers.

[104-print_buffer](./104-print_buffer) - prints a buffer.
