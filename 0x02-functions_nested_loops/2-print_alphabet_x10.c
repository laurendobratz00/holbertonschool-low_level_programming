#include <stdio.h>
#include "holberton.h"

/**
 * main - void
 * description: print alpha
 * Return: 0
 */

void print_alphabet_x10(void)

{
	char a;
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		_putchar('\n');
	}
}
