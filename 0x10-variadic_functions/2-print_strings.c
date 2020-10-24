#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: const char
 * @n: const unsigned int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (args == NULL)
			printf("(nil)");

		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(args);
}