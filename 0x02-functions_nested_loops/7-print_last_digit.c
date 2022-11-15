#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int modulus = num % 10;

	if (modulus < 0)
	{
		modulus *= -1;
	}

	_putchar(modulus + ('0' - 0));

	return (modulus);
}
