#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert at index.
 * @head: head.
 * @idx: indext.
 * @n: value.
 * Return: the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_idx = NULL;
	listint_t *new_node = NULL;

	if (!*head || n < 0)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	if (idx == 0)
	{
		add_nodeint(head, n);
		return (new_node);
	}
	else
		node_idx = get_nodeint_at_index(*head, idx - 1);

	if (!node_idx)
	{
		return (NULL);
	}

	new_node->next = node_idx->next;
	new_node->n = n;

	node_idx->next = new_node;

	return (new_node);
}

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head.
 * @index: index of the node, starting at 0.
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp_node = NULL;

	if (!head)
	{
		return (NULL);
	}

	temp_node = head;
	while (temp_node)
	{
		if (counter == index)
		{
			return (temp_node);
		}
		temp_node = temp_node->next;
		counter++;
	}
	return (NULL);
}



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
