#include <stdio.h>

/**
 * main - prints the numbers of base 16 in lowercase
 *
 * Return: 0 Always
 */
int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
