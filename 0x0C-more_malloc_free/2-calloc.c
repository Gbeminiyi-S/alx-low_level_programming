#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc and
 *		sets memory to zero
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
