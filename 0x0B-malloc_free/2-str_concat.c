#include "main.h"

/**
 * str_concat - concantenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the array, else, NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	unsigned int i, j, size;

	if (!s1)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (!s2)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	size = i + j + 1;

	ptr = malloc(sizeof(char) * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		ptr[j] = s1[j];
	}
	for (i = 0; i < size - 1; i++)
	{
		ptr[i + j] = s2[i];
	}
	ptr[i + j] = '\0';

	return (ptr);
}

