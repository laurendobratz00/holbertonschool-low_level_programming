#include "holberton.h"

/**
 *
 *
 *
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;

	while (n > 0)
		*p = b;
	p++;
	n--;
	return (s);
}
