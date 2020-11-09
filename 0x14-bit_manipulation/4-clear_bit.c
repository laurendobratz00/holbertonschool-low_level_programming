#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * clear_bit - clear bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 64 || !n)
                return (-1);
        if (n == NULL)
                return (-1);
        *n = *n & (~(1 << index));
        return (1);
}
