#include "main.h"
#include <stdio.h>
/**
 * print_buffer -prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int w, y, z;

	w = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (w < size)
	{
		y = size - w < 10 ? size - w : 10;
		printf("%08x: ", 0);
		for (z = 0; z < 10; z++)
		{
			if (z < y)
				printf("%02x", *(b + w + z));
			else
				printf(" ");
			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < y; z++)
		{
			int c = *(b + w + z);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		w += 10;
	}
}
