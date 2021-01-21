#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: unsigned long int
 * Return: ht
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (size < 1)
	{
		return (NULL);
	}
	if (ht == NULL)
	{
		return (NULL);
	}
        ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (!ht->array)
	{
		return (NULL);
	}

	return (ht);
}
