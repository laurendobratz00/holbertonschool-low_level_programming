#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of a linked list
 * @head: pointer to the head of the list
 * @index: unsigned int
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *traverse;
	unsigned int i;

	if (!head)
		return (NULL);
	traverse = head;
	while (traverse != NULL)
	{
		traverse = traverse->next;
		i++;
	}
	if (index > i)
		return (NULL);
	traverse = head;
	i = 1;
	while (i <= index)
	{
		if (traverse->next == NULL)
			return (NULL);
		i++;
		traverse = traverse->next;
	}
	return (traverse);
}
