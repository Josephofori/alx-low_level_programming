#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: input
 * @height: input
 * Return: pointer for success
 */

int **alloc_grid(int width, int height)
{
int **length;
int a;
int b;

if (width <= 0 || height <= 0)
{
return (NULL);
}
length = malloc(sizeof(int *) * height);

if (length == NULL)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
length[a] = malloc(sizeof(int) * width);

if (length[a] == NULL)
{
for (; a >= 0; a--)
free(length[a]);
free(length);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
length[a][b] = 0;
}
return (length);
}
