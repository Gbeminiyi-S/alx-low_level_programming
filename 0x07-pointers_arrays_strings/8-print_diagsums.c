#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *				of integers
 * @a: pointer to an array of integers
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0;

	for (i = 0; i < size * size; )
	{
		sum += a[i];
		if (i == (size * size - 1))
		{
			break;
		}
		i += (size + 1);
	}
	printf("%i, ", sum);

	sum = 0;
	i = i - (size - 1);
	for (; i >= 0;)
	{
		sum += a[i];
		i -= (size - 1);
	}
	printf("%i\n", sum);
}
