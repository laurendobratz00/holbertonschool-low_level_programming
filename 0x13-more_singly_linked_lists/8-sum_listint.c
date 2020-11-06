#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - sum of all data in a linked list
 * @head: pointer to address of listint_t
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t current;

	assert(head != NULL);

	listint_t current = head;
	int sum = 0;

	for (current = current->next; current != NULL; current = current->next)
	{
		sum = sum + current->next;
	}
	return (sum);
}
