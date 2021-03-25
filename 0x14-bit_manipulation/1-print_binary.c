#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 */
void print_binary(unsigned long n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if ((n >> 1) != 0)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
