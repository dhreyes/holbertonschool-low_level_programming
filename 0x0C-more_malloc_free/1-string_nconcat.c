#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Concatenate (combine) two strings to n
 * @s1: First string
 * @s2: Second string
 * @n: n bytes of s2
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, len1, len2, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0' && len2 < n)
	{
		len2++;
	}
	if (n >= len2)
		s3 = malloc((len1 + len2 + 1) * sizeof(char));
	else
		s3 = malloc((len1 + n + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
