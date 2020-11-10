#include "holberton.h"

/**
 * _strlen - return the length of a string
 * description: return the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: const pointer char
 * @text_content: char pointer
 * Return: yes
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
if (text_content == NULL)
{
	close(fd);
	return (1);
}

wr = write(fd, text_content, _strlen(text_content));
close(fd);

if (wr == -1)
	return (-1);

return (1);
}
