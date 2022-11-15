#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *		  using putchar function
 *
 * Return: 0 Always
 */
int main(void)
{
	int tens, unit;
	int comma, space;

	for (tens = 0; tens < 9; tens++)
	{
		for (unit = 1 + tens; unit < 10; unit++)
		{
			putchar(comma);
			putchar(space);
			putchar(tens + ('0' - 0));
			putchar(unit + ('0' - 0));
			comma = 44, space = 32;	/* ASCII: 44 - ',' | 32 - SPC */
		}
	}
	putchar('\n');

	return (0);
}
