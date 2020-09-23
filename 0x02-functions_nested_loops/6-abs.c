#include "holberton.h"

/*
 * _abs(int) - printing absolute values
 * description: printing absolute values
 * @n: a number that prints the absolute value
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
