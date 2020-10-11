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
	if (argc > 0)
	{
		printf("%s ", argv[0]);
	}
	printf("\n");
	return (0);
}
