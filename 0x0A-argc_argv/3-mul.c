#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a
 * @i: a
 * @j: a
 * Return: 0
*/
int main(int argc, char const *argv[])
{
int n;

if (argc == 3)
{
	n = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", n);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
