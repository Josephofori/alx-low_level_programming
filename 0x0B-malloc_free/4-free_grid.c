#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - entry point
 * @grid: input value
 * @height: input value
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int f;

for (f = 0; f < height; f++)
{
free(grid[f]);
}
free(grid);
}
