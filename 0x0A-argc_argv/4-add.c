#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers
 * @ac: argument count
 * @av: double pointer to argument
 *
 * Return: 0, if error, 1
 */
int main(int ac, char **av)
{
	int i, sum = 0;

	if (ac > 2)
	{
		while (ac != 1)
		{
			for (i = 0; av[ac - 1][i]; i++)
			{
				if (!isdigit(av[ac - 1][i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(av[ac - 1]);
			ac--;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
