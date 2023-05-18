#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int p, q;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (p = 1; p < argc; p++)
	{
		for (q = 0; argv[p][q] != '\0'; q++)
		{
			if (argv[p][q] > 57 || argv[p][q] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
