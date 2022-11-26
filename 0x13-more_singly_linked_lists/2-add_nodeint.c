#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the start of list
 * @n: node data
 *
 * Return: the address of the new element, else, NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *temp = NULL;

	if (!ptr)
	{
		return (NULL);
	}
	ptr->n = n;
	if (head == NULL)
	{
		ptr->next = NULL;
	}
	else
	{
		temp = *head;
		*head = ptr;
		(*head)->next = temp;
	}
	return (ptr);
}

