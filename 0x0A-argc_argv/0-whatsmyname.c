#include <stdio.h>

/**
 * main - prints the program name
 * @ac: argument count
 * @av: double pointer to argument
 *
 * Return: 0 Always
 */
int main(int ac __attribute__((unused)), char **av)
{
	printf("%s\n", av[0]);

	return (0);
}
