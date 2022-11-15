#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int power, temp;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	temp = n;

	power = power_number(temp);

	while (power != 1)
	{
		_putchar(((temp / power) % 10) + ('0' - 0));
		power /= 10;
	}
	_putchar((temp % 10) + ('0' - 0));
}
/**
 * power_number - finds the multiple of 10 of an integer
 * @n: integer
 *
 * Return: result
 */
int power_number(unsigned int n)
{
	int power = 1;

	while (n > 9)
	{
		n /= 10;
		power *= 10;
	}
	return (power);
}
