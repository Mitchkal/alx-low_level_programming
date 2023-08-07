#include "main.h"
/**
 * main - READS ELF file
 * @argc: number of arguments in argv
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr elf_header;
	(void)argc;

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: cannot open file %s\n", argv[1]);
		exit(98);
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: cannot read ELF header from file %s\n", argv[1]);
		exit(98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
                elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: file %s is not ELF file\n", argv[1]);
		exit(98);
	}

	printf("Magic: %02x %02x %02x %02x\n",
		elf_header.e_ident[EI_MAG0],
		elf_header.e_ident[EI_MAG1],
		elf_header.e_ident[EI_MAG2],
                elf_header.e_ident[EI_MAG3]);

	printf("Class:				%s\n",
		elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
		elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid class");

	printf("Data:				%s\n",
		elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
		elf_header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid data encoding");

	printf("Version:				%d\n", elf_header.e_ident[EI_VERSION]);

	printf("OS/ABI:				");
	switch (elf_header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("ABI Version:				%d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:				");
	switch (elf_header.e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("Entry point address:				0x%lx\n", elf_header.e_entry);
	return (0);
}
