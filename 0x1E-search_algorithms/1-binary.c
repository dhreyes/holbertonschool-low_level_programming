#include "search_algos.h"


/**
 * print_sub_array - prints elements of an array between left and right
 * array: array from which to print
 * left: left most index
 * right: right most index
 */

void print_sub_array(int *array, int left, int right)
{
	if (left <= right)
	{
		printf("Searching in array: %d", array[left]);
		for (left++; left <= right; left++)
			printf(", %d", array[left]);
		printf("\n");
	}
}

/**
 * binary_search - search for value in array of integers using
 * binary search
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: The index where value is located, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;

	if (array != NULL)
	{
		print_sub_array(array, left, right);
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (array[mid] < value)
			{
				left = mid + 1;
				print_sub_array(array, left, right);
			}
			else if (array[mid] > value)
			{
				right = mid - 1;
				print_sub_array(array, left, right);
			}
			else
				return (mid);
		}
	}
	return (-1);
}
