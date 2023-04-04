#include "lists.h"

/**
 * sum_listint - returns the sum of list elemnts.
 * @head: head.
 * Return: the sum.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp_node = NULL;

	if (!head)
	{
		return (sum);
	}

	temp_node = head;
	while (temp_node)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}
	return (sum);
}
