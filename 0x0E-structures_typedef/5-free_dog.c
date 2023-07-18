#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - a
 * @d: a
 * Return: a
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
	free(d);
	}
}
