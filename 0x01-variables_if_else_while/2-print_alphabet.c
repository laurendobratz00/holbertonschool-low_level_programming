/**
 * main- void
 * description: Print a-z
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
	}
