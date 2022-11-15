#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 Always
 */
int main(void)
{
	char number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");

	return (0);
}
