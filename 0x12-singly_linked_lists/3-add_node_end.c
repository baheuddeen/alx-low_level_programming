#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t.
 * @head: linked list head.
 * @str: string.
 * Return: the address of the first node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL;
	list_t *temp = NULL;

	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
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
