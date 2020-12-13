#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node to the end
 * @head: double pointer
 * @n: const int
 * Return: new address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	last = (*head);

	new->next = NULL;
	new->n = n;

	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return ((*head));
	}
	last = (*head);
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;
	return (last);
}
