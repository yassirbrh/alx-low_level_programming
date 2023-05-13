#include <stdio.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>
#include <unistd.h>

#define ERROR_READ "Error: Can't read this file\n"
#define ERROR_OPEN "Error: Can't open this file\n"
#define ERROR_ARG "Usage error: ./elf_header elf_filename\n"
/**
 * _strlen - Function
 *
 * Decription: Returns the length of a string.
 *
 * @str: Pointer to the string.
 *
 * Return: The length of a string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}
/**
 * print_elf_check - Function
 *
 * Description: Check if the file is not an ELF file.
 *
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Return: No return because it's a void function.
 */
void print_elf_check(unsigned char *e_ident)
{
	int i;
	unsigned char e_ident_check[] = {ELFMAG0, ELFMAG1, ELFMAG2, ELFMAG3};
	char *error_message = "Error: Not an ELF file\n";

	for (i = 0; i < EI_NIDENT / 4; i++)
	{
		if (e_ident[i] != e_ident_check[i])
		{
			write(STDERR_FILENO, error_message, _strlen(error_message));
			exit(98);
		}
	}
}
/**
 * print_elf_magic - Function
 *
 * Description: displays the magic numbers.
 *
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Return: No return because it's a void function.
 */
void print_elf_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * print_elf_class - Function
 *
 * Description: Displays the class of the ELF object file.
 *
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Return: No return because it's a void function.
 */
void print_elf_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64");
	else
		printf("<unknown: %x>", e_ident[EI_CLASS]);
	printf("\n");
}
/**
 * print_elf_data - Function
 *
 * Description: Displays the data field of the ELF object file.
 *
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Return: No return because it's a void function.
 */
void print_elf_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian");
	else
		printf("<unknown: %x>", e_ident[EI_DATA]);
	printf("\n");
}
/**
 * print_elf_version - Function
 *
 * Description: Displays the version field of the ELF object file.
 *
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Return: No return because it's a void function.
 */
void print_elf_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");
	else if (e_ident[EI_VERSION] != EV_NONE)
		printf(" <unknown>");
	printf("\n");
}
/**
 * print_elf_osabi - Function
 *
 * Description: Displays the OS and ABI to which the object is targeted.
 *
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Return: No return because it's a void function.
 */
void print_elf_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
/**
 * print_elf_abi - Function
 *
 * Description: Displays the version of the ABI to which the object is targeted
 *
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Return: No return because it's a void function.
 */
void print_elf_abi(unsigned char *e_ident)
{
	unsigned char ABIVERSION = e_ident[EI_ABIVERSION];

	printf("  ABI Version:                       %d\n", ABIVERSION);
}
/**
 * get_endianness - Function
 *
 * Description: Checks the endianness.
 *
 * Return: 0 if big endian.
 *         1 if little endian.
 */
int get_endianness(void)
{
	int num = 1;
	char *endianness = (char *)&num;

	return (endianness[0]);
}
/**
 * print_elf_type - Function
 *
 * Description: Displays the type of an ELF header.
 *
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Return: No return because it's a void function.
 */
void print_elf_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2LSB && get_endianness() == 0)
		e_type <<= 8;
	else if (e_ident[EI_DATA] == ELFDATA2MSB && get_endianness() == 1)
		e_type >>= 8;
	printf("  Type:                              ");
	if (e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", e_type);
}
/**
 * reverse_byte_order - Function
 *
 * Description: Reverse the byte order of an Elf64_Addr variable.
 *
 * @addr: The content of the variable to reverse.
 *
 * Return: No return because it's a void function.
 */
void reverse_byte_order(Elf64_Addr *addr)
{
	unsigned char *bytes = (unsigned char *) addr;
	size_t num_bytes = sizeof(Elf64_Addr), i;
	unsigned char tmp;

	for (i = 0; i < num_bytes / 2; i++)
	{
		tmp = bytes[i];
		bytes[i] = bytes[num_bytes - i - 1];
		bytes[num_bytes - i - 1] = tmp;
	}
}
/**
 * print_elf_entry - Function
 *
 * Description: Displays the entry point of an ELF header.
 *
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF magic numbers
 *
 * Return: No return because it's a void function.
 */
void print_elf_entry(unsigned char *e_ident, unsigned long int e_entry)
{
	if (e_ident[EI_DATA] == ELFDATA2LSB && get_endianness() == 0)
		reverse_byte_order(&e_entry);
	else if (e_ident[EI_DATA] == ELFDATA2MSB && get_endianness() == 1)
		reverse_byte_order(&e_entry);
	printf("  Entry point address:               ");
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * main - Entry point
 *
 * Description: Displays the information contained in the ELF header
 *              at the start of an ELF file.
 *
 * @argc: The number of the arguments passed to the program.
 * @argv: Pointer to the list of arguments passed to the program.
 *
 * Return: 0 Always (Success).
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr header;
	int fd;

	if (argc != 2)
	{
		write(STDERR_FILENO, ERROR_ARG, _strlen(ERROR_ARG));
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, ERROR_OPEN, _strlen(ERROR_OPEN));
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		write(STDERR_FILENO, ERROR_READ, _strlen(ERROR_READ));
		exit(98);
	}
	print_elf_check(header.e_ident);
	printf("ELF Header:\n");
	print_elf_magic(header.e_ident);
	print_elf_class(header.e_ident);
	print_elf_data(header.e_ident);
	print_elf_version(header.e_ident);
	print_elf_osabi(header.e_ident);
	print_elf_abi(header.e_ident);
	print_elf_type(header.e_type, header.e_ident);
	print_elf_entry(header.e_ident, header.e_entry);
	close(fd);
	return (0);
}
