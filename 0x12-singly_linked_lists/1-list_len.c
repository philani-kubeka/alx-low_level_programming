#include "lists.h"

/**
 * list_len - prints number of elements in a linked list_t list.
 *
 * @h: list
 *
 * Return:  number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
