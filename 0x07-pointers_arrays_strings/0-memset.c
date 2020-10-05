#include "holberton.h"

/**
 * _memset - fill memory with constant byte
 * description: fill memory with constant byte
 * @s: character
 * @b: character
 * @n: unsigned integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
	*s = b;
	s++;
	n--;
	}
	return (s);
}
