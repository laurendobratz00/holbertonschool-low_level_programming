#include <stdio.h>
#include "holberton.h"

/**
 * print_numbers - print one through nine
 * description: print one through nine
 * Return: none
 */

void print_numbers(void)

{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
	}
	{
	_putchar('\n');
	}
}
