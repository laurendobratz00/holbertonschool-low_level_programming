#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: string
 * description: print string in reverse
 * Return: void
 */

void print_rev(char *s)
{

	int len;

	len = 0;

	while (*(s + len) != '\0')
	{
		s++;
	}
	s--;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar(10);
}
