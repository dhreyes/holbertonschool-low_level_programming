#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all of arguments and unknown
 * @n: amount of arguments
 * Return: param (sum of all ints)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int param;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		param += va_arg(ap, int);
		i++;
	}

	va_end(ap);
	return (param);
}
