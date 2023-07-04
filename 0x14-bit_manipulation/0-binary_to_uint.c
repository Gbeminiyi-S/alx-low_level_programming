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

	/* check if b is not null */
	if (!b)
		return (0);

	/* calculate the length of the string */
	for (len = 0; b[len]; len++)
		;
	/* loop through the string and compute*/
	for (len -= 1; len >= 0; i++, len--)
	{
		if (b[i] == '0' || b[i] == '1')
			sum += ((b[i] - '0') << len);
		else
			return (0);
	}
	return (sum);
}
