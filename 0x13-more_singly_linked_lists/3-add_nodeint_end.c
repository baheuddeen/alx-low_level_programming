#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t.
 * @head: linked list head.
 * @n: number.
 * Return: the address of the first node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL;
	listint_t *temp = NULL;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (!(*head))
	{
		(*head) = node;
		return (node);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;

	return (node);
}
