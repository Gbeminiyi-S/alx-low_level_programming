#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer 1
 * @b: pointer to integer 2
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
