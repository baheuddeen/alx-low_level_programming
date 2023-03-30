#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t.
 * @head: linked list head.
 * @str: string.
 * Return: the address of the first node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}
	node->next = (*head);
	if ((*head))
	{
		node->str = (*head)->str;
		node->len = (*head)->len;
	}

	(*head) = node;
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);

	return ((*head));
}
