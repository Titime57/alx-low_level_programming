#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of members
 * @size: size
 * Return: pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int p = 0, q = 0;
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);
	q = nmemb * size;
	r = malloc(q);
	if (r == NULL)
		return (NULL);
	while (p < q)
	{
		r[p] = 0;
		p++;
	}
	return (r);
}
