#include <stdio.h>

/**
 * main - a program that prints numbers of base
 * Return: 0 (Success)
*/

int main(void)
{
int n;
char l;

for (n = 0; n <= 9; n++)
{
putchar(n);
}
for (l = 'a'; l <= 'f'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
