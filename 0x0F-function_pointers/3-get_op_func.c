#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - gets the correct operator and uses function
 * @s: string to pass the correct operator
 * Return: returns pointer to function for correct operator, else NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i]).op == *s)
			return ((ops[i]).f);
		i++;
	}
	return (NULL);
}
