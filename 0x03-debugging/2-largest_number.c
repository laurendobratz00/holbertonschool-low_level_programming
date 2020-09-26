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
	int a, b, c;

	if (a > b && a > c)
	{
		return (a);
	}
	else if (b > a && b > c)
	{
		return (b);
	}
	else
	{
		return (c);
	}

	return (0);
}
