#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - a
 * @s: A
 * Return: a
*/
int _atoi(const char *s)
{
int sign = 1
unsigned long int resp = 0, f, i;

for (f = 0; !(s[f] >= 48 && s[f] <= 57); f++)
{
if (s[f] == '-')
{
sign *= -1;
}
}
for (i = f; s[i] >= 48 && s[i] <= 57; i++)
{
resp *= 10;
resp += (s[i] - 48);
}

return (sign * resp);
}

/**
 * print - a
 * @n: a
 * Return: a
*/
void print(unsigned long int n)
{
	unsigned long int d = 1, i, resp;

	for (i = 0; n / d > 9; i++; d *= 10)
		;
	for (; d >= 1; n %= d, d /= 10)
	{
		resp = n / d;
		_putchar('0' + resp);
	}
}

/**
 * main - a
 * @argc: a
 * @argv: a
 * Return: a pointer
*/
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
if (argv[1] > 57 || argv[1] < 48)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
if (argv[2] > 57 || argv[2] < 48)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
	print(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
