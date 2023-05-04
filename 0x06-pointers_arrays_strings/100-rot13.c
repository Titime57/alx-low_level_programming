#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @a: pointer to string params
 * Return: *a
 */
char *rot13(char *a)
{
	int p;
	int q;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; a[p] != '\0'; p++)
	{
		for (q = 0; q < 52; q++)
		{
			if (a[p] == data1[q])
			{
				a[p] = datarot[q];
				break;
			}
		}
	}
	return (a);
}
