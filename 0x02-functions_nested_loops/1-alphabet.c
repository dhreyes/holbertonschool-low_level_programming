#include "holberton.h"
/**
 * print_alphabet - print alphabet in lowercase
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
