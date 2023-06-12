#include "main.h"
/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 * Return: -1 (success), --1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int op, i, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(op, text_content, len);
	if (op == -1 || i == -1)
		return (-1);
	close(op);
	return (1);
}
