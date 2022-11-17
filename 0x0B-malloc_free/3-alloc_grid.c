#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @height: number of elements
 * @width: number of sub-elements per array element
 *
 * Return: double pointer to the array, else, NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i, j, size;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	size = height + width;

	ptr = malloc(sizeof(int *) * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (!ptr[i])
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}

