#include "holberton.h"
/**
 * times_table - prints the multiplacation table with magic
 * Return: none
 */
void times_table(void)
{
	int x, y, z, next;

	for (x = 0; x < 10; x++)
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			next = x * (y + 1);
			if (z < 10)
			{
				_putchar(z + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
					if (next < 10)
						_putchar(' ');
				}
			}
			else
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (y == 9)
				_putchar('\n');
		}
}
