#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p = 0, q = 0, l = 0, m = 0;
	char *r;

	while (s1 && s1[l])
		l++;
	while (s2 && s2[m])
		m++;
	if (n < m)
		r = malloc(sizeof(char) * (l + n + 1));
	else
		r = malloc(sizeof(char) * (l + m + 1));
	if (!r)
		return (NULL);
	while (p < l)
	{
		r[p] = s1[p];
		p++;
	}
	while (n < m && p < (l + n))
		r[p++] = s2[q++];
	while (n >= m && p < (l + m))
		r[p++] = s2[q++];
	r[p] = '\0';
	return (r);
}
