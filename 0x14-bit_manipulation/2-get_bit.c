#include "main.h"

/**
 * get_bit - gets bit at index
 * @n: number
 * @index: index of bit
 * Return: 0 or 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
