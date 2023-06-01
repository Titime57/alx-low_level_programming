#include <stdio.h>
void sentence(void) __attribute__ ((constructor));
/**
 * sentence - prints a sentence before the main
 * function is executed
 */
void sentence(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
