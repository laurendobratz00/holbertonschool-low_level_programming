#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - function that frees a singly linked list
 * @head: head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *prev;

	if (head == NULL)
		return;
	prev = (*head);

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev);
		prev = tmp;
	}
	(*head) = prev;
}
