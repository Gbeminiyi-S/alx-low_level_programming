#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the start of list
 * @idx: is the index of the list where the new node should be added
 * @n: new node data
 *
 * Description: if it is not possible to add the new node at index idx,
 *			do not add the new node and return NULL
 * Return: the address of the new node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL, *new_node = NULL;

	if (*head || (!(*head) && idx == 0))
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = NULL;

		if (!(*head) && idx == 0)
			return new_node;

		temp = *head;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}

		while (idx != 1 && temp)
		{
			temp = temp->next;
			idx--;
		}
		if (idx == 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}

