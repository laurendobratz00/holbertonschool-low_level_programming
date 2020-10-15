#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array of integers
 * @min: integer
 * @max: integer
 * Return: p
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	i = 0;
		while (min <= max)
			p[i++] = min++;
	return (p);
}
