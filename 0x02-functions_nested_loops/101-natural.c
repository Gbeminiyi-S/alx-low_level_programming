#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: 0 Always
 */
int main(void)
{
	int number, total = 0;

	for (number = 1; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			total += number;
		}
	}
	printf("%d\n", total);

	return (0);
}
