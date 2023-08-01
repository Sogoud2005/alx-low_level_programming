#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * r - reallocates memory
 * @list: old list
 * @size: size of the list
 * @new: new node
 * Return: pointer
*/
listint_t **r(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		return (NULL);
	}
	for (i = 0; i < size - 1; i++)
	{
		newlist[i] = list[i];
	}
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - frees a list
 * @h: head
 * Return: size
*/
size_t free_listint_safe(listint_t **h)
{
	size_t i, size = 0;
	listint_t **list = NULL;

	while (*h != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (*h == list[i])
			{
				free(list);
				*h = NULL;
				return (size);
			}
		}
		size++;
		list = r(list, size, *h);
		(*h) = (*h)->next;
	}
	free(list);
	return (size);
}
