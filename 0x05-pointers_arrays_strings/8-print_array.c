#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print a number of items in an array of integers
 * @a: array to print
 * @n: number of items from array
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
