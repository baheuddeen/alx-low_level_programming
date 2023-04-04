#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: linked list head.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		head = head->next;
		free(current_node);
		current_node = head;
	}
}
