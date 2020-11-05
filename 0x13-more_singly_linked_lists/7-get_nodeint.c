#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a linked list
 * @head: pointer to the head of the list
 * @index: unsigned int
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse;
	unsigned int i;

	if (!index)
		return (NULL);
	traverse = head;
	while (i < index)
	{
		if (traverse->next == NULL)
			return (NULL);
		i++;
		traverse = traverse->next;
	}
	return (traverse);
}
