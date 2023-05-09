#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

/**
 * print_error - Prints an error message to standard error and exits.
 * @msg: The error message to print.
 */
void print_error(char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}

/**
 * print_magic - Prints the ELF magic numbers in the header.
 * @e_ident: The array of magic numbers.
 */
void print_magic(unsigned char *e_ident)
{
int i;

printf("ELF Header:\n  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", e_ident[i]);
printf("\n");
}

/**
 * print_class - Prints the ELF class in the header.
 * @e_ident: The array of magic numbers.
 */
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");		
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_data - Prints the ELF data encoding in the header.
 * @e_ident: The array of magic numbers.
 */
void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");
    switch (e_ident[EI_DATA])
    {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_DATA]);
    }
}

/**
 * print_version - Prints the ELF version in the header.
 * @e_ident: The array of magic numbers.
 */
void print_version(unsigned char *e_ident)
{
    printf("  Version:                           %d", e_ident[EI_VERSION]);
    switch (e_ident[EI_VERSION])
    {
        case EV_NONE:
            printf(" (invalid)\n");
            break;
        case EV_CURRENT:
            printf("\n");
            break;
        default:
            printf(" (unknown)\n");
    }
}

/**
 * print_osabi - Prints the ELF OS/ABI in the header.
 * @e_ident: The array of magic numbers.
 */
void print_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
       






