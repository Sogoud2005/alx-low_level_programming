#include "main.h"
/**
 * _strlen - gets string length
 * @b: string
 * Return: strlen
*/

int _strlen(const char *b)
{
	int i = 0;

	while (*b++)
	{
		i++;
	}
	return (i);
}

/**
 * check_bi - converts binary to decimal
 * @b: pointer to binary
 * Return: 1 or 0
*/

int check_bi(const char *b)
{
	int i = 0;

	for (i = 0; i < _strlen(b); i++)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to binary
 * Return: int or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int n, num, dec = 0, last, base = 1;

	if (b == NULL)
	{
		return (0);
	}

	n = check_bi(b);

	if (n == 0)
	{
		return (0);
	}

	num = atoi(b);

	while (num)
	{
		last = num % 10;
		num = num / 10;

		dec += last * base;

		base = base * 2;
	}

	return (dec);
}
