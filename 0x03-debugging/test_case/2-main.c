#include "main.h"
#include <stdio.h>

/**
* main - prints the largest of 3 numbers
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	a = 98;
	b = 98;
	c = 1;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
