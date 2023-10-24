#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: pointer
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (i);
}
