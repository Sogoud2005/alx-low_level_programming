#include <stdio.h>
#include "main.h"
/** 
 * main - a function that adds
 * Return: 0
*/
int main(void)
{
int n, s = 0;
while (n <= 1024)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
s += n;
}
n++;
}
printf("%d\n", s);
return (0);
}
