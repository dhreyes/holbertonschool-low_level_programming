#include <stdio.h>
/**
 * main - find natural multiples of 3 and 5
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int sum = 0;
	int max = 1024;

	for (i = 0; i < max; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	printf("%i\n", sum);

	return (0);
}
