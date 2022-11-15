#include "main.h"

/**
 * main - prints 1 - 100
 *
 * Description: prints the numbers from 1 to 100, but for multiples
 *			of three print Fizz instead of the number and for the
 *			multiples of five print Buzz. For numbers which are multiples
 *			of both three and five print FizzBuzz.
 *
 * Return: 0 Always
 */
int main(void)
{
	int number;

	for (number = 1; number < 100; number++)
	{
		if (number % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", number);
		}
	}
	printf("Buzz\n");

	return (0);
}
