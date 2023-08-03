#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 1 or 0
*/
int get_endianness(void)
{
	unsigned int i = 5;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
