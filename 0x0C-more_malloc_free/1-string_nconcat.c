#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_nconcat - Concatenate (combine) two strings to n
 * @s1: First string
 * @s2: Second string
 * @n: n bytes of s2
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3, *empt;
	int i, len1, len2, j;
	unsigned int count;

	count = 0;

	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	i = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0' && len2 < n)
	{
		len2++;
	}
	s3 = malloc(((len1 + n) * sizeof(*s3)) + 1);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2 && count < n)
	{
		s3[i] = s2[j];
		i++;
		j++;
		count++;
	}
	return (s3);
}
