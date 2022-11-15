#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 */
void print_alphabet_x10(void)
{
	char letter;
	int iteration = 0;

	while (iteration < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		iteration++;
		_putchar('\n');
	}
}
