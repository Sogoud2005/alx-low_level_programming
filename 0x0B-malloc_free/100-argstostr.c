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

	for (; s[size] != '\0'; size++)
	{
		;
	}
	return (size);
}
/**
 * *argstostr - a
 * @ac: a
 * @av: a
 * Return: pointer
*/
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, nc = 0, m = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for(; i < ac; i++, nc++)
	{
		nc += _strlen(av[i]);
	}
	s = malloc(nc * sizeof(char) + 1);
	if (s == 0)
		return (NULL);
	for(i = 0; i < ac; i++)
	{
		for(j = 0; av[i][j] != '\0'; j++, m++)
			s[m] = av[i][j];
		s[m] = '\n';
		m++;
	}
	s[m] = '\0';
	return (s);
}
