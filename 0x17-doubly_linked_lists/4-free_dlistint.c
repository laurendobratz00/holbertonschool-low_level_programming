#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dlistint - function that frees a doubly linked list
 * @head: head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *prev = head;

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev);
		prev = tmp;
	}
}
