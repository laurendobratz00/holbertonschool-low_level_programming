#include <stdio.h>

/**
 *
 *
 *
 */

int main (void)
{

	int sum = 0;

	for (int i = 0; i < 1024; i += 5) {
		sum += i;
	}
	for (int i = 0; i < 1024; i += 3) {
		if (i % 5) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
