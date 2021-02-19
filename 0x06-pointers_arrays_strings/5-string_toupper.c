#include "holberton.h"
/**
 * *string_toupper - converts string to upper case
 * @c: input
 * Return: something at the moment
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != 0)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
