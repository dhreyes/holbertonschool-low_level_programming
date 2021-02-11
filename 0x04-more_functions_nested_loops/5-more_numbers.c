#include "holberton.h"
/**
 *more_numbers - prints 0 to 14, 10x
 *@i - number 
 *Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int c = 0;
	
	while (c <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		c++;
	}
}
