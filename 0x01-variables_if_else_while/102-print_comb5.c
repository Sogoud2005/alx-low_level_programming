#include <stdio.h>

/**
 * main - a program to print numbers
 * Return: 0 (Success)
*/

int main(void)
{
int n, s, t, f;
for (n = '0'; n <= '9'; n++)
{
for (s = '0'; s < '9'; s++)
{
for (t = '0'; t <= '9'; t++)
{
for (f = '0'; f <= '9'; f++)
{
if (n != t)
{
putchar(n);
putchar(s);
putchar(' ');
putchar(t);
putchar(f);
if (n == '9' && s == '8' && t == '9' && f == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
