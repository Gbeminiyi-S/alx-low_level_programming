#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer to the linked list;
 * @idx: index of the list where the new node should be added
 * @n: node value
 * Return: address of the new node, else, NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else if (idx > 0)
	{
		while (idx != 1)
		{
			if (ptr == NULL)
				return (NULL);
			ptr = ptr->next;
			idx--;
		}
		node->next = ptr->next;
		ptr->next = node;
	}

	return (node);
}
