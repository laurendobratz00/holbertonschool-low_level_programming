#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments
 * description: print all arguments
 * @argc: integer
 * @argv: character
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
