#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function entry
 * @str: input
 * Return: pointer for success or NULL for error
 */

char *_strdup(char *str)
{
char *other_str;
unsigned int j = 0;
unsigned int len = 0;

if (str == NULL)
{
return (NULL);
}
while (str[len])
len++;
other_str = malloc(sizeof(char) * (len + 1));
if (other_str == NULL)
{
return (NULL);
}
while ((other_str[j] = str[j]) != '\0')
j++;
return (other_str);
}
