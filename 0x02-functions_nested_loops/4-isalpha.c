#include "main.h"
/**
 * _isalpha - is a program
 * @c: an ASCII character
 * Return: 1 if it is alpha, 0 if else
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c <= 122 && c >= 97))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
