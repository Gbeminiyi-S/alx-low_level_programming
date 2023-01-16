#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to start of the list
 *
 * Return: number of nodes in the list, else, exit(98)i
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head, *temp = head;
	size_t isLoop = 0, nodes = 0;

	if (!head)
		printf("0\n"), exit(98);
	while (tortoise && hare && hare->next)
	{	/* Detecting if linked list is looped */
		tortoise = tortoise->next, hare  = hare->next->next;
		if (tortoise == hare)
		{
			isLoop = 1;
			break;
		}
	}
	/* if linked list is not looped */
	if (!isLoop)
	{
		while (temp)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next, nodes++;
		}
		return (nodes);
	}
	/* if linked list is looped */
	while (temp != tortoise)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next, nodes++;
	}
	tortoise = head;
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		printf("[%p] %d\n", (void *)hare, hare->n);
		hare = hare->next, nodes++;
		if (tortoise == hare)
			printf("-> [%p] %d\n", (void *)hare, hare->n);
	}
	return (nodes);
}
