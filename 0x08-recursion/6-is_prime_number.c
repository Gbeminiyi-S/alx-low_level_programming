#include "main.h"

/**
 * is_prime_number - checks integer is a prime number
 * @n: integer
 *
 * Return: 1 if prime, else, 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n < 2 || n % 2 == 0)
	{
		return (0);
	}
	return (_recursion_check(n, 3));
}

/**
 * _recursion_check - helper function to check if prime
 * @n: number
 * @num: helper integer
 *
 * Return: 1 if prime, else, 0
 */
int _recursion_check(int n, int num)
{
		if (num > n / 2)
		{
			return (1);
		}
		if (n % num == 0)
		{
			return (0);
		}
		return (_recursion_check(n, num + 2));
}
