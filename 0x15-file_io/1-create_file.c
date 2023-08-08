#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 (success); -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	len = 0;
	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		write(fd, "", 0);
	else
	{
		bytesWritten = write(fd, text_content, len);
		if (bytesWritten == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
