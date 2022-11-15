#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(STDOUT_FILENO, str++, 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
