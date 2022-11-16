#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: byte restriction of src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j] && n; j++, i++, n--)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
