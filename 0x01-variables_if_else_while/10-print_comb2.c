#include <stdio.h>
/**
 * main - possible combinations of single digits
 * Return: Always successful (0)
 */
int main(void)
{
	int d1, d2;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = 48; d2 <= 57; d2++)
		{
			putchar(d1);
			putchar(d2);
			if ((d1 != 57) || (d2 != 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
