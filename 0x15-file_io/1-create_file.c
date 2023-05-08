#include "main.h"
/**
* create_file - creates a file
* @filename: the filename
* @text_content: string to write to file
* Return: 1 if success, -1 if failed
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t text_len = 0;
	int fd;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		char *p = text_content;

		while (*p != '\0')
		{
			text_len++;
			p++;
		}

		written = write(fd, text_content, text_len);

		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}
