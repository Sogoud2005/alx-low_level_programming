#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - a
 * @s: a
 * @b: a
 * @n: a
 * Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc - a
 * @nmemb: a
 * @size: a
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == 0)
		return (NULL);

	_memset(p, 0, size * nmemb);

	return (p);
}
