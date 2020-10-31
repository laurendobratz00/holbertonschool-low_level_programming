#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add note to the front of a linked list
 * @head: first node
 * @str: string, needs to be duplicated
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0;

	while (str[i] != '\0')
		i++;
	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = (*head);

	(*head) = newnode;

	return (newnode);
}
