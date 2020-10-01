#include "holberton.h"

/**
 * _strncat - add two strings until n
 * description: add two strings until n
 * @n: integer
 * @dest: character
 * @src: character
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s;

for (s = 0; dest[s] != '\0'; s++)
{
;
}
for (i = 0; src[i] != '\0'; i++, s++)
{
if (i < n)
dest[s] = src[i];
}
dest[s] = '\0';
return (dest);
}
