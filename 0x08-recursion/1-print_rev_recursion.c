#include "main.h"
/**
 * _print_rev_recursion - a program
 * @s: ascii
 * Return: nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
