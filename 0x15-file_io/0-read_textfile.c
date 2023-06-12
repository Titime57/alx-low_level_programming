#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read the text file print to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w-actual number of bytes read and printed, 0 when function fails
 * or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bud;
	ssize_t op;
	ssize_t i;
	ssize_t j;

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	bud = malloc(sizeof(char) * letters);
	j = read(op, bud, letters);
	i = write(STDOUT_FILENO, bud, j);
	free(bud);
	close(op);
	return (i);
}
