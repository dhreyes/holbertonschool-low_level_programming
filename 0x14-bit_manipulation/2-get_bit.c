#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - gets value of bit at index
 * @n: number
 * @index: index of bit to use
 * Return: bit, else -1
 */
int get_bit(unsigned long n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}
