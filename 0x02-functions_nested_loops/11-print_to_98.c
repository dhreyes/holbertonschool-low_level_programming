#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints numbers from n to 98
 * Return: none
 */
void print_to_98(int n)
{
	int i = 1;

	if (n > 98)
		i = -1;
	printf("%i", n);
	if (n != 98)
	{
		while (n != 98)
		{
			n = n + i;
			printf(", %i", n);
		}
	}
	printf("\n");
}
