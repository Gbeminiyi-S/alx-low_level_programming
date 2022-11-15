#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int number;
	int iteration = 0;

	while (iteration < 10)
	{
		for (number = 0; number < 15; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + ('0' - 0));
			}
			_putchar((number % 10) + ('0' - 0));
		}
		iteration++;
		_putchar('\n');
	}
}
