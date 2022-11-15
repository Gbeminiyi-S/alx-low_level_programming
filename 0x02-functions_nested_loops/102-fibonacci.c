#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 Always
 */
int main(void)
{
	unsigned long int i = 0, j = 1, sum, count;

	for (count = 0; count < 50; count++)
	{
		sum = i + j;
		printf("%ld", sum);
		if (count != 49)
		{
			printf(", ");
		}
		i = j;
		j = sum;
	}
	printf("\n");
	return (0);
}
