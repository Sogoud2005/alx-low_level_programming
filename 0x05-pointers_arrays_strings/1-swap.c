#include "main.h"
/**
 * swap_int - a program
 * @a: a character
 * @b: a character
 * Return: nothing
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
