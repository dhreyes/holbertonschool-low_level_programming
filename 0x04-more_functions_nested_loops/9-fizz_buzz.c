#include <stdio.h>
/**
 *main - prints the fizz buzz test
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		else
			if (i % 3 == 0)
				printf("%s", "Fizz");
			if (i % 5 == 0)
				printf("%s", "Buzz");
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
