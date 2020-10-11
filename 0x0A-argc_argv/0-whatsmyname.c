#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print program name
 * description: print program name
 * @argc: integer
 * @argv: character
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);
}
