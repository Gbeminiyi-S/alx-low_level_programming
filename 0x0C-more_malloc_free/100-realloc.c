#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to
 *	malloc: malloc(old_size)
 *
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: ptr to reallocated memory block, else, NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min, i;
	char *ptr_realloc;
	char *old_ptr = ptr;

	if (ptr == NULL)
	{
		ptr_realloc = malloc(new_size);
		return (ptr_realloc);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr_realloc = malloc(new_size);

	if (ptr_realloc == NULL)
		return (NULL);
	if (new_size > old_size)
		min = old_size;
	else
		min = new_size;
	for (i = 0; i < min; i++)
		ptr_realloc[i] = old_ptr[i];
	free(ptr);
	return (ptr_realloc);
}
