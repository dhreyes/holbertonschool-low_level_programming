#include "holberton.h"
/**
 * *_memset - fills first n bytes pointed by s with b
 * @dest: string copied to here
 * @src: string to copy
 * @n: copies n bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
	n--;
	}
	return (dest);
}
