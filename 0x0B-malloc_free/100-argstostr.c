#include <stdlib.h>
#include "main.h"
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, p = 0, q = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			q++;
	}
	q += ac;
	s = malloc(sizeof(char) * q + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[p] = av[i][j];
			p++;
		}
		if (s[p] == '\0')
		{
			s[p++] = '\n';
		}
	}
	return (s);
}
