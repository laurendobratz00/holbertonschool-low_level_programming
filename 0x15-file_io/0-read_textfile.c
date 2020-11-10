#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
 * read_textfile - read and print text file
 * @filename: file name char pointer
 * @letters: amount of chars
 * Return: wr
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rd;
	ssize_t wr;

	if (filename == NULL)
		return (0);
/* READ */
	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	rd = read(fd, buf, letters);

	if (rd == -1)
	{
		free(buf);
		return (0);
	}

/* WRITE */
	wr = write(STDOUT_FILENO, buf, rd);

	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (wr);
}
