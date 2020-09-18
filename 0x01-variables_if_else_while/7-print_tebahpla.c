#include <stdio.h>

/**
 * main- void
 * description: prints lowercase alpha in reverse
 * Return: 0
*/

int main(void)
{
	int a;

	for (a = 'z' ; a >= 'a' ; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
