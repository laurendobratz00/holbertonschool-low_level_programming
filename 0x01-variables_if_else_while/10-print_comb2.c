#include <stdio.h>
#include <stdlib.h>

/**
 * main- void
 * description: Print numbers 00 to 99
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9 ; a++)
	{
		for (b = 0; b <= 9 ; b++)
		putchar(a);
		putchar(b);
	}
		putchar(',');
		putchar(' ');

return (0);
}
