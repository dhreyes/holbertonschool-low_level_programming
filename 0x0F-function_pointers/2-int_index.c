#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - checks array for matching integer
 * @array: array of int
 * @size: size of array
 * @cmp: ptr to function that compares integers
 * Return: -1 if no element matches, -1 if size <= 0 or array is NULL, else idx
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	idx = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (idx < size)
	{
		if (cmp(array[idx]) != 0)
			return (idx);
		idx++;
	}
	return (-1);
}
