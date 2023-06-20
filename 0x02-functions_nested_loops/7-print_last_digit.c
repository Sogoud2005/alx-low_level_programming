#include "main.h"
/**
 * print_last_digit - entry point
 * @n: the number
 * Return: the last digit
*/
int print_last_digit(int n)
{
int l;
l = n % 10;
if (n < 0)
{
_putchar(-l + '0');
return (-l);
}
else
{
_putchar(l + '0');
return (l);
}
_putchar("\n");
}
