#include "holberton.h"
/**
 * read_textfile - read file and print to S/O
 * @filename: file in current working directory
 * @letters: amount of letters to print
 * Return: the actual letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opn, reed;
	char *buff = malloc(sizeof(char) * letters);
	unsigned int writ;

	if (filename == NULL || buff == NULL)
	{
		free(buff);
		close(opn);
		return (0);
	}

	opn = open(filename, O_RDONLY);
	if (opn == -1)
	{
		free(buff);
		close(opn);
		return (0);
	}

	reed = read(opn, buff, letters);

	if (reed == -1)
	{
		free(buff);
		close(opn);
		return (0);
	}

	writ = write(STDOUT_FILENO, buff, reed);
	if (writ == -1)
	{
		free(buff);
		close(opn);
		return (0);
	}
	return (writ);
}
