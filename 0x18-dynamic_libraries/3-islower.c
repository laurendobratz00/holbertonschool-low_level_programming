#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * _islower - check for lowercase
 * description: check for lowercase
 * @c: character
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
