#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first value of array
 * @max: last value of array
 *
 * Description: The array created should contain all the values
 *		from min (included) to max (included), ordered from min to max
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *ptr = NULL;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
