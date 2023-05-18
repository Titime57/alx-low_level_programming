#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum range of value stored
 * @max: maximum range of value stored
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *r, p, q;

	if (min > max)
		return (NULL);
	q = max - min + 1;
	r = malloc(sizeof(int) * q);
	if (r == NULL)
		return (NULL);
	for (p = 0; min <= max; p++)
		r[p] = min++;
	return (r);
}
