#include <stdio.h>

/**
 * main- void
 * description: Prints base 16
 * Return: 0
*/

int main(void)
{
	int i, n;

	for (i = '0' ; i <= '9' ; i++)
{
	putchar(i);
}
	for (n = 'a' ; n <= 'f' ; n++)
{
		putchar(n);
}
putchar('\n');
return (0);
}
