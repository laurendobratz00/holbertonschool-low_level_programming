#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments
 * description: print number of arguments
 * @argc: integer
 * @argv: void
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
