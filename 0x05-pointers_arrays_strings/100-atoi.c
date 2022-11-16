#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int integer = 0;
	int i, power;

	power = power_integer(s);

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			integer += (s[i] + (0 - '0')) * power;
			power /= 10;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	return (sign_integer(s) * integer);
}
/**
 * sign_integer - computes the sign of the integer
 * @s: pointer to string to be converted to integer
 *
 * Return: integer sign
 */
int sign_integer(char *s)
{
	int sign = 1, i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;

			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				break;
		}
	}
	return (sign);
}
/**
 * power_integer - computes the multiple of 10 of the integer
 * @s: pointer to string to be converted to integer
 *
 * Return: result
 */
int power_integer(char *s)
{
	int i, multiplier = 1, power = 1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			power *= multiplier;
			multiplier = 10;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	return (power);
}
