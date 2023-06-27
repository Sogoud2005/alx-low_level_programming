#include "main.h"
/**
 * _strlen - a program
 * @s: a character
 * Return: nothing
*/
int _strlen(char *s)
{
	size_t l = 0;

	while (*s++)
		l++;
	return (l);
}
