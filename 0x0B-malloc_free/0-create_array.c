#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 *			with a specific char
 *
 * @size: size of the array
 * @c: character to initialise array
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}

