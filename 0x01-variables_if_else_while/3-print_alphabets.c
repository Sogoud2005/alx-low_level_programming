#include <stdio.h>

/**
 * main - aprogram that prints the alphabet
 * Return: 0 (Success)
*/

int main(void)
{
char alphal;
char alphau;

for (alphal = 'a'; alphal <= 'z'; alphal++)
{
putchar(alphal);
}
for (alphau = 'A'; alphau <= 'Z'; alphau++)
{
putchar(alphau);
}
putchar('\n');
return (0);
}
