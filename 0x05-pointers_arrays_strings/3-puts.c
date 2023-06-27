#include "main.h"
/**
 * _puts - a program
 * @str: a character
 * Return: nothing
*/
void _puts(char *str)
{
	*str = 0;
	while (*str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
