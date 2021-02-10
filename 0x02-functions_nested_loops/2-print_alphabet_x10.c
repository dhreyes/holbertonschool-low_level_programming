#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase x10
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int x;
	char al;

	while (x++ < 10)
	{
	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
	}
}
