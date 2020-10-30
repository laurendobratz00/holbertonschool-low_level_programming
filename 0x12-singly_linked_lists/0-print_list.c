#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of a list
 * @h: pointer to list_t node
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t numnodes = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		{
			printf("[0] %p\n", h->str);
			h = h->next;
			numnodes++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			numnodes++;
		}
	}
	return (numnodes);

}
