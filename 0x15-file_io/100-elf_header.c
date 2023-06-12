#include "main.h"
#include <elf.h>
void print_osabi_more(ELF64_Ehdr h);
/**
 * print_magic - prints ELF magic bytes
 * @h: the ELF header struct
 */
void print_magic(ELF64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i],
				i == EI_NIDENT - 1 ? "\n" : " ");
}
