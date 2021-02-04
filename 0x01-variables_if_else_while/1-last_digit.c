#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - finding the last digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("Last digit of %i is %i ", n, ld);
	if (ld > 5)
	puts("and is greater than 5");
	else if (ld == 0)
	puts("and is 0");
	else if (ld != 0 && ld < 6)
	puts("and is less than 6 and not 0");
	return (0);
}
