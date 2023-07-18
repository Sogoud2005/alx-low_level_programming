#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a
 * @str: a
 * Return: no.
*/
int _strlen(const char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}
/**
 * _strcpy - a
 * @str: input
 * @dest: output
 * Return: a copy
*/
char *_strcpy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - a
 * @name: a
 * @age: a
 * @owner: a
 * Return: none
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);
	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * _strlen(name) + 1);
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);

	return (d);
}
