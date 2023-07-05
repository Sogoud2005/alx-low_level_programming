#include "main.h"
/**
 * _sqrt_recursion - a program
 * @n: ascii
 * Return: value
*/
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - a program
 * @n: ascii
 * @i: ascii
 * Return: value
*/
int _sqrt(int n, int i)
{
	int s = i * i;

	if (s < n)
	{
		return (_sqrt(n, i + 1));
	}
	else if (s == n)
	{
		return (i);
	}
	return (-1);
}
