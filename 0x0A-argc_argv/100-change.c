#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 *	for an amount of money
 * @ac: argument count
 * @av: double pointer to argument
 *
 * Return: 0, if error, 1
 */
int main(int ac, char **av)
{
	int money, i = 0, number = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (ac == 2)
	{
		money = atoi(av[1]);

		while (money)
		{
			if (money >= coin[i])
			{
				number += money / coin[i];
				if (money / coin[i] == 0)
				{
					return (0);
				}
				else
				{
					money %= coin[i];
				}
			}
			i++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", number);

	return (0);
}
