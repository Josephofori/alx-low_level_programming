#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of value
 * @max: maximum range of values and number of elements
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *ptr, a; /*variable of an integer and a pointer*/

if (min > max)
return (NULL); /*check if minimum is greater then maximum then return NULL*/

ptr = malloc((max - min + 1) * sizeof(*ptr));
if (ptr == NULL)
return (NULL);
for (a = 0; min <= max; a++, min++)
ptr[a] = min;
return (ptr);
}
