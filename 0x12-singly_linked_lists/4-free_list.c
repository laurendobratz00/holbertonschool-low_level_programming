#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * free_list - function that frees a singly linked list
 * @head: head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	if (head->next != NULL)
	{
		free_list(head->next);
	}
		free(head->str);
		free(head);

}
