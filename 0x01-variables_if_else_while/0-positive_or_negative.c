#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter any number: \n");
	scanf("%d", &n);
	if (n > 0)
		printf("Number is positive \n", n);
	if (n <0)
		printf("Number is negative \n", n);
	if (n == 0)
		printf("Number is ZERO \n")
	/* your code goes there */
	return (0);
}
