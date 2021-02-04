#include <stdio.h>
/**
 * main - finding lower case and have uppercase follow
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int l;
	char a[27];
	char b[27];

	for (i = 0; i < 26; i++)
	{
		a[i] = 'a' + i;
		putchar (a[i]);
	}

	for (l = 0; l < 26; l++)
	{
		b[l] = 'A' + l;
		putchar (b[l]);
	}
	putchar('\n');

	return (0);
}
