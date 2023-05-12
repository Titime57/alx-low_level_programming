#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int p = 0, q = 0;

	if (argc == 3)
	{
		p = atoi(argv[1]);
		q = atoi(argv[2]);
		printf("%d\n", p * q);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
