#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - checks if malloc fails or not
 * @b: int to check
 * Return: 98 if null, else *p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit (98);
	return (p);
}
