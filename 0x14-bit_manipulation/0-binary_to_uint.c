#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, else 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int sum = 0, i = 0;

	if (!b)
	{
		return (0);
	}
	for (len = 0; b[len]; len++)
		;
	for (; len > 0; len--)
	{
		if (b[len - 1] == '0' || b[len - 1] == '1')
		{
			sum += ((b[len - 1] - '0') << i);
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (sum);
}

