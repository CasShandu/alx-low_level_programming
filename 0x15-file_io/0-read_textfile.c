#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and
 * prints it to the standard output
 * @filename: Requiescat (string pointer)
 * @letters: Number of letters to be printed
 * Return: Number of letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
	{
		return (0);

	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);
	free(buff);

	return (nwr);

}


