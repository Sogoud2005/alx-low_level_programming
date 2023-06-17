#include <stdio.h>

/**
 * main - a program that prints digits
 * Return: 0 (Success)
*/

int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
