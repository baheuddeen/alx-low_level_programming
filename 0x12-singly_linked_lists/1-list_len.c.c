#include <stdio.h>
#include "lists.h"

/**
 * list_len - get the number of elements in a linked list_t list.
 * @h: linked list to print;
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
