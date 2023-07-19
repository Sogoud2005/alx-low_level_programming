#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - a
 * @array: a
 * @size: a
 * @cmp: pointer
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
