#include "holberton.h"
/**
 *puts_half - prints half a string
 *@pointer: input from function
 *Return: reversed string
 */

int string_length(char *pointer);
void puts_half(char *str)
{
	int l, n;

	n = 0;
	l = string_length(str);
	n = (l - 1) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

/**
 *string_length - finds length of a string
int string_length(char *pointer)
 *@pointer: pointer
 *Return: c
 */

int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
		c++;

	return (c);
}
