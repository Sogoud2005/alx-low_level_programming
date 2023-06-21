#include <stdio.h>
#include "main.h"
/**
 * main - a program
 * Return: 0
*/
int main(void)
{
int n;
long f = 1, s = 2;
while (n < 50)
{
if (n == 0)
{
printf("%d, ", f);
}
else if (n == 1)
{
printf("%d", s);
}
else
{
s += f;
f = s - f;
printf(", %d", f);
}
n++;
}
_putchar('\n');
return (0);
}
