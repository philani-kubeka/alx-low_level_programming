#include "lists.h"

/**
 * free_listint2 - fres list
 *
 * @head: pointer
 *
 * Return: always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;
	while (*head)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
