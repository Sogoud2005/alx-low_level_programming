#include "main.h"
/**
 * _puts - a program
 * @str: a character
 * Return: nothing
*/
void _puts(char *str)
{
	while (*str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
