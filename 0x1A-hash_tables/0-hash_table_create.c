#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function to create a hash table
 * @size: size of array for hash table
 * Return: pointer to new hash table, else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	size_t idx;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;

	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
	{
		table->array[idx] = NULL;
	}

	return (table);
}
