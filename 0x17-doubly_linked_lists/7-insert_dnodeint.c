#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer
 * @idx: unsigned int
 * @n: int
 * Return: address of the new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	else
	{
		newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
		current = *h;
		for (i = 1; i <= (idx - 1); i++)
		{
			newnode->n = n;
			current = current->next;
		}
		newnode->next = current->next;
		current->next = newnode;
	}
	return (newnode);
}
