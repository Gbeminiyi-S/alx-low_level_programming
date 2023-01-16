#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the list's head or start
 *
 * Return: the address of the node where the loop starts, else, NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listine_t *hare, *tortoise;
	bool met = False;

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
			met = True;
			break;
		}
	}
	if (not met)
		return (NULL);
	tortoise = head;
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (tortoise);
}
