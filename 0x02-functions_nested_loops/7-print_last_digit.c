#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - print last digit
 * description: print last digit
 * @r: print last digit
 * Return: last digit
 */

int print_last_digit(int r);

{
	r = (r % 10);
	if (r < 0)
	{
		r = (r * -1);
	}
	_putchar ('0' + r);
	return (r);
}
