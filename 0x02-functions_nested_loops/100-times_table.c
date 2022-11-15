#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0
 * @n: stop value
 *
 * Description: If n is greater than 15 or less than 0, print nothing
 */
void print_times_table(int n)
{
	int i, j, product;
	int comma, space;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i < n + 1; i++)
	{
		comma = 0, space = 0;

		for (j = 0; j < n + 1; j++)
		{
			product = i * j;

			if (comma != 0 && space != 0)
			{
				_putchar(comma);
				_putchar(space);
				if (product < 100)
				{
					_putchar(space);
					if (product < 10)
						_putchar(space);
				}
			}
			if (product < 10)
				_putchar(product + ('0' - 0));
			else
			{
				if (product > 99)
					_putchar((product / 100) + ('0' - 0));
				_putchar((product / 10) % 10 + ('0' - 0));
				_putchar((product % 10) + ('0' - 0));
			}
			comma = 44, space = 32;	/* ASCII: 44 - ',' | 32 - SPC */
		}
		_putchar('\n');
	}
}
