#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of lists
 *
 * @head: pointer
 * @n: integer
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));

	if (!*head)
		return (NULL);

	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
