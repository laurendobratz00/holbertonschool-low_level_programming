#include "holberton.h"

/**
 * _puts - print string
 * description: print string
 * @str: string
 * Return: void
 */

void _puts(char *str)

{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}
