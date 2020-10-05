#include "holberton.h"

/**
 * _strpbrk - search string for set of bytes
 * description: search string for set of bytes
 * @s: character
 * @accept: character
 * Return: \0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
		return ('\0');
}
