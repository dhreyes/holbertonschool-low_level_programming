#include "holberton.h"
/**
 * *_strncat - concatenates 
 * @dest: first string waiting for attachment
 * @src: string to be attached
 * @n: n bytes
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i = _strlen(dest);

	while (count < n && *(src + count) != '\0')
	{
		dest[i] = src[count];
		i++;
		count++;
	}
	return (dest);
}
/**
 * _strlen - calc length of string
 * @str: input of string
 * Return: index
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
