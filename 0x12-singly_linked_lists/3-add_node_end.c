#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node to the end
 * @head: double pointer
 * @str: string
 * Return: new address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int i = 0;

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	last = (*head);

	while (str[i] != '\0')
		i++;
	new->next = NULL;
	new->len = i;
	new->str = strdup(str);

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
