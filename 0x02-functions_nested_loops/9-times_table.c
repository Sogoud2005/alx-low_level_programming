#include "main.h"
/**
 * times_table - a program that prints the times table
 * Return: nothing
*/
void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
_putchar('0');
for (b = 1; b <= 9; b++)
{
_putchar(',');
_putchar(' ');
c = a * b;
if (c <= 9)
{
_putchar(' ');
_putchar(c + '0')
}
else
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}
