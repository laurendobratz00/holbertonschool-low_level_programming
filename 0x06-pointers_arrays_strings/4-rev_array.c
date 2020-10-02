#include "holberton.h"

/**
 * reverse_array - reverse array
 * description: reverse array
 * @a: integer
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, *ptr = a, tmp;

	for (i = 0; i < (n - 1); i++)
		ptr++;
	for (i = 0; i < n; i++)
	{
		while (a < ptr)
	{
		tmp = *a;
		*a = *ptr;
		*ptr = tmp;
		ptr--;
		a++;
	}
	}
}
