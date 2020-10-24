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

	x = 0;

	while (format)
	{
		va_start(args, format);
	while (format[x] != '\0')
	{
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
		break;
	}
	x++;
	if (format[x] == 'c' || format[x] == 'i' ||
format[x] == 'f' || format[x] == 's')
		printf(", ");
	}
	va_end(args);
	break;
	}
	printf("\n");
}
