#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - function that gives the index of a key
 * @key: key of hash table
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t hash;

	hash = hash_djb2(key);
	return (hash % size);
}
