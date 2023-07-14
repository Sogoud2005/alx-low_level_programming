#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *array_range - a
 * @min: a
 * @max: a
 * Return: a
*/
int *array_range(int min, int max)
{
	int c, i;
	int *p;

	if (min > max)
		return (NULL);
	c = max - min + 1;

	p = malloc(sizeof(int) * c);

	if (!p)
		return (NULL);
	for (i = 0; i < c; i++)
		p[i] = min++;
	return (p);
}
