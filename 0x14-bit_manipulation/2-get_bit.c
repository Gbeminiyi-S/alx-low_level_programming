#include "main.h"

/**
 * get_bit - finds the value of a bit at a given index
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index, else, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* the number of bits is depended on the datatype */
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
