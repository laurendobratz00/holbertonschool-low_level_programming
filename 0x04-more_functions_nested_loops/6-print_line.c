#include <stdio.h>
#include "holberton.h"

/**
 * print_line - print straight line
 * description: print straight line
 *
 */

void print_line(int n)
{
	int ln;

	if (n > 0)
	{
		for (ln = 0 ; ln <= n ; ln++)
			_putchar('_');
	}
	_putchar("\n");

}
