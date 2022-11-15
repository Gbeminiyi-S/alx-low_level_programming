#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 Always
 */
int main(void)
{
	long int number, factor;

	number = 612852475143;

	for (factor = 3; factor <= sqrt(number); factor += 2)
	{
		while (number % factor == 0)
		{
			number /= factor;
		}
	}
	printf("%ld\n", number);

	return (0);
}
