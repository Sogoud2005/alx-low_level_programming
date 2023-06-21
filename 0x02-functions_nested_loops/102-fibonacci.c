#include <stdio.h>
#include "main.h"
/**
 * main - a program
 * Return: 0
*/
int main(void)
{
int n = 0;
long f = 1, s = 2;
while (n < 50)
{
if (n == 0)
{
printf("%ld, ", f);
}
else if (n == 1)
{
printf("%ld", s);
}
else
{
s += f;
f = s - f;
printf(", %ld", f);
}
++n;
}
_putchar('\n');
return (0);
}
