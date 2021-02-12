#include "holberton.h"
/**
 *print_number - print integer in characters
 *@n: input for test
 *
 *Return: none
 */
void print_number(int n)
{
	unsigned int ni;

	if (n < 0)
	{
		_putchar('-');
		ni = -n;
	}
	else
		ni = n;

	if (ni / 10 != 0)
		print_number(ni / 10);
	_putchar(ni % 10 + '0');
}
