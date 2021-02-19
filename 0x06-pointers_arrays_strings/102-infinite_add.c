/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, temp, remainder, one, two;

	i = j = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	while (size_r != 0 && i != 0 && j != 0)
	{
		if (n1[0] == '-')
			one = (n1[i] - '0');
		else
			one = (n1[i] - '0') * -1;
		if (n2[0] == '-')
			two = (n1[i] - '0');
		else
			two = (n1[i] - '0') * -1;

		temp = one + two + remainder;
		if (temp > 9)
		{
			remainder = temp / 10;
			temp %= 10;
		}
		r[size_r--] = temp;
		printf("%d\n", r[size_r + 1]);
		i--;
		j--;
	}
		return (r[0]);
}
