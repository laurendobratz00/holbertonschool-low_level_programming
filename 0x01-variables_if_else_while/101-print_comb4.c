#include <stdio.h>

/**
 * main- void
 * description: All combos of 3 digits
 * Return: 0
*/

int main(void)
{
	int i, n, t = 1;
	int new = 10;
	int sp = ' ';
	int co = ' ';

	for (i = 0; i <= 999; ++i)
	{
		for (n = i;;)
		{
			if (n / 10 % 10 >= n % 10)
				break;

n /= 10;
			if (!n && i > 10)
{
				if (t)
					t = 0;
				else
				{
					putchar(co);
					putchar(sp);
				}
				putchar((i % 1000 / 100) + '0');
				putchar((i % 100 / 10) + '0');
				putchar((i % 10) + '0');
				break;
			}
		}
	}
	putchar(new);

	return (0);
}
