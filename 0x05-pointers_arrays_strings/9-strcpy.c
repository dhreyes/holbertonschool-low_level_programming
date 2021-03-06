#include <stdio.h>
/**
 * *_strcpy - Copy given string
 * @dest: Location for copy
 * @src: String to copy
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i); /* Added this for null fix */
	return (dest);
}
