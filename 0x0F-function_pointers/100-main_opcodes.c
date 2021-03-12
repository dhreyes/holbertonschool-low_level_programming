#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcodes of function
 * @argc: number of args
 * @argv: arg of number of bytes
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *opc;
	int i, bts;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opc = (char*) &main;
	bts = atoi(argv[1]);

	i = 0;
	while (i < bts)
	{
		printf("%02hhx ", opc[i]);
		i++;
	}
	printf("%02hhx\n", opc[i]);
	return (0);
}
