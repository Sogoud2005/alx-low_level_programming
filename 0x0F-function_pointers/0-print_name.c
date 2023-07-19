#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - a
 * @name: a
 * Return: none
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
