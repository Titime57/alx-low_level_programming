#include <stdio.h>
#include "main.h"
/**
 * main - print the number of argument passed into the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
