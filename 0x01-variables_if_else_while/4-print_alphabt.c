#include <stdio.h>

/**
 * main- void
 * description: Printing alphabet except q and e
 * Return: 0
*/

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
	if ((a != q) || (a != e))
	{
		putchar (a);
			}
	}
	return (0);
}
