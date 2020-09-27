#include "holberton.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0
 */

int largest_number(int a, int b, int c)

{
	if (a >= b)
	{
		if (a >= c)
		{
			_putchar(a);
		}
		else
		{
			_putchar(c);
		}
	}
	else
		{
			if (b >= c)
			{
				_putchar(b);
			}
			else
			{
				_putchar(c);
			}
		}
	return (0);
}
