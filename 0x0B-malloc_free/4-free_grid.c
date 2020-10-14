#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - 2 dimensional grid
 * @grid: integer
 * @height: integer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
