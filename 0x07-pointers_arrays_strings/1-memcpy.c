#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: byte limit of memory to be copied
 *
 * Description: func. copies n bytes from memory area src to memory area dest
 *
 * Return: pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
