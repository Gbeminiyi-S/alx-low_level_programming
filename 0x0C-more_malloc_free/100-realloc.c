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
	char *ptr_new = NULL, *ptr_old = ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
		if (!ptr)
		{
			return (NULL);
		}
		return (ptr_new);
	}
	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (NULL);
	}

	ptr_new = malloc(new_size);
	if (!ptr_new)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		old_size = new_size;
	}

	for (i = 0; i < old_size; i++)
	{
		ptr_new[i] = ptr_old[i];
	}
	free(ptr);

	return (ptr_new);
}
