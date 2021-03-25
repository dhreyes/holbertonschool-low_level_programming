#include <unistd.h>
/**
 * _putchar -writes character c to standard output
 * @c: character
 * Return: 1 on Success, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
