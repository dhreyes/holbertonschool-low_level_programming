#include "holberton.h"
/**
 * _puts_recursion - uses puts recursively
 * @s: string to use puts
 * Return: 0 if success
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
