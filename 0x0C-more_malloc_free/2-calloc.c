#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - malloc but with 0s
 * @nmemb: length
 * @size: size of variable to store
 * Return: ptr to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
