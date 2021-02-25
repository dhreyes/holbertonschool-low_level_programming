/**
 * _pow_recursion - Find value of x to the power of y
 * @x: number to multiple
 * @y: power to multiply it to
 *
 * Return: Value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
