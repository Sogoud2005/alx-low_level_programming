#include "main.h"

/**
 * clear_bit - sets a bit to 0
 * @n: number
 * @index: index of bit
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n &= (~(1L << index))));
}
