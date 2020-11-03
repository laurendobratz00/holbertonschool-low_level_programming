#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to listint_t
 * Return: numnodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numnodes = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		numnodes++;
	}
	return (numnodes);

}
