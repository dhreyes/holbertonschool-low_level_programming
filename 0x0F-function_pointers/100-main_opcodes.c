#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcodes of function
 *
 *
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
	while (i < bts)
	{
		printf("%02hhx ", opc[i]);
		i++;
	}
	printf("%02hhx\n", opc[i]);
	return (0);
}
