#include <stdio.h>

/**
 * main - void
 * description: print fizz and buzz and fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
		putchar('\n');
	return (0);
}
