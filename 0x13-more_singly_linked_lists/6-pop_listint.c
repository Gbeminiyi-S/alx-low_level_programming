#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the start of list
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = temp;

		return (data);
	}
	return (1);
}

