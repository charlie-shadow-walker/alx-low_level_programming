#include "main.h"

/**
 * create_file - creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 * Return: 1 if the function is a success otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, w, words = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for  (words = 0; text_content[words];)
			words++;
	}
	
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	w = write(file, text_content, words);

	if (file == -1 || w == -1)
		return (-1);

	close(file);

	return(1);
}
