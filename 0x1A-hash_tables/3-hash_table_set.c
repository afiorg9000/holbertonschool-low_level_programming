#include "hash_tables.h"

/**
 * hash_table_set- function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (strlen(key) == 0 || ht->size < 1)
		return 0;

	int index = hash(key);

	node_t* newNode = malloc(sizeof(*newNode));

	if (newNode == NULL)
	{
		return 0;
	}

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
	newNode->next=NULL;
	}
	else
	{
		newNode->next = ht->array[index];
		ht->array[index]=newNode;
}

