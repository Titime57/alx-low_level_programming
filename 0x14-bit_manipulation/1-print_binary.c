#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, co = 0;
	unsigned long int cu;

	for (j = 63; j >= 0; j--)
	{
		cu = n >> j;
		if (cu & 1)
		{
			_putchar('1');
			co++;
		}
		else if (co)
			_putchar('0');
	}
	if (!co)
		_putchar ('0');
}
