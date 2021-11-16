#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * The function sets the head to NULL
 * @head: list
 * Return void.
 */

void free_listint2(listint_t **head)
{
	listint_t *pointer;
	
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		pointer = *head;
		*head = pointer->next;
		free(pointer);
	}
}
