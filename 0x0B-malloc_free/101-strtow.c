#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int f, p, q;

	f = 0;
	q = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			q++;
		}
	}
	return (q);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **m, *t;
	int i, p = 0, l = 0, w, q = 0, r, e;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (q)
			{
				e = i;
				t = (char *) malloc(sizeof(char) * (q + 1));
				if (t == NULL)
					return (NULL);
				while (r < e)
					*t++ = str[r++];
				*t = '\0';
				m[p] = t - q;
				p++;
				q = 0;
			}
		}
		else if (q++ == 0)
			r = i;
	}
	m[p] = NULL;
	return (m);
}
