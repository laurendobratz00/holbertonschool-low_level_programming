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
	if (head != NULL)
	{
	if (head->next != NULL)
		free_list(head->next);
	if (head->str != NULL)
		free(head->str);
	free(head);
	}
}
