#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: number
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return (_recursion_calc(n, 1));
}

/**
 * _recursion_calc - helper function to compute square root
 * @n: number
 * @num: square root
 *
 * Return: result
 */
int _recursion_calc(int n, int num)
{
		if (num * num == n)
		{
			return (num);
		}
		if (num * num > n)
		{
			return (-1);
		}
		return (_recursion_calc(n, num + 1));
}
