#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: list
 * Return void.
 */

void free_listint(listint_t *head)
{
	listint_t *pointer;

	while (head != NULL)
	{
		pointer = head->next;
		free(head);
		head = pointer;
	}
}
