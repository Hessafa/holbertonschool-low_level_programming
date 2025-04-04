#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	/* If text_content is NULL, don't append anything */
	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
	}

	/* Open the file for appending (O_WRONLY | O_APPEND) */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1) /* File does not exist or you don't have permission */
		return (-1);

	/* Write the text content to the file */
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, text_length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
