#include "main.h"
/**
 * read_textfile - reads a text file & prints it to the POSIX stdout
 * @filename: filename
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or 0 (failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num;
	int fd;
	char *buffer;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1);
	num = read(fd, buffer, letters);

	if (num == -1)
		return (0);

	buffer[num - 1] = '\0';

	printf("%s\n", buffer);

	close(fd);

	return (num);
}
