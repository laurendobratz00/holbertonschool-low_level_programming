#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: pointer
 * @key: const char
 * @value: const char
 * Return: yes
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL)
	{
		return (0);
	}
	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);

	return (1);

}
