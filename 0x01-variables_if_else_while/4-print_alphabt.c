#include <stdio.h>

/**
 * main - a program that prints the alphabet
 * Return: 0 (Success)
*/

int main(void)
{
char alpha, q, e;
q = 'q';
e = 'e';
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != e && alpha != q)
{
putchar(alpha);
}
}
putchar('\n');
return (0);
}
