#include <stdio.h>
#include "lists.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t head = {"Best", 4, 0};
	size_t n;

	n = print_list(&head);
	printf("-> %lu elements\n", n);
	return (0);
}
