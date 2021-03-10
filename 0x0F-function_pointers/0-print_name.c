#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - uses function pointers to print name
 * @name: name input
 * @f: function pointer
 * Return: returns ptr to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
