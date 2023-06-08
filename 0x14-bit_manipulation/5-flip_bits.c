#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, co = 0;
	unsigned long int cu;
	unsigned long int ex = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		cu = ex >> j;
		if (cu & 1)
			co++;
	}
	return (co);
}
