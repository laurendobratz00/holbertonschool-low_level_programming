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
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter any number: ");
	scanf("%d", &n);
	lastDigit = n % 10;

	printf("Last digit = %d", lastDigit);
	return (0);
}
