#include "holberton.h"

/**
 * print_array - print n elements of an array of integers
 * description: print n elements of an array of integers
 * @a: integer
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < (n - 1))
{
printf(", ");
}
}
}
