#include "holberton.h"

/**
 * _strchr - locating character
 * description: locating character in string
 * @s: character
 * @c: character
 * Return: \0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
