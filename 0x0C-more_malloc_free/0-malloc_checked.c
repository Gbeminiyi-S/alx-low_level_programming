#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: a pointer to the allocated memory, else, exit(98)
 */
void *malloc_checked(unsigned int b)
{
	char *ptr = NULL;

	if (b != 0)
	{
		ptr = malloc(b);
	}
	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
