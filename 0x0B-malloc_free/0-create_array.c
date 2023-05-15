#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: the array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
