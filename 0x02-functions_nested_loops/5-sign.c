#include "main.h"
/**
 * print_sign - a function that prints the sign
 * @n: a number sign
 * Return: 1 if +, 0 if '0',-1 if -
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar("\n");
}
