#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of a char array
 */
char *argstostr(int ac, char **av)
{
char *aout;
int q, i, j, ia;

if (ac == 0)
return (NULL);

for (q = i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);

for (j = 0; av[i][j] != '\0'; j++)
q++;
q++;
}

aout = malloc((q + 1) * sizeof(char));

if (aout == NULL)
{
free(aout);
return (NULL);
}

for (i = j = ia = 0; ia < q; j++, ia++)
{
if (av[i][j] == '\0')
{
aout[ia] = '\n';
i++;
ia++;
j = 0;
}
if (ia < q - 1)
aout[ia] = av[i][j];
}
aout[ia] = '\0';

return (aout);
}
