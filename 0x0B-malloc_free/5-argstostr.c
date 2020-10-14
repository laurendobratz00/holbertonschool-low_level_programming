#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - cat all the args
 * @ac: integer
 * @av: character
 * Return: yes
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int buffer = 0;
	int length = 0;
	char *ptr;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
		for (j = 0; av[i][j]; j++)
			length++;
	ptr = (char *)malloc(length * sizeof(char) + ac + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, buffer++)
			ptr[buffer] = av[i][j];
		ptr[buffer] = '\n';
		buffer++;
	}
	ptr[buffer] = '\0';
	return (ptr);
}
