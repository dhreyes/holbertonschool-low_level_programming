#include "holberton.h"
/**
 *print_diagonal - prints a diagonal line on the terminal
 *@n: number of times \ should be printed
 *Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
