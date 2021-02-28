#include <stdio.h>
/**
 *main - prints name of function (self)
 *@argc: count of argv
 *@*argv: array of strings
 */
int main (__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
