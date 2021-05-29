#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - function to retrieve value associated with key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with element, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t idx;
	hash_node_t *change_node = NULL;

	if (strcmp(key, "") == 0)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	change_node = ht->array[idx];

	while (change_node)
	{
		if (strcmp(change_node->key, key) == 0)
			return (change_node->value);
		change_node = change_node->next;
	}
	return (NULL);
}
