#include <main.h>

/**
 * read_textfile - reads a text file and 
 * 		prints it to the POSIX standard output
 * @filename: a pointer to a file name
 * @letters: letters to be read and printed.
 *
 * Return: 0 if function fails or the filename is NULL
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

	if ( file == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (w);
}
