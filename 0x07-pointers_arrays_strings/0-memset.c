#include "holberton.h"
/**
 * *_memset - fills first n bytes pointed by s with b
 * @s: pointer
 * @b: constant byte
 * @n: amount of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n - 1] = b;
	n--;
	}
	return (s);
}
