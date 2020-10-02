#include "holberton.h"
#include <string.h>

/**
 * string_toupper - print uppercase string
 * description: print uppercase string
 * @s: char
 * Return: 0
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'a')
			s[i] = s[i] - 32;
	}
	return (s);
}
