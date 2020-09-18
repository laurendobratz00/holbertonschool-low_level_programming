/**
 * main- void
 * description: Print a-z
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	char a;

	for (a = 'A' ; a <= 'Z' ; a++)
{
	a = tolower(a);
	putchar(a);
	}
		return (0);
	}
