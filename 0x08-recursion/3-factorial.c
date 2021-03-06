#include "holberton.h"

/**
 * factorial - return factorial
 * description: return factorial
 * @n: integer
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
