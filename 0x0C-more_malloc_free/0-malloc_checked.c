#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - a
 * @b: ascii
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p != 0)
		return (p);
	else
		exit (98);
}
