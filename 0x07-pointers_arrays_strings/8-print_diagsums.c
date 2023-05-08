#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int p, q, r;

	p = 0;
	q = 0;

	for (r = 0; r < size; r++)
	{
		p = p + a[r * size + r];
	}
	for (r = size - 1; r >= 0; r--)
	{
		q += a[r * size + (size - r - 1)];
	}
	printf("%d, %d\n", p, q);
}
