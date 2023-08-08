#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: null terminated string to append
 *
 * Return: 1 (success); -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);


	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = 0;
	while (text_content[len] != '\0')
		len++;

	bytesWritten = write(fd, text_content, len);
	if (bytesWritten == -1)
		return (-1);

	close(fd);

	return (1);
}
