#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int op);
/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file buffer is storing chars for
 * Return: a pointer to the newly-allocates buffer
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cant't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * close_file - closes file descriptors
 * @op: the file descriptor to be closed
 */
void close_file(int op)
{
	int i;

	i = close(op);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant't close op %d\n", op);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fr, op, i, j;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_fr file_op\n");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	i = read(fr, buf, 1024);
	op = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't read fr file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		j = write(op, buf, i);
		if (op == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't write op %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		i = read(fr, buf, 1024);
		op = open(argv[2], O_WRONLY | O_APPEND);
	} while (i > 0);
	free(buf);
	close_file(fr);
	close_file(op);
	return (0);
}
