#include "main.h"
/**
 *_isalpha - checks to see if a variable is an alphabet
 * @c: the character to be checked
 *Return: 1 if an alphabet or 0 otherwise
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
