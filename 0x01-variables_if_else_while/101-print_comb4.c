#include <stdio.h>

/**
 * main - a program that prints numbers
 * Return: 0 (Success)
*/

int main(void)
{
int h, t, u;
for (h = '0'; h < '8'; h++)
{
for (t = h + 1; t < '9'; t++)
{
for (u = t + 1; u <= '9'; u++)
{
if (h != t && h != u && t != u)
{
putchar(h);
putchar(t);
putchar(u);
if (h == '7' && t == '8' && u == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
