#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  that prints all the elements of a list_t list.
 * @h: linked list to print;
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
