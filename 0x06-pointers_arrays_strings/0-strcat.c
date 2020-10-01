#include "holberton.h"

/**
 * _strcat - add two strings
 * description: add two strings
 * @src: char
 * @dest: char
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int s;
	int n;

	for (s = 0; src[s] != '\0'; s++)
	{
		;
	}
	for (n = 0; dest[n] != '\0'; n++)
	{
		;
	}
	for (i = 0; i <= s ; i++)
	{
		*(dest + (n + i)) = src[i];
	}
			return (dest);
}
