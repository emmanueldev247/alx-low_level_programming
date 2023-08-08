#include "main.h"
/**
 * main - entry point
 *
 */
int main(int argc, char **argv)
{
	const char *file_from, *file_to;
	char buffer[1024];
	int fd_from, fd_to;
	ssize_t byteRead, byteWritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	while ((byteRead = read(fd_from, buffer, 1024)) > 0)
	{
		byteWritten = write(fd_to, buffer, byteRead);
		if (byteWritten != byteRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (byteRead  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
