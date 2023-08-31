#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to binary
 * Return: int or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec = dec * 2 + (*b++ - '0');
	}

	return (dec);
}
