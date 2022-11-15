#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start value
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 99)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 97)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}

