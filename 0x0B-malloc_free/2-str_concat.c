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
	unsigned int i, j, k;

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
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (!ptr)
	{
		return (NULL);
	}
	for (k = 0; k < i ; k++)
	{
		ptr[k] = s1[k];
	}
	for (;  j != 0 && k < (i + j + 1); k++, s2++)
	{
		ptr[k] = *s2;
	}
	ptr[i + j] = '\0';

	return (ptr);
}

