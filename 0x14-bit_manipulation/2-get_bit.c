#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int y;

	if (index > 64)
		return (-1);
	y = (n >> index) & 1;
	return (y);
}
