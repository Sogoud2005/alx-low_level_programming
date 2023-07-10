#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - a
 * @size: ascii
 * @c: ascii
 * Return: value
*/
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));

	if (size == 0 || p == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		p[size] = c;
	}
	return (p);
}
