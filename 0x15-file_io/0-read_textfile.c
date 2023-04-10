#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: Win - actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *duf;
	ssize_t j;
	ssize_t p;
	ssize_t y;

	j = open(filename, O_RDONLY);
	if (j == -1)
		return (0);
	duf = malloc(sizeof(char) * letters);
	y = read(j, duf, letters);
	p = write(STDOUT_FILENO, duf, y);

	free(duf);
	close(j);
	return (p);
}
