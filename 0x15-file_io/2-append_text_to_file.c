#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - appends text at end of the file
 * @filename: filename g
 * @text_content: content of text
 * Return: 1 if successful, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_g;
	int pletters;
	int rwr;

	if (!filename)
		return (-1);

	file_g = open(filename, O_WRONLY | O_APPEND);

	if (file_g == -1)
		return (i-1);

	if (text_content)
	{
		for (pletters = 0; text_content[pletters]; pletters++)
			;

		rwr = write(file_g, text_content, pletters);

		if (rwr == -1)
			return (-1);
	}

	close(file_g);

	return (1);

}
