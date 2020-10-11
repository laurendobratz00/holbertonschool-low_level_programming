#include "holberton.h"
#include <stdio.h>

/**
 * program_name - print program name
 * description: print program name
 * @argc: integer
 * @argv: character
 * Return: 0
 */

int program_name(int argc, char *argv[])
{
	printf("program's name is: %s\n", argv[0]);
	return (0);
}
