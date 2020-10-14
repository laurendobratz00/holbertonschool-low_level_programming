#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory
 * @str: character
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	duplicate = malloc((len + 1) * sizeof(char))
		if (duplicate == NULL)
			return (NULL);
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
