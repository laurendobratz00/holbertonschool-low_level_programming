#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_b4_main(void)__attribute__((constructor));

/**
 * print_b4_main - prints before main is executed
 * Return: void
 */

void print_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
