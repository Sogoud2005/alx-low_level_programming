#include "main.h"

/**
 * get_endianness - gets the endianness of a machine
 * Return: 1 or 0
*/
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
