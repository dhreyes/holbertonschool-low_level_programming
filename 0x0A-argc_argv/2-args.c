#include <stdio.h>
/**
 *main - prints count of function arguments
 *@argc: count of argv
 *@argv: array of strings
 *Return: Always 0 (success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	while (argc--)
	{
	printf("%s\n", *argv++);
	}
	return (0);
}
