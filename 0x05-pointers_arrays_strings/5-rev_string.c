#include "holberton.h"
/**
 *rev_string - reverses string
 *@pointer: input from function
 *Return: reversed string
 */

int string_length(char *pointer);
void rev_string(char *s)
{
	int l, c;
	char *begin, *end, temp;

	l = string_length(s);
	begin = s;
	end = s;

	for (c = 0; c < l - 1; c++)
		end++;

	for (c = 0; c < (l / 2); c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
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
