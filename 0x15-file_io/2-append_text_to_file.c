#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
 * append_text_to_file - append text to file
 * @filename: const char
 * @text_content: char pointer
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == '\0')
		return (1);
	if (fd == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		continue;

	wr = write(fd, text_content, i);
	if (wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
