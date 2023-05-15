#include <stdlib.h>
#include "main.h"
/**
 * str_concat - get ends of input and add together for size
 * @s1: input first to concat
 * @s2: input second to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int p, q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = q = 0;
	while (s1[p] != '\0')
		p++;
	while (s2[q] != '\0')
		q++;
	s = malloc(sizeof(char) * (p + q + 1));
	if (s == NULL)
		return (NULL);
	p = q = 0;
	while (s1[p] != '\0')
	{
		s[p] = s1[p];
		p++;
	}
	while (s2[q] != '\0')
	{
		s[p] = s2[q];
		p++, q++;
	}
	s[p] = '\0';
	return (s);
}
