#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - a
 * @s: a
 * Return: size
*/
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++);
	;
	return (size);
}
/**
 * *str_concat - a
 * @s1: adcii
 * @s2: ascii
 * Return: value
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int size1, size2;
	char *p;

	if (s1 == NULL)
		s1 = "";


	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	p = malloc(size1 * sizeof(char) + size2 * sizeof(char) + 1);

	if (p == 0)
		return (0);

	for (; i <= size1 + size2; i++)
	{
		if (i < size1)
		{
		p[i] = s1[i];
		}
		else
		{
		p[i] = s2 [i - size1];
		}
	}
	p[i] = '\0';
		return (p);
}

