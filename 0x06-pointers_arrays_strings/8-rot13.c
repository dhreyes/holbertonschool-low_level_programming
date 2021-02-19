/**
 * *rot13 - Encode string using rot13
 * @c: string
 * Return: pointer
 */
char *rot13(char *c)
{
	int i;

	i = 0;
	while (c[i] != 0)
	{
		if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
		{
			while ((c[i] >= 'A' && c[i] < 'N') || (c[i] >= 'a' && c[i] < 'n'))
			{
				c[i] += 13;
				i++;
			}
			while ((c[i] >= 'N' && c[i] <= 'Z') || (c[i] >= 'n' && c[i] <= 'z'))
			{
				c[i] -= 13;
				i++;
			}
		}
		else
			i++;
	}
	return (c);
}
