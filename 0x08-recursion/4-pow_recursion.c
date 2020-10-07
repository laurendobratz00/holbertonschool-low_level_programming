#include "holberton.h"

/**
 * _pow_recursion - return value x to the power of y
 * description: return value x to the power of y
 * @x: integer
 * @y: integer
 * Return: x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x && y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
