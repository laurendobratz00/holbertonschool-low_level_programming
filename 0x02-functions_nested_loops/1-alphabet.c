#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet- void
 * description: print alphabet 10 times
 * Return: 0
 */

void print_alphabet(void)

{
	char a;
	char x = '\n';

	for (a = 'a' ; a <= 'z' ; a++)
	{_putchar(a);
	}
	_putchar(x);
}
