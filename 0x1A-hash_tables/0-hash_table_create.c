#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = (hash_table_t*)malloc(sizeof(hash_table_t));

	if (size < 1)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	array->size = size;
	return (array);
}
