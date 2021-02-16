#include "holberton.h"
void num_find(char *s, int *end, int *begin);
int power(int base, int exp);
/**
 *_atoi - will function as command atoi
 *@s: string input
 *Return: value of rr
 */
int _atoi(char *s)
{
	int result, end, begin, d, cn2, n, rr, sign;

	result = 0;
	sign = 1;
	num_find(s, &end, &begin);
	d = end - begin;
	cn2 = begin;
	while (cn2 <= end)
	{
		if (s[cn2] == '-')
		{
			sign = sign * (-1);
		}
		else if ((s[cn2] >= '0') && (s[cn2] <= '9'))
		{
			n = (s[cn2] - '0');
			result = result + (power(10, d) * n);
		}
		cn2++;
		d--;
	}
	rr = (sign * result);
	return (rr);
}
/**
 *num_find - finds the numbers in a string
 *@s: string input
 *@end: end
 *@begin: beginning
 *Return: 0 if nothing, else numbers
 */
void num_find(char *s, int *end, int *begin)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if (((s[count] >= '0') && (s[count] <= '9')) &&
			((s[count + 1] >= '0') && (s[count + 1] >= '9')))
		{
			*begin = count;
		}
		if (((s[count] >= '0') && (s[count] <= '9')) &&
			((s[count + 1] < '0') || (s[count + 1] > '9') || (s[count + 1] == '\0')))
		{
			*end = count;
			break;
		}
		count++;
	}
}
/**
 *power - allows use of exponents
 *@base: base of exp
 *@exp: exp of exp
 *Return: result of exponents
 */
int power(int base, int exp)
{
	int temp = power(base, exp / 2);
	if (exp == 0)
		return (1);
	else if (exp % 2)
		return (base * power(base, exp - 1));

		return (temp * temp);
}
