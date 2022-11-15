#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *		  using putchar function
 *
 * Return: 0 Always
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + ('0' - 0));
	}
	putchar('\n');

	return (0);
}
