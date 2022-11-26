#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the start of list
 *
 * Description: frees a listint_t list and sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *next = NULL;

	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
