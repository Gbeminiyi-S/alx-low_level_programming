#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the start of list
 * @n: node data
 *
 * Return: the address of the new element, else, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!ptr)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}
