#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: const unsigned char
 * @size: unsigned long int
 * Return: yes
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash;
	unsigned int i;

	hash = 0;
	i = 0;
	while (key && key[i])
	{
		hash = (hash + key[i]) % size;
		++i;
	}
	return (hash);
}
