#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to start of the list
 *
 * Return: number of nodes in the list, else, exit(98)
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head, *temp = head;
	size_t isLoop = 0, i = 0;

	if (!head)
	{
		printf("0\n");
		exit(98);
	}
	while (slow && fast && fast->next)
	{	/* Detecting if linked list is looped */
		slow = slow->next, fast  = fast->next->next;
		if (slow == fast)
		{
			slow = slow->next, isLoop = 1;
			break;
		}
	}
	if (!isLoop) /* if linked list is not looped */
	{
		while (temp)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			i++;
		}
		return (i);
	}
	while (temp)
	{	/* if linked list is looped */
		i++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (slow == temp)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			return (i);
		}
		else
			temp = temp->next;
	}
	exit(98);
}
