#include "holberton.h"
/**
 * create_file - creates file
 * @filename: Pointer to name of file
 * @text_content: pointer to file content
 * Return: 1 on Success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int opn, size, writ;

	size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size])
			size++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (opn == -1)
		return (-1);

	writ = write(opn, text_content, size);

	if (writ == -1)
		return (-1);

	close(opn);
	return (1);

}
