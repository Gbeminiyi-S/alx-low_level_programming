#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: integer
 *
 * Return: absolute value of num
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-1 * num);
	}
	else
	{
		return (num);
	}
}
