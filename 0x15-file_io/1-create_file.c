#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file  and writes given text to it
 * @filename: name of file to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		w = write(fd, text_content, len);
		if (w != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
