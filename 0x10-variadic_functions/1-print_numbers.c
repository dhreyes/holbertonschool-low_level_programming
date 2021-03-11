#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return: none
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i = 0;

	va_start(op, n);
	while (i < n)
	{
		printf("%d", va_arg(op, int));
		if ((seperator != NULL) && (i != n - 1))
			printf("%s", seperator);
		i++;
	}
	printf("\n");

	va_end(op);
}
