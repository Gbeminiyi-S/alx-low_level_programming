#include "main.h"

/**
 * set_bit - finds the value of a bit to 1 at a given index
 * @n: pointer to a number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, else, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* the number of bits is depended on the datatype */
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
