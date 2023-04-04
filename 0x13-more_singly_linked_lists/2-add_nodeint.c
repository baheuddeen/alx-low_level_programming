#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t.
 * @head: linked list head.
 * @n: number.
 * Return: the address of the first node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}

	node->next = (*head);
	if ((*head))
	{
		node->n = (*head)->n;
	}

	(*head) = node;
	(*head)->n = n;

	return ((*head));
}
