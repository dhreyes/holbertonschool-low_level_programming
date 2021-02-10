#include "holberton.h"
/**
 * main - print Holberton
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	char h[9] = "Holberton";

	for (x = 0; x < 9; x++)
	{
		_putchar(h[x]);
	}
	_putchar('\n');

	return (0);
}
