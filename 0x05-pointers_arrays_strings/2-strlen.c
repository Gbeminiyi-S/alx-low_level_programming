#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: pointer to string
 *
 * Return: result
 */
int _strlen(char *s)
{
	int i = 0, length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
