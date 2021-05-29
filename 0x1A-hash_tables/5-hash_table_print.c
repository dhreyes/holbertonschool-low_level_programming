#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t idx = 0;
	int flag = 0;
	hash_node_t *change_node;

	if (ht)
	{
		printf("{");
		while (idx < ht->size)
		{
			change_node = ht->array[idx];
			while (change_node)
			{
				if (flag == 0)
				{
					printf("\'%s\': \'%s\'", change_node->key, change_node->value);
					flag = 1;
				}
				else
					printf(", \'%s\': \'%s\'", change_node->key, change_node->value);
				change_node = change_node->next;
			}
			idx++;
		}
		printf("}\n");
	}
}
