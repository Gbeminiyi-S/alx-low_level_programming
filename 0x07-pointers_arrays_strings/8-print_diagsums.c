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
	unsigned int sum = 0, total = 0;

	for (i = 0; i <= size * size; i += (size + 1))
		sum += a[i];
	for (i = size - 1; i <= (size - 1) * size + 1; i += (size - 1))
		total += a[i];
	printf("%d, %d\n", sum, total);
}
