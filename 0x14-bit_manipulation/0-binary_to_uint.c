#include "holberton.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer char
 * Return: dec
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, num = 0;

	if (b == NULL)
		return (0);
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		num = num << 1;
		if (b[x] == '1')
			num = num ^ 1;
		x++;
	}
	return (num);
}
