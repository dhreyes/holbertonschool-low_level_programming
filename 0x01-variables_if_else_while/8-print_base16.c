#include <stdio.h>
/**
 * main - print hexadecimal
 * Return: Always successful (0)
 */
int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
		putchar(h);
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);

	putchar('\n');
	return (0);
}
