#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function's entry point
 * @size: array size
 * @c: input
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
