#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends given text to end of the file
 * @filename: name of file to append to
 * @text_content: content to append to the file (a NULL
 * terminated string)
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
