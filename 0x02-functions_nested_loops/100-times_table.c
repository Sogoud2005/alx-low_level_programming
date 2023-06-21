#include "main.h"
/**
 * print_times_table - prints numbers
 * @n: a character
 * Return: nothing
*/
void print_times_table(int n)
{
int a, b, c;
if (n <= 15 &&  n >= 0)
{
for (a = 0; a <= n; a++)
{
_putchar('0');
for (b = 1; b <= n; n++)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
c = a * b;
if (c <= 9)
{
_putchar(' ');
_putchar(c + '0');
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
}
