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

	opc = (char*) &main;
	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < bts - 1)
	{
		printf("%02hhx ", opc[i]);
		i++;
	}
	printf("%02hhx\n", opc[i]);
	return (0);
}
