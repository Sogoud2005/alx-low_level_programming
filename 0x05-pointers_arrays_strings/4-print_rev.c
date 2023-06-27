#include "main.h"
/**
 * print_rev - a program
 * @s: a character
 * Return: nothing
*/
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != 0)
	{
		l++;
	}
	for (l -= 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
