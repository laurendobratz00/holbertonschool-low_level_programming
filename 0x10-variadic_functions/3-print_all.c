#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdbool.h>

/**
 * print_all - print anything
 * @*: const char
 * @format: const
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int x;
	int b;

	x = 0;

	while (format)
	{
		va_start(args, format);
	while (format[x] != '\0')
	{
		b = 1;
	switch (format[x])
	{
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 'i':
		printf("%d", va_arg(args, int));
		break;
	case 'f':
		printf("%f", va_arg(args, double));
		break;
	case 's':
		printf("%s", va_arg(args, char *));
		break;
	default:
		b = 0;
		break;
	}
	if (format[x + 1] && b)
		printf(", ");
	x++;
	}
	va_end(args);
	break;
	}
	printf("\n");
}
