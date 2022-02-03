#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: Structure
 * @key: key
 * @value: Value of the key
 * Return: 1 in success or 0 in failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node = NULL;
	hash_node_t *new_node = NULL;
	char *new_value = NULL;
	char *new_key = NULL;
	unsigned long int key_idx = 0;

	if (!ht || !key || !(ht->array))
		return (0);
	key_idx = key_index((const unsigned char *)key, ht->size);
	new_value = strdup(value);
	hash_node = ht->array[key_idx];
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			free(hash_node->value);
			hash_node->value = new_value;
			return (1);
		}
		hash_node = hash_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_key = strdup(key);
	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[key_idx];
	ht->array[key_idx] = new_node;
	return (1);
}
