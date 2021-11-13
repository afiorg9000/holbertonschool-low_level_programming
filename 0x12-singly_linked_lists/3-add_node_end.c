#include "lists.h"
#include <string.h>
/**
 * add_node_end - adsds node to list
 * @head: beggining of list
 * @str: string to be added to list
 * Return: returns pointer to added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *last;
	int i = 0;

	last = *head;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);


	if (str == NULL)
	{
		temp->str = NULL;
		temp->len = 0;
	}
	else
	{
		temp->str = strdup(str);
		while (str[i])
		{
			i++;
		}
		temp->len = i;
	}
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}
	return (*head);
}


