#include "holberton.h"

/**
 *print_line - draws a straight line in terminal
 *@n: length of line in '_'
 *Return: none
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
