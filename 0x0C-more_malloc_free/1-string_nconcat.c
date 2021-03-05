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
	unsigned int i, len1, j, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	count = (len1 + n) * sizeof(char);
	s3 = malloc(count + 1);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < count && s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < count && s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
