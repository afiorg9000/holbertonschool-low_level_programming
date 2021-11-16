#include "lists.h"

/**
 * pop_listint - deletes the head node of list.
 * @head: pointer to pointer of head.
 * Return: head of nodes data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);

	return (data);
}
