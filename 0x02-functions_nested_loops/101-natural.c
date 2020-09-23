#include <stdio.h>

/**
 *
 *
 *
 */

int main ( void ) {

	int sum = 0;
	int cnt = 6;

	for (int i = 0; i < 1024; i += 5) {
		sum += i;
	}
	for (int i = 0; i < 1024; i += 3) {
		if (--cnt == 0) cnt = 5;
		else sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
