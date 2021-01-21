#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: pointer
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tdel = NULL, *tmp = NULL;
	unsigned long int x = 0;

	if (ht == NULL)
		;
	else
	{
		while (x < ht->size)
		{
			tmp = ht->array[x];
			while (tmp != NULL)
			{
				tdel = tmp;
				tmp = tmp->next;
				free(tdel->key);
				free(tdel->value);
				free(tdel);
			}
			x++;
		}
		free(ht->array);
		free(ht);
	}
}
