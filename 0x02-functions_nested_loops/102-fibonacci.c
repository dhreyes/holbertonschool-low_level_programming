#include <stdio.h>

/**
 *main - prints the first 50 fibonacci numbers starting with 1 and 2
 *
 *Return: always 0
 */
int main(void)
{
	int count;
	long int f1 = 1;
	long int f2 = 2;
	long int r;
	int flimit = 50;

	printf("1, 2, ");
	for (count = 3; count <= flimit; count++)
	{
		r = f1 + f2;
		f1 = f2;
		f2 = r;
		printf("%ld", next);
		if (count < flimit)
			printf(", ");
	}
	printf("\n");

	return (0);
}
