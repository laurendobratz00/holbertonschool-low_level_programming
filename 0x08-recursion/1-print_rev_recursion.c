#include "holberton.h"

/**
 * _puts_recursion - print string
 * description: print string
 * @s: character
 * Return: void
 */

void _print_rev_recursion(char *s)
{
        if (*s == '\0')
        {
                return;
        }
        _print_rev_recursion(s + 1);
	_putchar(*s);
}
