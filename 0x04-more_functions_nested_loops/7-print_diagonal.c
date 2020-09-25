#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 * description: print diagonal line
 * @n: character
 */

void print_diagonal(int n)

{
	int ln, space;

	for (ln = 0; ln < n; ln++)
	{
		if (n > 1)
		{
			for (space = 0; space <= ln; space++)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
