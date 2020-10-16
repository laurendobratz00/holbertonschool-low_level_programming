#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - pointer to new allocated array
 * @old_size: unsigned integer
 * @new_size: unsigned integer
 * Return: yes
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size > old_size)
	{
		new = malloc(new_size);
		if (!new)
			return (NULL);
		for (; i <= old_size; i++)
			free(ptr);
		return (new);
	}
	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		new = malloc(new_size);
		if (!new)
			return (NULL);
		for (; i <= new_size; i++)
			new[i] = ptr[i];
		free(ptr);
		return (new);
	}
	return (new);
}
