#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the start of list
 * @str: node data
 *
 * Return: the address of the new element, else, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *temp = NULL;

	if (!ptr)
	{
		return (NULL);
	}
	ptr->len = strlen(str);
	ptr->str = strdup(str);
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

