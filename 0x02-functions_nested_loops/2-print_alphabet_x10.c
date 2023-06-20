#include "main.h"
/**
 * print_alphabet_x10 - a program
 * Return: Always 0
*/
void print_alphabet_x10(void);
{
int n, i;
for (n = 1; n <= 10; n++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar("\n");
}
}
