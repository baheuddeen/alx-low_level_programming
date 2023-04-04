#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * return head node’s.
 * @head: linked list head.
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head) 
{
    listint_t *first = NULL;
    int temp_n = 0;

    first = (*head)->next;
    temp_n = (*head)->n;

    (*head)->n = first->n;
    (*head)->next = first->next;
    
    free(first);
    return (temp_n);
}
