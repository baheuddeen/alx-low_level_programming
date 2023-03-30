#include <stdio.h>
#include "lists.h"

/**
 * print_list -  that prints all the elements of a list_t list.
 * @h: linked list to print;
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
