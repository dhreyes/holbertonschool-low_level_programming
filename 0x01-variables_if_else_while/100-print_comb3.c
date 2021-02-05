#include <stdio.h>
/**
 * main - possible combinations of single digits
 * Return: Always successful (0)
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 9; d1++)
	{
		for (d2 = d1 + 1; d2 <= 9; d2++)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');
			if ((d1 * 10 + d2) < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
