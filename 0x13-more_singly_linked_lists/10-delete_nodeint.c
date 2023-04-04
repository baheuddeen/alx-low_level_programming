#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: head of the list.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = NULL;
	listint_t *node_idx = NULL;

	if (!*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
		return (1);
	}
	else
		node_idx = get_nodeint_at_index(*head, index - 1);

	if (!node_idx)
	{
		return (-1);
	}

	temp_node = node_idx->next;
	node_idx->next = temp_node->next;
	free(temp_node);

	return (1);
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
