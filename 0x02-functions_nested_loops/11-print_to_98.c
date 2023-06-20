#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function
 * @n: a character
 * Return: nothing
*/
void print_to_98(int n)
{
int count;
if (n > 98)
{
for (count = n; n > 98; n--)
{
printf("%d", count);
_putchar(',');
_putchar(' ');
}
}
else
{
for (count = n; n < 98; n++)
{
printf("%d", count);
_putchar(',');
_putchar(' ');
}
}
printf("98\n");
}
