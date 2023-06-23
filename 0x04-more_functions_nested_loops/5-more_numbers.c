#include "main.h"
/**
 * more_numbers - a program
 * Return: nothing
*/
void more_numbers(void)
{
	int n, c = 0;

	while (c < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
