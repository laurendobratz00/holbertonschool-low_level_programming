#include "holberton.h"

/**
 * rev_string - reverse a string
 * description: reverse a string
 * @s: character
 * Return: void
 */

void rev_string(char *s)
{
char temp;
int i;
int j;

i = 0;
while (s[i] != '\0')
i++;

i--;

for (j = 0; j <= i; j++, i--)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
	}
}
