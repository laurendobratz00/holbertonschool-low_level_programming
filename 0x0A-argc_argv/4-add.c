#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * description: add positive numbers
 * @argc: integer
 * @argv: character
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a;
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != '\0'; a++)
		{
			if (!isdigit(argv[i][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += (atoi(argv[i]));
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
