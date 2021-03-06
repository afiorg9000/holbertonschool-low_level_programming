#include "lists.h"

/**
 * pop_listint - deletes the head node of list.
 * @head: pointer to pointer of head.
 * Return: head of nodes data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if ((head == NULL) || (*head == NULL))
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
