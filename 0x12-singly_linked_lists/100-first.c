#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * before_main - prints something before main file is executed
 * Return: void
 */

void before_main() __attribute__((constructor));
void after_main() __attribute__((destructor));

void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
