#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int l;
	unsigned int p, sum = 0;
	char *q;

	if (argc > 1)
	{
		for (l = 1; l < argc; l++)
		{
			q = argv[l];

			for (p = 0; p < strlen(q); p++)
			{
				if (q[p] < 48 || q[p] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(q);
			q++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
