#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flips bits
 * @n: int1
 * @m: int2
 * Return: flips
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flip = 0;

	while (xor)
	{
		if (xor & 1)
		{
			flip++;
		}
		xor = xor >> 1;
	}
	return (flip);
}
