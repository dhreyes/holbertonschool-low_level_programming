#include <stdio.h>
/**
 * main - finding lower case alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char a[27];

	for (i = 0; i < 26; i++)
	{
		a[i] = 'a' + i;
		putchar (a[i]);
	}
	putchar('\n');

	return (0);
}
