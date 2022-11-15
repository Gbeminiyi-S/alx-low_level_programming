#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int i, len = 0;
	char *buffer = s;
	char temp;

	while (buffer[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = buffer[i];
		buffer[i] = buffer[len - i - 1];
		buffer[len - i - 1] = temp;
	}

	*s = *buffer;
}
