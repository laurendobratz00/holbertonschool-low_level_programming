#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - prints the binary rep of a number
 * @n: unsigned long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int y;

	if (n > 1)
		print_binary(n >> 1);
	y = (n & 1);
	_putchar(y + '0');
}
