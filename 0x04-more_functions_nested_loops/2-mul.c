#include "main.h"
/**
 * mul - a program
 * @a: an ascii character
 * @b: an ascii character
 * Return: 0
*/
int mul(int a, int b)
{
	if (a < 0 || b < 0)
	{
	_putchar(-(a * b) + '0');
	}
	else
	{
	_putchar((a * b) + '0');
	}
	_putchar('\n');
	return (0);
}
