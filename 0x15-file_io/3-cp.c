#include "holberton.h"

int main(int argc, char *argv[]);

#define BADARG dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n")
#define NRD dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1])
#define NOWRITE dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2])
#define NOCLOSE1 dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opn1)
#define NOCLOSE2 dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opn2)
/**
 * main - copy content from file to file
 * @argc: amount of arguments given
 * @argv: array of arguments
 * Return: Always 0 (Success), Else exit 97, 98, 99, 100
 */
int main(int argc, char *argv[])
{
	int opn1, opn2, reed, writ, cloes;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		BADARG;
		exit(97);
	}

	if (argv[1] == NULL)
	{
		NRD;
		exit(98);
	}
	if (argv[2] == NULL)
	{
		NOWRITE;
		exit(99);
	}
	opn1 = open(argv[1], O_RDONLY);
	if (opn1 == -1)
	{
		NRD;
		exit(98);
	}
	opn2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (opn2 == -1)
	{
		NOWRITE;
		exit(99);
	}
	reed = read(opn1, buff, BUFSIZ);
	if (reed == -1)
	{
		NRD;
		exit(98);
	}
	while (reed > 0)
	{
		writ = write(opn2, buff, reed);
		if (writ != reed)
		{
			NOWRITE;
			exit(99);
		}
		reed = read(opn1, buff, BUFSIZ);
		if (reed == -1)
		{
			NRD;
			exit(98);
		}
	}
	cloes = close(opn1);
	if (cloes == -1)
	{
		NOCLOSE1;
		exit(100);
	}
	cloes = close(opn2);
	if (cloes == -1)
	{
		NOCLOSE2;
		exit(100);
	}
	return (0);
}
