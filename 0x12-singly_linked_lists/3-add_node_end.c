#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 *
 * @head: pointer to list
 * @str: string
 *
 * Return: address, or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy;
	list_t *tmp = *head;
	unsigned int i;

	i = 0;
	while (str[i])
		i++;

	copy = malloc(sizeof(list_t));

	while (!copy)
		return (NULL);

	copy->str = strdup(str);
	copy->len = i;
	copy->next = NULL;

	if (*head == NULL)
	{
		*head = copy;
		return (copy);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = copy;
	return (copy);
}
