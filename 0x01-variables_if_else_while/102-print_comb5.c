#include <stdio.h>

/**
 * main - a program that prints numbers
 * Return: 0 (Success)
*/

int main(void)
{
int f, s;
for (f = '0'; f <= '98'; f++)
{
for (s = f + 1; s <= '99'; s++)
{
putchar((f / 10) + '0');
putchar((f % 10) + '0');
putchar(' ');
putchar((s / 10) + '0');
putchar((s & 10) + '0');
if (f == '98' && s == '99')
continue;
putchar(',');
putchar(' ');
}
}
purchar('\n');
return (0);
}
