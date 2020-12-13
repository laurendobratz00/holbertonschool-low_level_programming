#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add note to the front of a linked list
 * @head: first node
 * @n: int
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = (*head);

	(*head) = newnode;

	return (newnode);
}
