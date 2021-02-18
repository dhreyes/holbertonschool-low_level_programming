#include "holberton.h"
/**
 * *_strcat - concatenates 
 * @dest: first string waiting for attachment
 * @src: string to be attached
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char* ptr = dest + _strlen(dest);

	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';
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
