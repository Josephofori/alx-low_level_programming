#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry
 *
 * Return: 1
 *
 */
int main(void)
{
char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, txt, sizeof(txt) - 1);
return (1);
}
