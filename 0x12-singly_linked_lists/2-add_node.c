#include "lists.h"

/**
 * add_node - adds node at beginning of list
 *
 * @head: pointer to ist
 * @str: string to add
 *
 * Return: address or new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *copy;
	unsigned int i;

	i = 0;
	while (str[i])
		i++;

	copy = malloc(sizeof(list_t));

	while (!copy)
		return (NULL);

	copy->str = strdup(str);
	copy->len = i;
	copy->next = (*head);
	(*head) = copy;
	return (copy);
}
