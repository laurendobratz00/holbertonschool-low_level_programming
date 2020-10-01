#include "holberton.h"

/**
 *
 *
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

        for (n = 0; src[n] != n; n++)
        {
                ;
        }
        for (n = 0; dest[n] != n; n++)
        {
                ;
        }
        for (i = 0; i <= n ; i++)
        {
                *(dest + (n + i)) = src[i];
        }
	return (dest);
}
