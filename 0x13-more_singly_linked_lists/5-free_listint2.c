#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: linked list head.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node = (*head);

	if(!head)
		return (NULL);

	while (current_node != NULL)
	{
		*head = (*head)->next;
		free(current_node);
		current_node = *head;
	}
	*head = NULL;
}
