#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- reads a text file and prints to STDOUT.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 if the filename is NULL or write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
