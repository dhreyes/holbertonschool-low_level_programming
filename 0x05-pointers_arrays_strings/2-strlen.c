#include "holberton.h"
/**
 *_strlen - provides length of string
 *@s: input for string
 *Return: length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
		;

	return (len);
}
