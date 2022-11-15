#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	int i, j;
	int comma = 0, space = 0;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (comma != 0 && space != 0)
			{
				putchar(comma);
				putchar(space);
			}
			putchar((i / 10) + ('0' - 0));
			putchar((i % 10) + ('0' - 0));
			putchar(' ');
			putchar((j / 10) + ('0' - 0));
			putchar((j % 10) + ('0' - 0));
			comma = 44, space = 32;	/* ASCII: 44 - ',' | 32 - SPC */
		}
	}
	putchar('\n');

	return (0);
}
