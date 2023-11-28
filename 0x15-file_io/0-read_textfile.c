#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints contents of a text file to STDOUT.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Number of letters read and printed
 * 0 on failure or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor, read_bytes, written_bytes, total_written = 0;

	if (filename == NULL)
		return (0);
	/* Open the file for reading */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	/* Read from file */
	read_bytes = read(file_descriptor, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	/* Write to STDOUT */
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	total_written += written_bytes;
	/* Clean up resources */
	free(buffer);
	close(file_descriptor);

	return (total_written);
}
