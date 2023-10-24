#include "lists.h"

/**
 * sum_listint -  returns the sum of all the
 * data (n) of a listint_t linked list.
 *
 * @head: pointer
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
