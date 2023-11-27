#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename g
 * @text_content: content written in the file
 * Return: 1 if successful, -1 error.
 */

int create_file(const char *filename, char *text_content)
{
	int file_g;
	int pletters;
	int rwr;

	if (!filename)
		return (-1);

	file_g = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_g == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (pletters = 0; text_content[pletters]; pletters++)
		;
	rwr = write(file_g, text_content, pletters);

	if (rwr == -1)
		return (-1);
	close(file_g);

	return (1);

}
