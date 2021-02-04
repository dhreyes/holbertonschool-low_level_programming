#include <stdio.h>
/**
 * main - possible combinations of single digits
 * Return: Always successful (0)
 */
int main(void)
{
	char dg;

	for (dg = '0'; dg <= '9'; dg++)
		putchar(dg);
			if (dg <= '9')
				putchar(',');
				putchar(' ');
	
	putchar('\n');

	return (0);
}
