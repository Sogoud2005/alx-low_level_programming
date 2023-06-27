#include "main.h"
/**
 * rev_string - a program
 * @s: a character
 * Return: nothing
*/
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;
	i--;
	_putchar('\n');
}
