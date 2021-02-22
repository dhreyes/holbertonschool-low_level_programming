/**
 * _strspn - gets the length of prefix substring
 * @s: input string
 * @accept: part to match
 * Return: how many matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, l, j, a;

	i = l = 0;
	while (s[i] != 0)
	{
		j = 0;
		a = 0;
		while (accept[j] != 0)
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else if (s[i] == accept[j])
			{
				a++;
				l++;
				j++;
			}
		}
		if (a == 0)
			return (l);
		i++;
	}
	return (l);
}
