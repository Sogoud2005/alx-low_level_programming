#include <stdio.h>

/**
 * main - a program that prints numbers
 * Return: 0 (Success)
*/

int main(void)
{
char n;
n = 0;
while (n < 10)
{
printf("%u", n);
n++;
}
putchar('\n');
return (0);
}
