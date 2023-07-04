#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 *	get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_opr = n ^ m;
	unsigned int count = 0;

	while (xor_opr != 0)
	{
		if (xor_opr & 1)
			count++;
		xor_opr >>= 1;
	}
	return (count);
}
