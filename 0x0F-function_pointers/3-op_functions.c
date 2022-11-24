#include "3-calc.h"

/**
 * op_add - computes the sum of a and b
 * @a: integer a
 * @b: integer b
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference between a and b
 * @a: integer a
 * @b: integer b
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: integer a
 * @b: integer b
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: integer a
 * @b: integer b
 *
 * Return: the quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the remainder of the division of a by b
 * @a: integer a
 * @b: integer b
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
