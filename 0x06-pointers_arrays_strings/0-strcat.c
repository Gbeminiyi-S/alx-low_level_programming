#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to dest
 * @src: pointer to src
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j]; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
