#include <stdio.h>
/**
 * main - possible combinations of single digits
 * Return: Always successful (0)
 */
int main(void)
{
	int dg;

	for (dg = 48; dg <= 57; dg++)
	{
	putchar(dg);
	if (dg < 57)
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
