#include "holberton.h"

int _prime(int i, int n);

/**
 * is_prime_number - print prime number
 * description: print prime number
 * @n: integer
 * Return: (_prime(i + 1, n)
 */


int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (_prime(i, n));
}

/**
 * _prime - print prime number
 * description: print prime number
 * @n: integer
 * @i: integer
 * Return: (_prime(i, n))
 */

int _prime(int i, int n)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	return (_prime(i + 1, n));
}
