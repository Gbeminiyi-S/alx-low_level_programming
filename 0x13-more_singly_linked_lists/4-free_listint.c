#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: double pointer to the start of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head, *next = NULL;

	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
