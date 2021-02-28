#include <stdio.h>
/**
 *main - prints count of function arguments
 *@argc: count of argv
 *@argv: array of strings
 *Return: Always 0 (success)
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
