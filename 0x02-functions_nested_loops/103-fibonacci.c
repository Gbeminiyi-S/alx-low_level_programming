#include "main.h"

/**
 * main - finds and prints the sum of the even-valued
 *		terms of fibannaci sequence limited to fib. values
 *		that do not exceed 4,000,000
 *
 * Return: 0 Always
 */
int main(void)
{
	unsigned long int i = 0, j, sum_f, sum_e = 0;

	for (j = 1; j <= 4000000;)
	{
		sum_f = i + j;

		if ((sum_f % 2 == 0) && sum_f <= 4000000)
		{
			sum_e += sum_f;
		}
		i = j;
		j = sum_f;
	}
	printf("%ld\n", sum_e);
	return (0);
}
