#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary input
 * Return: result of conversion, else 0
 */
unsigned int binary_to_uint(const char *b)
{
	int strlen = 0;
	int i = 0;
	int end;
	int j = 0;
	int bit = 0;
	int result = 0;


	if (b == NULL)
	{
		return (0);
	}


	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			strlen++;
			i++;
		}
	}

	end = strlen - 1;
	while(end >= 0)
	{
		if (b[end] == '0')
		{
			bit = 0;
		}
		else
		{
			bit = 1;
		}
		result += bit<<j;
		end--;
		j++;
	}
	return (result);
}
