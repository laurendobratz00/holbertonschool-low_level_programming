#include "holberton.h"

/**
 * _strlen_recursion - length of string
 * description: length of string
 * @s: character
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
