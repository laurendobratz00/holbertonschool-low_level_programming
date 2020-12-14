#include "holberton.h"

/**
 * _strcmp - compare two strings
 * description: compare two strings
 * @s1: char
 * @s2: char
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
