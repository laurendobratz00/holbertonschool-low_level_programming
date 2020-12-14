#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - print 1 if c is a digit
 * description: print 1 if c is a digit
 * @c: digit
 * Return: 0
 */

int _isdigit(int c)

{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
