#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - a
 * @nmemb: a
 * @size: a
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == 0)
		return (NULL);
	return (p);
}
