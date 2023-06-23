#include "main.h"
/**
 * more_numbers - a program
 * Return: nothing
*/
void more_numbers(void)
{
	int c, n;

	for (c = 0; c < 10; c++)
	{
		_putchar('\n');
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
