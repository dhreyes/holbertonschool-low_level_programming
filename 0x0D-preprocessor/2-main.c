#include <stdio.h>
/**
 * compilefrom - prints where it was compiled from
 * Return: Always 0 (Success)
 */
int compilefrom(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
