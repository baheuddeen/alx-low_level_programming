#include <stdio.h>
#include "lists.h"

/**
 * listint_len - get the number of elements in a linked list_t list.
 * @h: linked list to print;
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
