#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all elements of a list
 * @h: pointer to dlistint_t node
 * Return: numnodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
