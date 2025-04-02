#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	/* Calculate length of text_content if it is not NULL */
	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
	}

	/* Create the file with permissions rw------- */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* Write content to the file */
	bytes_written = write(fd, text_content, text_length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
