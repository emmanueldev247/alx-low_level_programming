#include "main.h"
/**
 * display_error_and_exit - Display an error message and exit
 * @msg: The error message format.
 * @filename: The filename or related information.
 * @code: The exit code to be used.
 *
 * Return: nothing
 */
void display_error_and_exit(const char *msg, const char *filename, int code)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(code);
}

/**
 * copy_files - Copy contents from one file to another.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 *
 * Return: nothing
 */
void copy_files(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t byte_read, byte_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		display_error_and_exit("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		display_error_and_exit("Error: Can't write to %s\n", file_to, 99);
	}

	while ((byte_read = read(fd_from, buffer, 1024)) > 0)
	{
		byte_written = write(fd_to, buffer, byte_read);
		if (byte_written != byte_read)
		{
			close(fd_from);
			close(fd_to);
			display_error_and_exit("Error: Can't write to %s\n", file_from, 99);
		}
	}

	if (byte_read == -1)
	{
		close(fd_from);
		close(fd_to);
		display_error_and_exit("Error: Can't read from file %s\n", file_from, 98);
	}

	close(fd_from);
	close(fd_to);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, other values on failure.
 */
int main(int argc, char **argv)
{
	const char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	copy_files(file_from, file_to);

	return (0);
}
