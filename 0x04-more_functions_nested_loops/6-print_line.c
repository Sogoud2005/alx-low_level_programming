#include "main.h"
/**
 * print_line - a program
 * @n: a character
 * Return: nothing
*/
void print_line(int n)
{
	int c;

	if (n > 0)
	{
	for (c = 1; c <= n; c++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
