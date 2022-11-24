#include "3-calc.h"

/**
 * main - performs simple arithmetic operations
 * @ac: argument count
 * @av: pointer to argument
 *
 * Return: 0 Always
 */
int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (av[2][1] || !get_op_func(av[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*(av[2]) == '/' || *(av[2]) == '%') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));

	return (0);
}
