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
	int i;
	int *ptr = a;
	int tmp;

	n -= 1;

	for (i = 0; i < n; i++)
		ptr++;
	for (i = 0; i < n; i++)
	{
		tmp = *a;
		*a = *ptr;
		*ptr = tmp;
		ptr--;
		a++;
	}
}
