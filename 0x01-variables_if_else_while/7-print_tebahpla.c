#include <stdio.h>

/**
 * main - prints the alphabets in lowercase in reverse
 *
 * Return: 0 Always
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
