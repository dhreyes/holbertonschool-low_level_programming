/**
 * _strlen_recursion - Find the length of a string
 * @c: The string to find length of
 * Return: The length
 */
int _strlen_recursion(char *c)
{
	int l;

	l = 0;
	if (*c != 0)
	{
		l++;
		return (l + _strlen_recursion(c + 1));
	}
	return (l);
}
/**
 * pal_check - Actual check for palindrome
 * @c: String to check
 * @l: Length of string
 * Return: 1 if palindrome, 0 if otherwise
 */
int pal_check(char *c, int l)
{
	if (l <= 1)
		return (1);
	if (*c != c[l - 1])
		return (0);
	else
		return (pal_check((c + 1), (l - 2)));
}
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String to check
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *c)
{
	int l;

	l = _strlen_recursion(c);
	if (l <= 1)
		return (1);
	return (pal_check(c, l));
}
