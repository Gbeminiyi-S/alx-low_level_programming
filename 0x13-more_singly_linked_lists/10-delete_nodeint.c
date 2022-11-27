#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: double pointer to the start of list
 * @index: index is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, else, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL, *node = NULL;

	if (*head == NULL)
		;
	else
	{
		temp = *head;
		if (index == 0)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
			return (1);
		}

		while (index != 1 && temp)
		{
			temp = temp->next;
			index--;
		}
		if (index == 1)
		{
			node = temp->next;
			temp->next = node->next;
			free(node);

			return (1);
		}
	}
	return (-1);
}

