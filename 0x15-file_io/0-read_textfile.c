#include "main.h"
#include <unistd.h>
/**
 * read_textfile - reads text file and prints it to STDOUT
 * @filename : the filename
 * @letters: number of letters to red and print
 * Return: actual number of letters can  read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t byte_read, byte_write;

	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	fp  = open(filename, O_RDONLY);

	if (fp == -1)
	{
		free(buffer);
		return (0);
	}

	byte_read = read(fp, buffer, letters);

	if (byte_read == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	byte_write = write(STDOUT_FILENO, buffer, byte_read);

	if (byte_write == -1 || byte_write != byte_read)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	free(buffer);
	close(fp);
	return (byte_read);
}
