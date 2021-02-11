#include "holberton.h"
/**
 *print_triangle - prints a triangle
 *@size - input of desired size of triangle
 *Return: 
 */
void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 1; x < (size - y); x++)
			{
				_putchar(' ');
			}
			for (; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
