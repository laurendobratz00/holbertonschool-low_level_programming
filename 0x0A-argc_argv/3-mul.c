#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * description: multiplies two numbers
 * @argc: integer
 * @argv: character
 * Return: 1 with error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int a, b, prod;
	if (argc < 3)
	{
		printf("Error\n");
			return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	prod = a * b;
	printf("%d\n", prod);

	return 0;
}
