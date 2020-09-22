#include <stdio.h>
#include "holberton.h"

/**
 * main- void
 * description: find alpha
 * Return: 0
 */

int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
			}
	else
		return (0);
			}
