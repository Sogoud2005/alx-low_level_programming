#include <stdio.h>

/**
 * main - a program that prints the alphabet
 * Return: 0 (Success)
*/

int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z' && alpha != ('e' || 'q'); alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
