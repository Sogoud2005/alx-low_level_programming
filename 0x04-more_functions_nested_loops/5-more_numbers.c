#include "main.h"
/**
 * more_numbers - a program
 * Return: nothing
*/
void more_numbers(void)
{
int n, c, i;
for (c = 0; c < 10; c++)
{
for (n = 0; n <= 14; n++)
{
i = n;
if (n > 9)
{
_putchar(1 + '0');
i = n % 10;
}
_putchar(i + '0');
}
_putchar('\n');
}
}
