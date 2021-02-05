#include <stdio.h>
/**
 * main - prints answer to silly question
 * Return: Success always (0)
 */
int main(void)
{
	int d1, d2, d3, d4;

	int l1, l2;

	for (d1 = 0; d1 <= 9; d1++)
	{
		for (d2 = 0; d2 <= 9; d2++)
		{
			for (d3 = d1; d3 <= 9; d3++)
			{
				for (d4 = 0; d4 <= 9; d4++)
				{
					l1 = (d1 * 10) + d2;
					l2 = (d3 * 10) + d4;
					if (l2 > l1)
					{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(' ');
					putchar(d3 + '0');
					putchar(d4 + '0');

					if (!((l1 == 98) && (l2 == 99)))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
