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
	char *p = s;
	while (n > 0)
	{
	*p = b;
	p++;
	n--;
	}
	return (s);
}
