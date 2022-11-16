#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < (n + 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
