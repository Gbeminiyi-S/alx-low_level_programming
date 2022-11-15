#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
