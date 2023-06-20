#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @d: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
int a;

a = d % 10; 
if (d < 0)
{
_putchar(-d + 48);
}
else
{
_putchar(a + '0');
}
return (a);
}
