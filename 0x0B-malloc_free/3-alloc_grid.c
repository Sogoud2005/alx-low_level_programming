#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid - a
 * @width: a
 * @height: a
 * Return: value
*/
int **alloc_grid(int width, int height)
{
	int x = 0, y = 0;
	int **m;

	m = malloc(sizeof(*m) * height);

	if (width <= 0 || height <= 0 || m == 0)
	{
		return (NULL);
	}
	else
	{
	for (; x < height; x++)
	{
		m[x] = malloc(sizeof(**m) * width);
		if (m[x] == 0)
		{
			while (x--)
				free(m[x]);
			free(m);
			return (NULL);
		}
		for (; y < width; y++)
			m[x][y] = 0;
	}
	}
	return (m);
}
