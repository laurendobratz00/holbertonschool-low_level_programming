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

	p = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		p[i] = 0;
	return (p);
}
