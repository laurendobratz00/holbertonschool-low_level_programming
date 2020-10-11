#include "holberton.h"

/**
 * _abs - printing absolute values
 * @x: a number that prints the absolute value
 *
 * Return: 0
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
	}
	return (x);
}
