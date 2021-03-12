#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints all arguments in c,i,f,s
 * @format: lists argumants for char, int, float, char
 * Return: none
 */
void print_all(const char * const format, ...)
{
	unsigned int idx = 0;
	va_list op;
	char *s;

	va_start(op, format);
	while (*(format + idx) != '\0' && (format))
	{
		switch (*(format + idx))
		{
			case 'c':
				printf("%c", va_arg(op, int));
				break;
			case 'i':
				printf("%d", va_arg(op, int));
				break;
			case 'f':
				printf("%f", va_arg(op, double));
				break;
			case 's':
				s = va_arg(op, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if (*(format + idx + 1) != '\0')
			printf(", ");
		idx++;
	}
	printf("\n");
	va_end(op);
}
