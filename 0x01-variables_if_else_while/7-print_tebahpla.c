#include <stdio.h>
/**
 * main - printing the alphabet in reverse
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
	putchar(a);
	}
	putchar('\n');

	return (0);
}
