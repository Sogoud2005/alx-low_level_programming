#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - a
 * @array: a
 * @size: a
 * @action: a
 * Return: a
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
