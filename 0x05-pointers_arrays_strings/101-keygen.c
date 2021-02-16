#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generates blob mess equal to ascii sum of 2772
 *Return: Always 0 (Success)
 */
int main(void)
{
	int win, pass;

	srand(time(0));
	win = 2772;
while (win >= 127)
{
  pass = ((rand() % 126) + 1);
  printf("%c", pass);
  win -= pass;
}
printf("%c", win);
return (0);
}
