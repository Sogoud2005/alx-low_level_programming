#include "main.h"
/**
 * _strlen_recursion - a program
 * @s: ascii
 * Return: length
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	s++;
	i++;
	_strlen_recursion(s);
	return (i);
}
