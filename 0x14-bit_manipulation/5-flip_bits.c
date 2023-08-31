#include "main.h"

/**
 * flip_bits - flips bits
 * @n: number 1
 * @m: number 2
 * Return: number of bits fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		if (xor & 1ul)
		{
			i++;
		}
		xor = xor >> 1;
	}
	return (i);
}
