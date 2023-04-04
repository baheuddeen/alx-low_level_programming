#include "lists.h"

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
