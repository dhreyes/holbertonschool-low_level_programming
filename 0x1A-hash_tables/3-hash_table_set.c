#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that adds element to hash table
 * @ht: hash table to add or update to
 * @key: key of hash table
 * @value: value associated with the key
 * Return: 1 if success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t idx;
	hash_node_t *node = NULL, *change_node;

	if (!ht || !key || !value)
		return (0);

	if (strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	change_node = ht->array[idx];

	while (change_node && strcmp(key, change_node->key) != 0)
	{
		change_node = change_node->next;
	}

	if (change_node)
	{
		free(change_node->value);
		change_node->value = strdup(value);
	}
	else
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}
	return (1);
}
