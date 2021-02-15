#include "holberton.h"
/**
 *print_rev - prints string in reverse
 *@s: input to print
 *Return: string in reverse
 */
void print_rev(char *s)
{
	int str;

	for (str = 0; *(str + s) != '\0'; str++)
		;
	while (str > 0)
	{
		str--;
		_putchar(*(str + s));
	}
	_putchar('\n');
}
