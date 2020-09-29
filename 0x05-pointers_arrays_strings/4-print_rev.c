#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: string
 * description: print string in reverse
 * Return: void
 */

void print_rev(char *s);
{

	int len;

	while (*(s + len) != '\0')
	{
		i++;
	}
	i--;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar(10);
}
