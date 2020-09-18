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
	int lower_a = tolower(a);
	putchar(lower_a);
	}
		return (0);
	}
