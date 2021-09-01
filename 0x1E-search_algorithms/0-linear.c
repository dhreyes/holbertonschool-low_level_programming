#include "search_algos.h"

/**
 * linear_search - search for value in array of integers using
 * Linear search algorithm.
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is, else  -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array != NULL)
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
			if (array[index] == value)
				return (index);
		}
	return (-1);
}
