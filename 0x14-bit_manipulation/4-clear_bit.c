#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets bit to 0
 * @n: pointer to int
 * @index: bit to set
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1 << index;

	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (*n & ~m) | (0 << index);
	return (1);
}