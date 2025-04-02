#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/* Helper function to check argument count */
void check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/* Helper function to open a file */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/* Helper function to copy content */
void copy_content(int file_from, int file_to)
{
	char buffer[BUFFER_SIZE];
	int bytes_read, bytes_written;

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/* Helper function to close a file */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int main(int argc, char **argv)
{
	int file_from, file_to;

	check_arguments(argc);  /* Check arguments count */

	file_from = open_file(argv[1], O_RDONLY, 0);  /* Open source file */
file_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

copy_content(file_from, file_to);

	close_file(file_from);  /* Close source file */
	close_file(file_to);    /* Close destination file */

	return (0);
}
