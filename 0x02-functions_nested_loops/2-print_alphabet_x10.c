#include "main.h"
/**
 *
 *Return:0
 */

void print_alphabet_x10(void)
{
int i;
char letter;

while(i < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
i++;
}
}
