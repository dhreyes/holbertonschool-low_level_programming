#include "holberton.h"
#include <stdio.h>
/**
 * append_text_to_file - appends content to file
 * @filename: pointer to name of file
 * @text_content: pointer to content to be appended
 * Return: 1 on Success, Else 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, writ, size;

	size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size])
			size++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);

	if (opn == -1)
		return (-1);

	writ = write(opn, text_content, size);

	if (writ == -1)
		return (-1);

	close(opn);
	return (1);
}
