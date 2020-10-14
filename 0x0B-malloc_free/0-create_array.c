#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array
 * description: create array
 * @size: unsigned integer
 * @c: character
 * Return: s
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);

}
