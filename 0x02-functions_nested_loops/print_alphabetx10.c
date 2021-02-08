#include "holberton.h"

void print_alphabet(void)
{
int i;
char a[27];

for (i = 0; i < 26; i++)
{
a[i] = 'a' + 1;
putchar (a[i]);
}
putchar('\n');
return (0);
}
