#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: character
 * @s2: character
 * @n: unsigned integer
 * Return: new string, or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	int s1len = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1len] != '\0')
		s1len++;

	newstring = malloc(sizeof(char) * (s1len + n + 1));

	if (newstring == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		newstring[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; i++, j++)
		newstring[i] = s2[j];
	newstring[i] = ('\0');
	return (newstring);
}
