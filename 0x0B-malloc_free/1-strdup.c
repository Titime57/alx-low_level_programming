#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int l, m = 0;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
		l++;

	s = malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
		s[m] = str[m];
	return (s);
}
