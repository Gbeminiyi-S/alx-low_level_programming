#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: pointer to the start of list
 *
 * Return: sum, else, 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
	unsigned int sum = 0;

	if (head == NULL)
		;
	else
	{
		temp = head;
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}

