#include "main.h"

/**
 * factorial - computes the factorial of an integer
 * @n: integer
 *
 * Return: result
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
	return (-1);
}
