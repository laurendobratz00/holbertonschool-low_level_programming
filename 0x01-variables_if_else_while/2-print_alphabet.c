/**
 * main- void
 * description: Print a-z
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	char i;

	printf("\n\nLower case characters:\n");

	for (i = 'a'; i <= 'z'; i++)
		printf("%c ", i);

	return (0);
	}
