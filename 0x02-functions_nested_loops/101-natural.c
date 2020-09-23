#include <stdio.h>

/**
 * main - void
 * description: sum
 * Return: 0
 */

int main(void)

{
	long unsigned int i, sum = 0;

	clrscr();

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			sum = sum + 1;
		}
	}
	printf("%d\n", sum);
	getchar();
	return (0);
}
