#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	int power;
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number *= -1;
	}

	power = power_integer(number);

	while (power != 0)
	{
		_putchar((number / power) % 10 + ('0' - 0));
		power /= 10;
	}
}

/**
 * power_integer - comnputes the multiples of 10 of an integer
 * @n: integer
 *
 * Return: result
 */
int power_integer(unsigned int n)
{
	int multiplier = 1, power = 1;

	while (n != 0)
	{
		power *= multiplier;
		n /= 10;
		multiplier = 10;
	}
	return (power);
}
