#include "main.h"

/**
 * times_table - prints 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, product;
	int comma, space;

	for (i = 0; i < 10; i++)
	{
		comma = 0, space = 0;

		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (comma != 0 && space != 0)
			{
				_putchar(comma);
				_putchar(space);
			}
			if (product < 10)
			{
				_putchar(32);
				_putchar(product + ('0' - 0));
			}
			else
			{
				_putchar((product / 10) + ('0' - 0));
				_putchar((product % 10) + ('0' - 0));
			}
			comma = 44, space = 32;	/* ASCII: 44 - ',' | 32 - SPC */
		}
		_putchar('\n');
	}
}
