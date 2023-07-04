#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array
 * @height: height of the array.
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
if (grid != NULL && height != 0)
{
for (; height > 0; height--)
free(grid[height]);
free(grid[height]);
free(grid);
}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array
 */
char **strtow(char *str)
{
char **aout;
unsigned int q, height, i, j, a1;

if (str == NULL || *str == '\0')
return (NULL);
for (q = height = 0; str[q] != '\0'; q++)
if (str[q] != ' ' && (str[q + 1] == ' ' || str[q + 1] == '\0'))
height++;
aout = malloc((height + 1) * sizeof(char *));
if (aout == NULL || height == 0)
{
free(aout);
return (NULL);
}
for (i = a1 = 0; i < height; i++)
{
for (q = a1; str[q] != '\0'; q++)
{
if (str[q] == ' ')
a1++;
if (str[q] != ' ' && (str[q + 1] == ' ' || str[q + 1] == '\0'))
{
aout[i] = malloc((q - a1 + 2) * sizeof(char));
if (aout[i] == NULL)
{
ch_free_grid(aout, i);
return (NULL);
}
break;
}
}
for (j = 0; a1 <= q; a1++, j++)
aout[i][j] = str[a1];
aout[i][j] = '\0';
}
aout[i] = NULL;
return (aout);
}
