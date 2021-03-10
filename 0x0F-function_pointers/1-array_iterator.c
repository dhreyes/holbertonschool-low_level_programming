#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - uses function ptr to iterate array
 * @array: array to be iterated
 * @size: size of array
 * @action: ptr to function
 * Return: elements of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	idx = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (idx < size)
		{
			action(array[idx]);
			idx++;
		}
	}
}
