#include "holberton.h"
/**
 *_puts - prints string followed by new line
 *@str: input to print
 *Return: string
 */
void _puts(char *str)
{
	int s;

	for (s = 0; *(str + s) != '\0'; s++)
		_putchar(*(str + s));
	_putchar('\n');
}
