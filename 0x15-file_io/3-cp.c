#include "main.h"
#define BUFFER_SIZE 1024
#include <stdio.h>

/**
 * print_error - prints the error message
 * @message: the message
 * @arg: the arguments
 */
void print_error(const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
}

/**
* main - copys content from one file to other
* @argc: number of argumets to main
* @argv: array of arguments to main
* Return: 0 or error codes
*/

int main(int argc, char **argv)
{
	const char *file_from, *file_to, *progname;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		progname = basename(argv[0]);
		print_error("Usage: %s file_from file_to\n", progname), exit(97);
	}

	file_from = argv[1], file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file %s\n", file_from), exit(98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error("Error: Can't write to %s\n", file_to), close(fd_from), exit(99);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Error: Can't write to %s\n", file_to), close(fd_from);
			close(fd_to), exit(99);
		}
	}
	if (bytes_read == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from), close(fd_from);
		close(fd_to), exit(98);
	}
	if (close(fd_from) == -1)
		print_error("Error: Can't close fd %s\n", strerror(errno)), exit(100);
	if (close(fd_to) == -1)
		print_error("Error: Can't close fd %s\n", strerror(errno)), exit(100);
	return (0);
}
