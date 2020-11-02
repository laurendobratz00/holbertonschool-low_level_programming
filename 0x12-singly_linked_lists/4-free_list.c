#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees a singly linked list
 * @head: head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;
	list_t *prev = head;

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev->str);
		free(prev);
		prev = tmp;
	}
}
