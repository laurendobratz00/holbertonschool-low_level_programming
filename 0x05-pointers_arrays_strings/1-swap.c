#include "holberton.h"

/**
 * swap_int - swaps two variables
 * @a: number 1
 * @b: number 2
 * description: swaps two variables
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
