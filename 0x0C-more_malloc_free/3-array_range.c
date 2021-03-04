#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - make array from min to max
 * @min: minimum
 * @max: maximum
 * Return: ptr to array
 */
int *array_range(int min, int max)
{
	int i, low;
	int *p;

	low = min;
	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= (max - min))
	{
		p[i] = low;
		low++;
		i++;
	}
	return (p);
}
