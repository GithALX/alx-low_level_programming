#include "main.h"
#include <unistd.h>

/**
 * create_file - Creates a file and writes content to it if provided.
 * @filename: Name of the file to create.
 * @text_content: Text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		/* Get length of text content */
		for (length = 0; text_content[length]; length++)
			;
	}

	/* Create or open the file for writing */
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	/* Write content to the file */
	write_result = write(file_descriptor, text_content, length);
	if (write_result == -1 || write_result != length)
	{
		close(file_descriptor);
		return (-1);
	}

	/* Close the file and return success */
	close(file_descriptor);
	return (1);
}
