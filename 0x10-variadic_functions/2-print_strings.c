#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by new line
 * @seperator: string to be printed inbetween strings
 * @n: number of strings passed to function
 * Return: none
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list op;
	char *p;

	va_start(op, n);
	while (i < n)
	{
		p = va_arg(op, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if ((seperator != NULL) && (i != n - 1))
			printf("%s", seperator);
		i++;
	}
	printf("\n");

	va_end(op);
}
