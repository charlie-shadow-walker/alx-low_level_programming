#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: a pointer to the file name
 * @text_content: a pointer to a string
 *
 * Return: 1 on succes and -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, words = 0;

	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		for (words = 0; text_content[words];)
			words++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	w = write(file, text_content, words);

	if (file == -1 || w == -1)
		return (-1);

	close(file);
	return (1);
}
