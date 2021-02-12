#include <stdio.h>

/**
 *main - find largest prime factor of 612852475143
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long f;
	long big = 612852475143;
	long pf = 1;

	for (f = 2; f <= big; f++)
		while (big % f == 0)
		{
			big = big / f;
			if (f > pf)
				pf = f;
		}
	printf("%ld\n", pf);

	return (0);
}
