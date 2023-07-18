#include "dog.h"
/**
 * init_dog - a
 * @d: a
 * @name: a
 * @age: a
 * @owner: a
 * Return: value
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
