#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a program
 * @a: ascii
 * @size: ascii
 * Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int i, j;
	int s1 = 0, s2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		s1 = s1 + a[i];
	}
		for (j = 0; j <= (size * size); j = j + size - 1)
		{
		s2 = s2 + a[j];
		}
		printf("%d, %d\n", s1, s2);
}

