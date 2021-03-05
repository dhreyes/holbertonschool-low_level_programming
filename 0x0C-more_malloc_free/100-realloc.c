#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - free up old space allocate new space
 *@ptr: ptr to return with new size
 *@old_size: name says it all
 *@new_size: ditto
 *Return: ptr to new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
