#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: pointer
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a_head, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		a_head = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = a_head;
	}

	(*head)->next = behind;

	return (*head);
}
