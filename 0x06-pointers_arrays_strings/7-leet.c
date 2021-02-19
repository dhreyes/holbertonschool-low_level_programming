/**
 * leet - Convert string to 1337
 * @c: string
 * Return: pointer to string
 */
char *leet(char *c)
{
	int i, j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (c[i] != 0)
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (c[i] == let[j])
				c[i] = num[j];
			j++;
		}
		i++;
	}
	return (c);
}
