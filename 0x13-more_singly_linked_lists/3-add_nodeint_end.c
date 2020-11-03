#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: double pointer
 * @str: string
 * Return: new address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	last = (*head);

	new->next = NULL;
	new->n = n;

	if ((*head) == NULL)
	{
		(*head) = new;
		return ((*head));
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (last);
}
