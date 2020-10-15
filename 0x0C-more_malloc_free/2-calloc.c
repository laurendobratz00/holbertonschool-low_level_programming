#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocating memory for an array
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: yes
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;
	unsigned int total;

if (nmemb == 0 || size == 0)
return (NULL);

	total = nmemb * size;

	p = malloc(sizeof(char) * (total));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < (total); i++)
		p[i] = 0;
	return (p);
}
