/**
* main- void
* description: Printing numbers
* Return: 0
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d\n", n);
	}
	else if (n % 10 < 6 && (n % 10 != 0))
	{
		printf("and is less than 6 and not 0 %d\n", n);
	}
	else
	{
		printf("and is 0 %d\n", n);
	}
	return (0);
}
