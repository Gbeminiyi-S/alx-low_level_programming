#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int count;

	unsigned long int i = 1, j = 2, i1, i2, j1, j2, fib, fib1, fib2;

	printf("%lu, ", i);
	printf("%lu, ", j);

	for (count = 3; count < 89; count++)
	{
		fib = i + j;
		i = j;
		j = fib;

		printf("%lu", fib);
		printf(", ");
	}
	i1 = i / 1000;
	i2 = i % 1000;
	j1 = j / 1000;
	j2 = j % 1000;

	for (count = 89; count <= 98; count++)
	{
		fib1 = i1 + j1 + ((i2 + j2) / 1000);
		fib2 = (i2 + j2) % 1000;
		i1 = j1;
		i2 = j2;
		j1 = fib1;
		j2 = fib2;

		printf("%lu%.3lu", fib1, fib2);
		if (count != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}

