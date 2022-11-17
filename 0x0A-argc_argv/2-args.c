#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @ac: argument count
 * @av: double pointer to argument
 *
 * Return: 0 Always
 */
int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}

	return (0);
}
