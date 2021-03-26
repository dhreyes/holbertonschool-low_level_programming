#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - gets value of bit at index and changes to 1
 * @n: number
 * @index: index of bit to use
 * Return: bit, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n ^= (1 << index);
	return (1);
}
