#include <stdio.h>
#include "holberton.h"

/**
 * print_most_numbers - print zero through nine without numbers
 * description: print zero through nine without numbers
 * @i: integer
 * Return: 0
 */

void print_most_numbers(void)

{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
		_putchar('\n');
}
