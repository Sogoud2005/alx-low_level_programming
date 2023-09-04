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
/**
 * print_osabi - prints osabi
 * @h: elf struct
*/
void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.eident[EI_OSABI])
	{
		case ELFOSABI_NONE
			printf("UNIX - System V");
		break;
		case ELFOSABI_HPUX
			printf("UNIX - HP-UX");
		break;
		case ELFOSABI_NETBSD
			printf("UNIX - NetBSD");
		break;
		case ELFOSABI_LINUX
			printf("UNIX - Linux");
		break;
		case ELFOSABI_SOLARIS
			printf("UNIX - Solaris");
		break;
		case ELFOSABI_AIX
			printf("UNIX - AIX");
		break;
		case ELFOSABI_IRIX
			printf("UNIX - IRIX");
		break;
		case ELFOSABI_FREEBSD
			printf("UNIX - FreeBSD");
		break;
		case ELFOSABI_TRU64
			printf("UNIX - TRU64");
		break;
		default:
			more_osabi(h);
			break;
	}
	printf("\n");
}
/**
 * more_osabi - more osabi
 * @h: elf struct
*/
void more_osabi(Elf64_Ehdr h)
{
	switch (h.eident[EI_OSABI])
	{
		case ELFOSABI_MODESTO
			printf("Novell - Modesto");
		break;
		case ELFOSABI_OPENBSD	
			printf("UNIX - OpenBSD");
		break;

