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

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		money = atoi(av[1]);

		if (money < 0)
		{
			printf("0\n");
			return (0);
		}
		while (money)
		{
			if (money >= coin[i])
			{
				number += money / coin[i];
				if (money / coin[i] == 0)
				{
					break;
				}
				else
				{
					money %= coin[i];
				}
			}
			i++;
		}
	}
	printf("%d\n", number);
	return (0);
}
