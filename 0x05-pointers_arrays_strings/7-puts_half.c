#include "holberton.h"

/**
 * puts_half - print half a string
 * description: print half a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)

{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	if (i % 2 != 0)
	{
		i = i + 1;
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
