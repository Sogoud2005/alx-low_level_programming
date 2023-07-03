#include "main.h"
/**
 * *_memset - a program
 * @s: ascii
 * @b: ascii
 * @n: ascii
 * Return: a pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	_putchar('\n');
	return (s);
}
