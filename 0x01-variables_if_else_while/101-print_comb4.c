#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *		  using putchar function
 *
 * Return: 0 Always
 */
int main(void)
{
	int hundreds, tens, unit;
	int comma = 0, space = 0;

	for (hundreds = 0; hundreds < 8; hundreds++)
	{
		for (tens = hundreds + 1; tens < 9; tens++)
		{
			for (unit = 1 + tens; unit < 10; unit++)
			{
				if (comma != 0 && space != 0)
				{
					putchar(comma);
					putchar(space);
				}
				putchar(hundreds + ('0' - 0));
				putchar(tens + ('0' - 0));
				putchar(unit + ('0' - 0));
				comma = 44, space = 32;	/* ASCII: 44 - ',' | 32 - SPC */
			}
		}
	}
	putchar('\n');

	return (0);
}
