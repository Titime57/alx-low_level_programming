#include "main.h"
#include <elf.h>
void print_osabi_more(Elf64_Ehdr h);
/**
 * print_magic - prints ELF magic bytes
 * @h: the ELF header struct
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i],
				i == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * print_class - prints ELF class
 * @h: the ELF header struct
 */
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                           ");
	switch (h.e_ident[EI_CLASS])
	{
