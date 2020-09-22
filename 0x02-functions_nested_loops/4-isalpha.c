#include <stdio.h>
#include "holberton.h"

/**
 * _isalpha - void
 * @c: find alpha
 * Return: 0
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 122)
	{
		return (1);
			}
	else
	{
		return (0);
			}
}
