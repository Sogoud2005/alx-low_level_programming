#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints the last digit of a number
 * Return: 0 (Success)
*/
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
int last;
last = n % 10;

if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is zero\n", n, last);
}
else if (last < 6 && last != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
return (0);
}
