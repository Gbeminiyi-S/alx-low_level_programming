#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the list's head or start
 *
 * Return: the address of the node where the loop starts, else, NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;
	int met = 0;

	if (!head)
		return (NULL);
	hare = head;
	tortoise = head;
	while (hare && tortoise && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			met = 1;
			break;
		}
	}
	if (!met)
		return (NULL);
	tortoise = head;
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (tortoise);
}
