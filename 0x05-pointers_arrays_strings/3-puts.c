#include "main.h"
/**
 * _puts - a program
 * @str: a character
 * Return: nothing
*/
void _puts(char *str)
{
	int l = 0;

	while (*str++)
	{
		_putchar(*str);
		l++;
	}
	_putchar('\n');
}
