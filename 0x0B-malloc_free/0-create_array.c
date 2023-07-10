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
	if (size > 0)
	{
		int i = size;

	char *p;

	p = malloc(i * sizeof(char));

	p[0] = c;

	return (p);
	}
	else
	{
		return(NULL);
	}
	free(p);
}
