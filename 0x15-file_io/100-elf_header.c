#include "main.h"
#include <elf.h>

void more_osabi(Elf64_Ehdr h);

/**
 * print_magic - print m
 * @h: elf struct
*/
void print_magic(Elf64_Ehdr h)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * print_class - print c
 * @h: elf struct
*/
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE
			printf("none");
		break;
		case ELFCLASS32
			printf("ELF32");
		break;
		case ELFCLASS64
			printf("ELF64");
		break;
	}
	printf("\n");
}
/**
 * print_data - print d
 * @h: elf struct
*/
void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATANONE
			printf("none");
		break;
		case ELFDATA2LSB
			printf("2's complement, little endian");
		break;
		case ELFDATA2MSB
			printf("2's complement, big endian");
		break;
	}
	printf("\n");
}
/**
 * print_version - prints ver
 * @h: elf struct
*/
void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           ");
	switch (h.e_ident[EI_VERSION])
	{
		case EV_NONE
			printf("none");
		break;
		case EV_CURRENT	
			printf("1 (current)");
		break;
	}
	printf("\n");
}
