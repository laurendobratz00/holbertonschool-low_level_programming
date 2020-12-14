#include "holberton.h"

/**
 * *_strcpy - function that copies string
 * description: function that copies string
 * @dest: character
 * @src: character
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
