#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - a
 * @str: a
 * Return: value
*/
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *p;

	if (*str == '\0')
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	p = malloc(size * sizeof(*str) + 1);
	if (p == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			p[i] = str[i];
		return (p);
	}
}
