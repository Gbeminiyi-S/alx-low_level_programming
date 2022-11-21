#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: the index of the first element for which the cmp
 *		function does not return 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (!array || !cmp || size <= 0)
		;
	else
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);

			if (j == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
