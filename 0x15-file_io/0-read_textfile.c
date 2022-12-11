#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	int file;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	r = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (file == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (w);
}
