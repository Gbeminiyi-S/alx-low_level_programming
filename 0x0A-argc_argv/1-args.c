#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @ac: argument count
 * @av: double pointer to argument
 *
 * Return: 0 Always
 */
int main(int ac, char **av __attribute__((unused)))
{
	printf("%i\n", ac - 1);

	return (0);
}
