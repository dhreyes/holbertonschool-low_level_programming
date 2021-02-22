#include "holberton.h"
/**
 * *_strchr - matches char with string
 * @s: input string
 * @c: character to match
 * Return: null or char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
