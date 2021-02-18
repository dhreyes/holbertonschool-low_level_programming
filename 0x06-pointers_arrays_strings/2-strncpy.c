#include "holberton.h"
/**
 * *_strncpy - copies a string
 * @dest: first string waiting for attachment
 * @src: string to be attached
 * @n: n bytes
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
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
