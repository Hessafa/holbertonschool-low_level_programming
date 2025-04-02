#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * open_file - Opens the file in read-only mode.
 * @filename: The name of the file.
 * Return: File descriptor or -1 on error.
 */
int open_file(const char *filename)
{
	return (open(filename, O_RDONLY));
}

/**
 * allocate_buffer - Allocates buffer for reading.
 * @letters: Number of letters to read.
 * Return: Pointer to buffer or NULL on error.
 */
char *allocate_buffer(size_t letters)
{
	return (malloc(sizeof(char) * letters));
}

/**
 * read_file_content - Reads content from the file.
 * @fd: File descriptor.
 * @buffer: Buffer to store content.
 * @letters: Number of letters to read.
 * Return: Number of bytes read or -1 on error.
 */
ssize_t read_file_content(int fd, char *buffer, size_t letters)
{
	return (read(fd, buffer, letters));
}

/**
 * write_to_stdout - Writes buffer content to stdout.
 * @buffer: Buffer to write.
 * @bytes_read: Number of bytes to write.
 * Return: Number of bytes written or -1 on error.
 */
ssize_t write_to_stdout(char *buffer, ssize_t bytes_read)
{
	return (write(STDOUT_FILENO, buffer, bytes_read));
}

/**
 * read_textfile - Reads and prints a file to stdout.
 * @filename: The file to read.
 * @letters: Number of letters to print.
 * Return: Actual letters read/printed or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);

	fd = open_file(filename);
	if (fd == -1)
		return (0);

	buffer = allocate_buffer(letters);
	if (!buffer)
		return (0);

	bytes_read = read_file_content(fd, buffer, letters);
	bytes_written = write_to_stdout(buffer, bytes_read);

	close(fd);
	free(buffer);

	return ((bytes_read == bytes_written) ? bytes_written : 0);
}
