#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n / 2 == 0)
	{
		printf("%ld", n % 2);
	}
	else
	{
		print_binary(n / 2);
		printf("%ld", n % 2);
	}
}
