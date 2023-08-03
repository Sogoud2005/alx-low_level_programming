#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: pointer to int
 * @index: bit to set
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1 << index;

	while (n)
	{
		*n = (*n & ~m) | (1 << index);
		return (1);
	}
	return (-1);
}
