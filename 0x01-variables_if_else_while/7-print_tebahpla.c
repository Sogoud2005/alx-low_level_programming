#include <stdio.h>

/**
 * main - a program that prints numbers
 * Return: 0 (Success)
*/

int main(void)
{
char alpha;

for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
