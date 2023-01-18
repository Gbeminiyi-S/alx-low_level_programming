#include "lists.h"
/**
 * free_listint_safe - frees a listint_t linked list
 * @h: double pointer to start of the list
 *
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tortoise = *h, *hare = *h, *temp = *h;
	size_t isLoop = 0, nodes = 0;

	if (!(*h))
	{
		return (nodes);
	}
	while (tortoise && hare && hare->next)
	{
		/* Detecting if linked list is looped */
		tortoise = tortoise->next, hare = hare->next->next;
		if (hare == *h)
		{
			tortoise->next = NULL;
			free(tortoise);
			free(*h);
			return (2);
		}
		else if (tortoise == hare)
		{
			isLoop = 1;
			break;
		}
	}
	/* Removing the loop*/
	if (isLoop)
	{
		if (hare == *h)

		tortoise = *h;
		while (tortoise != hare)
		{
			tortoise = tortoise->next;
			hare = hare->next, nodes++;
		}
		hare->next = NULL;
	}
	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		nodes++;
	}
	return (nodes);
}
