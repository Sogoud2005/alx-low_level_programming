#include "main.h"
/**
 * _pow_recursion - a program
 * @x: ascii
 * @y: ascii
 * Return: value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x ^ y);
}
