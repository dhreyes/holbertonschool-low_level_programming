#include <stdio.h>
/**
 *swap_int - swaps the value that int pointers point to
 *@a: first integer
 *@b: second integer
 *Return: none
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;

	*b = *a;
	*a = tmp;
}
